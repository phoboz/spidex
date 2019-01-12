// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "draw.h"
#include "player.h"
#include "enemy.h"

// ---------------------------------------------------------------------------

extern const signed char cicle[];
extern const signed char* const spiral[];
extern const signed char* const egg[];
extern const signed char* const mosquito[];
extern const signed char* const fly[];
extern const signed char* const butterfly[];
extern const signed char* const bug[];
extern const signed char* const bee[];
extern const signed char* const mine[];

const struct enemy_race enemy_races[] =
{
	/*	h	w	scale	type					speed	max_hits	special				treshold	shapes	*/
	{	4,	4,	0x40/10,	ENEMY_TYPE_RANDOM,		2,		1,		ENEMY_SPECIAL_NONE,	1,		mosquito	},
	{	7,	7,	0x40/10,	ENEMY_TYPE_FLYER,		1,		1,		ENEMY_SPECIAL_NONE,	1,		fly		},
	{	10,	10,	0x40/10,	ENEMY_TYPE_RANDOM,		2,		2,		ENEMY_SPECIAL_NONE,	4,		butterfly	},
	{	10,	10,	0x40/10,	ENEMY_TYPE_FLYER,		2,		5,		ENEMY_SPECIAL_NONE,	2,		bee		},
	{	12,	12,	0x40/10,	ENEMY_TYPE_HOMER,		1,		-1,		ENEMY_SPECIAL_EGG,		3,		bug		},
	{	7,	7,	8/*0x40/10*/,	ENEMY_TYPE_FLYER,	2,		1,		ENEMY_SPECIAL_EXPLODE,	2,		mine		}
};

struct object *enemy_list = 0;

void init_enemy(
	struct enemy *enemy,
	signed int y,
	signed int x,
	const struct enemy_race *race, 
	unsigned int num_steps,
	const struct enemy_path *path
	)
{
	init_character(
		&enemy->ch,
		y,
		x,
		race->h,
		race->w,
		race->scale,
		WALL_MODE_PASS_OUT,
		race->speed,
		race->treshold,
		2,
		race->shapes,
		&enemy_list
		);

	enemy->race			= race;
	enemy->num_hits		= race->max_hits;
	enemy->path_counter	= 0;
	enemy->spawn_counter	= 0;
	enemy->step_counter	= 0;
	enemy->num_steps		= num_steps;
	enemy->path			= path;

	if (enemy->race->type == ENEMY_TYPE_FLYER)
	{
		set_dir_character(&enemy->ch, enemy->path[0].dir);
	}
	else
	{
		set_dir_character(&enemy->ch, DIR_DOWN);
	}

	if (enemy->race->special == ENEMY_SPECIAL_EGG)
	{
		set_state_enemy(enemy, ENEMY_STATE_EGG);
	}
	else
	{
		set_state_enemy(enemy, ENEMY_STATE_SPAWN);
	}
}

void deinit_enemy(
	struct enemy *enemy
	)
{
	deinit_object(&enemy->ch.obj, &enemy_list);
}

void set_state_enemy(
	struct enemy *enemy,
	unsigned int state
	)
{
	enemy->state = state;
	enemy->state_counter = 0;

	if (state == ENEMY_STATE_DEAD)
	{
		deinit_enemy(enemy);
	}
}

static void set_random_dir_enemy(
	struct enemy *enemy
	)
{
	unsigned int rnd = random();

	if (rnd < ENEMY_RANDOM_RANGE_DOWN)
	{
		set_dir_character(&enemy->ch, DIR_DOWN);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_DOWN_RIGHT)
	{
		set_dir_character(&enemy->ch, DIR_DOWN_RIGHT);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_RIGHT)
	{
		set_dir_character(&enemy->ch, DIR_RIGHT);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_UP_RIGHT)
	{
		set_dir_character(&enemy->ch, DIR_UP_RIGHT);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_UP)
	{
		set_dir_character(&enemy->ch, DIR_UP);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_UP_LEFT)
	{
		set_dir_character(&enemy->ch, DIR_UP_LEFT);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_LEFT)
	{
		set_dir_character(&enemy->ch, DIR_LEFT);
	}
	else if (rnd < ENEMY_RANDOM_RANGE_DOWN_LEFT)
	{
		set_dir_character(&enemy->ch, DIR_DOWN_LEFT);
	}
}

static void move_random_enemy(
	struct enemy *enemy
	)
{
	animate_character(&enemy->ch);

	if (++enemy->path_counter >= enemy->num_steps)
	{
		enemy->path_counter = 0;
		set_random_dir_enemy(enemy);
	}

	if (move_character(&enemy->ch))
	{
		set_random_dir_enemy(enemy);
	}
}

static void move_flyer_enemy(
	struct enemy *enemy
	)
{
	struct wall *wall;
	unsigned int hit_wall = 0;

	animate_character(&enemy->ch);

	if (++enemy->path_counter >= enemy->path[enemy->step_counter].treshold)
	{
		enemy->path_counter = 0;
		if (++enemy->step_counter >= enemy->num_steps)
		{
			enemy->step_counter = 0;
		}

		set_dir_character(&enemy->ch, enemy->path[enemy->step_counter].dir);
	}

	if (enemy->race->special == ENEMY_SPECIAL_EXPLODE)
	{
		wall = (struct wall *) wall_list;
		while (wall != 0)
		{
			if (quick_check_wall_character(&enemy->ch, wall))
			{
				hit_wall = hit_wall_character(&enemy->ch, wall);
				if (hit_wall)
				{
					break;
				}
			}
			wall = (struct wall *) wall->obj.next;
		}

		if (!hit_wall)
		{
			animate_character(&enemy->ch);
			if (move_character(&enemy->ch))
			{
				if (++enemy->step_counter >= enemy->num_steps)
				{
					enemy->step_counter = 0;
				}
				set_dir_character(&enemy->ch, enemy->path[enemy->step_counter].dir);
			}
		}
		else
		{
			set_state_enemy(enemy, ENEMY_STATE_EXPLODE);
		}
	}
	else
	{
		if (move_character(&enemy->ch))
		{
			if (++enemy->step_counter >= enemy->num_steps)
			{
				enemy->step_counter = 0;
			}
			set_dir_character(&enemy->ch, enemy->path[enemy->step_counter].dir);
		}
	}
}

static void move_homer_enemy(
	struct enemy *enemy,
	signed int dest_y,
	signed int dest_x
	)
{
	signed int src_y, src_x;
	struct wall *wall;
	unsigned int hit_wall = 0;

	src_y = enemy->ch.obj.y;
	src_x = enemy->ch.obj.x;

	if (src_y < dest_y && src_x < dest_x)
	{
		set_dir_character(&enemy->ch, DIR_UP_RIGHT);
	}
	else if (src_y < dest_y && src_x == dest_x)
	{
		set_dir_character(&enemy->ch, DIR_UP);
	}
	else if (src_y < dest_y && src_x > dest_x)
	{
		set_dir_character(&enemy->ch, DIR_UP_LEFT);
	}
	else if (src_y == dest_y && src_x < dest_x)
	{
		set_dir_character(&enemy->ch, DIR_RIGHT);
	}
	else if (src_y == dest_y && src_x > dest_x)
	{
		set_dir_character(&enemy->ch, DIR_LEFT);
	}
	else if (src_y > dest_y && src_x < dest_x)
	{
		set_dir_character(&enemy->ch, DIR_DOWN_RIGHT);
	}
	else if (src_y > dest_y && src_x == dest_x)
	{
		set_dir_character(&enemy->ch, DIR_DOWN);
	}
	else if (src_y > dest_y && src_x > dest_x)
	{
		set_dir_character(&enemy->ch, DIR_DOWN_LEFT);
	}

	wall = (struct wall *) wall_list;
	while (wall != 0)
	{
		if (quick_check_wall_character(&enemy->ch, wall))
		{
			hit_wall = hit_wall_character(&enemy->ch, wall);
			if (hit_wall)
			{
				break;
			}
		}
		wall = (struct wall *) wall->obj.next;
	}

	if (!hit_wall)
	{
		animate_character(&enemy->ch);
		move_character(&enemy->ch);
	}
	else
	{
		if (enemy->race->special == ENEMY_SPECIAL_EXPLODE)
		{
			set_state_enemy(enemy, ENEMY_STATE_EXPLODE);
		}
		else
		{
			set_state_enemy(enemy, ENEMY_STATE_STOP);
		}
	}
}

static void move_egg_enemy(
	struct enemy *enemy
	)
{
	if (enemy->state == ENEMY_STATE_EGG)
	{
		if (++enemy->state_counter >= ENEMY_EGG_TRESHOLD)
		{
			set_state_enemy(enemy, ENEMY_STATE_HATCH);
		}
	}
	else if (enemy->state == ENEMY_STATE_HATCH)
	{
		if (++enemy->state_counter >= ENEMY_HATCH_TRESHOLD)
		{
			set_state_enemy(enemy, ENEMY_STATE_MOVE);
		}
	}
}

void move_enemy(
	struct enemy *enemy,
	struct object *obj
	)
{
	if (enemy->ch.obj.active)
	{
		if (enemy->state == ENEMY_STATE_MOVE)
		{
			switch (enemy->race->type)
			{
				case ENEMY_TYPE_RANDOM:
					move_random_enemy(enemy);
					break;

				case ENEMY_TYPE_FLYER:
					move_flyer_enemy(enemy);
					break;

				case ENEMY_TYPE_HOMER:
					move_homer_enemy(enemy, obj->y, obj->x);
					break;

				default:
					break;
			}
		}
		else if (enemy->state == ENEMY_STATE_SPAWN)
		{
			if (++enemy->ch.counter >= ENEMY_SPAWN_ANIM_TRESHOLD)
			{
				enemy->ch.counter = 0;
				if (++enemy->ch.frame >= ENEMY_SPAWN_ANIM_FRAMES)
				{
					enemy->ch.frame = 0;
				}
			}

			if (++enemy->state_counter >= ENEMY_SPAWN_TRESHOLD)
			{
				enemy->ch.counter = 0;
				enemy->ch.frame = 0;
				set_state_enemy(enemy, ENEMY_STATE_MOVE);
			}
		}
		else if (enemy->state == ENEMY_STATE_STOP)
		{
			if (++enemy->state_counter >= ENEMY_STOP_TRESHOLD)
			{
				set_state_enemy(enemy, ENEMY_STATE_MOVE);
			}
		}
		else if (enemy->state == ENEMY_STATE_EXPLODE)
		{
			if (++enemy->state_counter >= ENEMY_EXPLODE_TRESHOLD)
			{
				set_state_enemy(enemy, ENEMY_STATE_DEAD);
			}
		}
		else if (enemy->state == ENEMY_STATE_EGG || enemy->state == ENEMY_STATE_HATCH)
		{
			move_egg_enemy(enemy);
		}
	}
}

unsigned int hit_enemy(
	struct enemy *enemy
	)
{
	unsigned int result = 0;

	if (enemy->num_hits > 0)
	{
		if (--enemy->num_hits == 0)
		{
			if (enemy->race->special == ENEMY_SPECIAL_EXPLODE)
			{
				set_state_enemy(enemy, ENEMY_STATE_EXPLODE);
			}
			else
			{
				set_state_enemy(enemy, ENEMY_STATE_DEAD);
				result = 1;
			}
		}
	}

	if (enemy->state != ENEMY_STATE_EXPLODE)
	{
		if (enemy->ch.obj.active)
		{
			retreat_character(&enemy->ch);
			set_state_enemy(enemy, ENEMY_STATE_STOP);
		}
	}

	return result;
}

unsigned int hit_object_enemy(
	struct enemy *enemy,
	struct object *obj
	)
{
	unsigned int r;
	signed int dy, dx;
	unsigned int result = 0;

	if (enemy->ch.obj.active)
	{
		if (enemy->state == ENEMY_STATE_STOP || enemy->state == ENEMY_STATE_MOVE)
		{
			if (hit_object(obj, &enemy->ch.obj))
			{
				result = 1;
			}
		}
		else if (enemy->state == ENEMY_STATE_EXPLODE)
		{
			dy = enemy->ch.obj.y - obj->y;
			dx = enemy->ch.obj.x - obj->x;
			r = ENEMY_EXPLOSION_RADIUS + (enemy->state_counter << 2);
			if ((unsigned int) abs(dy) + (unsigned int) abs(dx) < r)
			{
				result = 1;
			}
		}
	}

	return result;
}

void draw_enemies(void)
{
	struct enemy *enemy;

	enemy = (struct enemy *) enemy_list;
	while (enemy != 0)
	{
		if (enemy->state == ENEMY_STATE_SPAWN)
		{
			draw_synced_list_c(
				spiral[enemy->ch.frame],
				enemy->ch.obj.y,
				enemy->ch.obj.x,
				OBJECT_MOVE_SCALE,
				0x01 + (enemy->state_counter >> 2)
				);
		}
		else if (enemy->state == ENEMY_STATE_EGG)
		{
			draw_synced_list_c(
				egg[0],
				enemy->ch.obj.y,
				enemy->ch.obj.x,
				OBJECT_MOVE_SCALE,
				0x40/10
				);
		}
		else if (enemy->state == ENEMY_STATE_HATCH)
		{
			draw_synced_list_c(
				egg[1],
				enemy->ch.obj.y,
				enemy->ch.obj.x,
				OBJECT_MOVE_SCALE,
				0x40/10
				);
		}
		else if (enemy->state == ENEMY_STATE_EXPLODE)
		{
			draw_synced_list_c(
				cicle,
				enemy->ch.obj.y,
				enemy->ch.obj.x,
				OBJECT_MOVE_SCALE,
				0x40/10 + (enemy->state_counter << 2)
				);
		}
		else
		{
			draw_synced_list_c(
				enemy->ch.shapes[enemy->ch.base_frame + enemy->ch.frame],
				enemy->ch.obj.y,
				enemy->ch.obj.x,
				OBJECT_MOVE_SCALE,
				enemy->ch.obj.scale
				);
		}

		enemy = (struct enemy *) enemy->ch.obj.next;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
