// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "draw.h"
#include "enemy.h"

// ---------------------------------------------------------------------------

extern const signed char *spiral[];
extern const signed char *fly[];
extern const signed char *bug[];
extern const signed char *bee[];

const struct enemy_race enemy_races[] =
{
	/*	h	w	scale	type				speed	num_hits		treshold		shapes	*/
	{	7,	7,	0x40,	ENEMY_TYPE_FLYER,	1,		1,			1,			fly		},
	{	10,	10,	0x40,	ENEMY_TYPE_FLYER,	1,		5,			2,			bee		},
	{	12,	12,	0x40,	ENEMY_TYPE_HOMER,	1,		-1,			3,			bug		}
};

void init_enemy(
	struct enemy *enemy,
	signed int y,
	signed int x,
	const struct enemy_race *race, 
	unsigned int num_steps,
	const struct enemy_path *path
	)
{
	static unsigned int start_step = 0;

	if (++start_step >= num_steps)
	{
		start_step = 0;
	}

	init_character(
		&enemy->ch,
		y,
		x,
		race->h,
		race->w,
		race->scale,
		race->speed,
		race->treshold,
		2,
		race->shapes
		);

	enemy->type			= race->type;
	enemy->num_hits		= race->num_hits;
	enemy->counter		= 0;
	enemy->spawn_counter	= 0;
	enemy->step_counter	= start_step;
	enemy->num_steps		= num_steps;
	enemy->path			= path;

	set_dir_enemy(enemy, DIR_DOWN/*enemy->path[enemy->step_counter].dir*/);
	set_state_enemy(enemy, ENEMY_STATE_SPAWN);
}

void set_dir_enemy(
	struct enemy *enemy,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
         dir = DIR_DOWN;
    }

	set_dir_character(&enemy->ch, dir);

	enemy->ch.base_frame = dir << 1;
}

void set_state_enemy(
	struct enemy *enemy,
	unsigned int state
	)
{
	enemy->state = state;
	enemy->state_counter = 0;
}

static void move_flyer_enemy(
	struct enemy *enemy
	)
{
	animate_character(&enemy->ch);

	if (++enemy->counter >= enemy->path[enemy->step_counter].treshold)
	{
		enemy->counter = 0;
		set_dir_enemy(enemy, enemy->path[enemy->step_counter].dir);
		if (++enemy->step_counter >= enemy->num_steps)
		{
			enemy->step_counter = 0;
		}
	}

	if (move_character(&enemy->ch))
	{
		if (++enemy->step_counter >= enemy->num_steps)
		{
			enemy->step_counter = 0;
		}
		set_dir_enemy(enemy, enemy->path[enemy->step_counter].dir);
	}
}

static void move_homer_enemy(
	struct enemy *enemy,
	signed int dest_y,
	signed int dest_x
	)
{
	signed int src_y;
	signed int src_x;

	src_y = enemy->ch.obj.y;
	src_x = enemy->ch.obj.x;

	if (src_y < dest_y && src_x < dest_x)
	{
		set_dir_enemy(enemy, DIR_UP_RIGHT);
	}
	else if (src_y < dest_y && src_x == dest_x)
	{
		set_dir_enemy(enemy, DIR_UP);
	}
	else if (src_y < dest_y && src_x > dest_x)
	{
		set_dir_enemy(enemy, DIR_UP_LEFT);
	}
	else if (src_y == dest_y && src_x < dest_x)
	{
		set_dir_enemy(enemy, DIR_RIGHT);
	}
	else if (src_y == dest_y && src_x > dest_x)
	{
		set_dir_enemy(enemy, DIR_LEFT);
	}
	else if (src_y > dest_y && src_x < dest_x)
	{
		set_dir_enemy(enemy, DIR_DOWN_RIGHT);
	}
	else if (src_y > dest_y && src_x == dest_x)
	{
		set_dir_enemy(enemy, DIR_DOWN);
	}
	else if (src_y > dest_y && src_x > dest_x)
	{
		set_dir_enemy(enemy, DIR_DOWN_LEFT);
	}

	animate_character(&enemy->ch);
	move_character(&enemy->ch);
}

void move_enemy(
	struct enemy *enemy,
	signed int dest_y,
	signed int dest_x
	)
{
	if (enemy->ch.obj.active)
	{
		if (enemy->state == ENEMY_STATE_SPAWN)
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
		if (enemy->state == ENEMY_STATE_STOP)
		{
			if (++enemy->state_counter >= ENEMY_STOP_TRESHOLD)
			{
				set_state_enemy(enemy, ENEMY_STATE_MOVE);
			}
		}
		else if (enemy->state == ENEMY_STATE_MOVE)
		{
			switch (enemy->type)
			{
				case ENEMY_TYPE_FLYER:
					move_flyer_enemy(enemy);
					break;

				case ENEMY_TYPE_HOMER:
					move_homer_enemy(enemy, dest_y, dest_x);
					break;

				default:
					break;
			}
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
			enemy->ch.obj.active = 0;
			result = 1;
		}
	}

	if (enemy->ch.obj.active)
	{
		retreat_character(&enemy->ch);
		set_state_enemy(enemy, ENEMY_STATE_STOP);
	}

	return result;
}

void draw_enemy(
	struct enemy *enemy
	)
{
	if (enemy->state == ENEMY_STATE_SPAWN)
	{
		if (enemy->ch.obj.active)
		{
			draw_synced_list_c(
				spiral[enemy->ch.frame],
				enemy->ch.obj.y,
				enemy->ch.obj.x,
				OBJECT_MOVE_SCALE,
				0x01 + (enemy->state_counter << 1)
				);
		}
	}
	else
	{
		draw_character(&enemy->ch);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
