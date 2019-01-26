// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "controller.h"
#include "input.h"
#include "draw.h"
#include "player.h"

// ---------------------------------------------------------------------------

extern const signed char* const spider[];
extern const signed char* const star[];

struct player player_1;

void init_player(
	struct player *player,
	signed int start_y,
	signed int start_x
	)
{
	init_character(
		&player->ch,
		start_y,
		start_x,
		PLAYER_HEIGHT,
		PLAYER_WIDTH,
		SPIDER_SCALE,
		CHARACTER_WALL_PASS_IN,
		PLAYER_SPEED,
		PLAYER_ANIM_TRESHOLD,
		PLAYER_MAX_FRAMES,
		spider,
		0
		);

	set_fire_dir_player(player, DIR_UP);

	player->start_y	= start_y;
	player->start_x	= start_x;

	player->score		= 0;
	player->num_lives	= PLAYER_NUM_LIVES;

	player->fire_counter	= 0;
	player->anim_counter	= 0;

	set_state_player(player, PLAYER_STATE_NORMAL);
}

void deinit_player(
	struct player *player
	)
{
	deinit_object(&player->ch.obj, 0);
}

void set_state_player(
	struct player *player,
	unsigned int state
	)
{
	player->state			= state;
	player->state_counter	= 0;
	player->state_changed	= 1;

	if (state == PLAYER_STATE_DEAD)
	{
		deinit_player(player);
	}
}

void set_walk_dir_player(
	struct player *player,
	unsigned int dir
	)
{
	player->ch.dir = dir;

	switch (dir)
	{
		case DIR_DOWN:
			player->ch.dy = -player->ch.move_speed;
			player->ch.dx =  0;
			break;

		case DIR_DOWN_RIGHT:
			player->ch.dy = -player->ch.move_speed;
			player->ch.dx =  player->ch.move_speed;
			break;

		case DIR_RIGHT:
			player->ch.dy =  0;
			player->ch.dx =  player->ch.move_speed;
			break;

		case DIR_UP_RIGHT:
			player->ch.dy =  player->ch.move_speed;
			player->ch.dx =  player->ch.move_speed;
			break;

		case DIR_UP:
			player->ch.dy =  player->ch.move_speed;
			player->ch.dx =  0;
			break;

		case DIR_UP_LEFT:
			player->ch.dy =  player->ch.move_speed;
			player->ch.dx = -player->ch.move_speed;
			break;

		case DIR_LEFT:
			player->ch.dy =  0;
			player->ch.dx = -player->ch.move_speed;
			break;

		case DIR_DOWN_LEFT:
			player->ch.dy = -player->ch.move_speed;
			player->ch.dx = -player->ch.move_speed;
			break;

		case DIR_NONE:
		default:
			player->ch.dy =  0;
			player->ch.dx =  0;
			break;
	}
}

void set_fire_dir_player(
	struct player *player,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT)
	{
         dir = DIR_DOWN;
    }

	player->fire_dir = dir;

	player->ch.base_frame = dir << 1;
}

unsigned int fire_bullet_player(
	struct player *player,
	unsigned int dir,
	unsigned int trigger
	)
{
	unsigned int fire = 0;

	if (trigger)
	{
		set_fire_dir_player(player, dir);
	}

	if (++player->fire_counter >= PLAYER_FIRE_THRESHOLD)
	{
		if (trigger)
		{
			player->fire_counter = 0;
			if (bullet_free_list != 0)
			{
				init_bullet(
					(struct bullet *) bullet_free_list,
					player->ch.obj.y,
					player->ch.obj.x,
					PLAYER_BULLET_HEIGHT,
					PLAYER_BULLET_WIDTH,
					player->fire_dir,
					PLAYER_BULLET_SPEED,
					PLAYER_SCALE/10,
					star
					);
				fire = 1;
			}
		}
	}

	return fire;
}

void move_player_1_no_fire(void)
{
	unsigned int move_trigger;
	unsigned int dir;
	struct wall *wall;
	unsigned int hit_wall = 0;

	player_1.state_changed = 0;

	if (player_1.ch.obj.active)
	{
		if (player_1.state == PLAYER_STATE_NORMAL || player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			if (!button_1_4_held())
			{
				move_trigger = get_dir_input_1(&dir);
				if (move_trigger)
				{
					set_walk_dir_player(&player_1, dir);
					animate_character(&player_1.ch);

					wall = (struct wall *) wall_list;
					while (wall != 0)
					{
						if (quick_check_wall_character(&player_1.ch, wall))
						{
							hit_wall = hit_wall_character(&player_1.ch, wall);
							if (hit_wall)
							{
								break;
							}
						}
						wall = (struct wall *) wall->obj.next;
					}

					if (!hit_wall)
					{
						move_character(&player_1.ch);
					}
				}
			}
		}
		else if (player_1.state == PLAYER_STATE_DYING)
		{
			set_fire_dir_player(&player_1, player_1.fire_dir + 1);
			if (++player_1.anim_counter >= PLAYER_SCALE_TRESHOLD)
			{
				player_1.anim_counter = 0;
				if (--player_1.ch.obj.scale < 1)
				{
					player_1.ch.obj.scale = 1;
				}
			}

			if (++player_1.state_counter >= PLAYER_DYING_TRESHOLD)
			{
				player_1.ch.obj.scale = SPIDER_SCALE;
				set_state_player(&player_1, PLAYER_STATE_DEAD);
			}
		}
		
		if (player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			if (++player_1.state_counter >= PLAYER_INVINSIBLE_TRESHOLD)
			{
				set_state_player(&player_1, PLAYER_STATE_NORMAL);
			}
		}
	}
	else if (player_1.state == PLAYER_STATE_DEAD)
	{
		if (player_1.num_lives > 0)
		{
			if (++player_1.state_counter >= PLAYER_DEAD_TRESHOLD)
			{
				player_1.num_lives--;
				player_1.ch.obj.y = player_1.start_y;
				player_1.ch.obj.x = player_1.start_x;
				set_fire_dir_player(&player_1, DIR_UP);
				set_state_player(&player_1, PLAYER_STATE_INVINSIBLE);
				player_1.ch.obj.active = 1;
			}
		}
	}
}

unsigned int move_single_joystick_player_1(void)
{
	unsigned int fire_trigger, move_trigger;
	unsigned int dir;
	struct wall *wall;
	unsigned int hit_wall = 0;
	unsigned int fire = 0;

	player_1.state_changed = 0;

	if (player_1.ch.obj.active)
	{
		if (player_1.state == PLAYER_STATE_NORMAL || player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			if (!button_1_4_held())
			{
				move_trigger = get_dir_input_1(&dir);
				if (move_trigger)
				{
					set_walk_dir_player(&player_1, dir);
					animate_character(&player_1.ch);

					wall = (struct wall *) wall_list;
					while (wall != 0)
					{
						if (quick_check_wall_character(&player_1.ch, wall))
						{
							hit_wall = hit_wall_character(&player_1.ch, wall);
							if (hit_wall)
							{
								break;
							}
						}
						wall = (struct wall *) wall->obj.next;
					}

					if (!hit_wall)
					{
						move_character(&player_1.ch);
					}
				}
			}
			else
			{
				fire_trigger = get_dir_input_1(&dir);
				fire = fire_bullet_player(&player_1, dir, fire_trigger);
			}
		}
		else if (player_1.state == PLAYER_STATE_DYING)
		{
			set_fire_dir_player(&player_1, player_1.fire_dir + 1);
			if (++player_1.anim_counter >= PLAYER_SCALE_TRESHOLD)
			{
				player_1.anim_counter = 0;
				if (--player_1.ch.obj.scale < 1)
				{
					player_1.ch.obj.scale = 1;
				}
			}

			if (++player_1.state_counter >= PLAYER_DYING_TRESHOLD)
			{
				player_1.ch.obj.scale = SPIDER_SCALE;
				set_state_player(&player_1, PLAYER_STATE_DEAD);
			}
		}
		
		if (player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			if (++player_1.state_counter >= PLAYER_INVINSIBLE_TRESHOLD)
			{
				set_state_player(&player_1, PLAYER_STATE_NORMAL);
			}
		}
	}
	else if (player_1.state == PLAYER_STATE_DEAD)
	{
		if (player_1.num_lives > 0)
		{
			if (++player_1.state_counter >= PLAYER_DEAD_TRESHOLD)
			{
				player_1.num_lives--;
				player_1.ch.obj.y = player_1.start_y;
				player_1.ch.obj.x = player_1.start_x;
				set_fire_dir_player(&player_1, DIR_UP);
				set_state_player(&player_1, PLAYER_STATE_INVINSIBLE);
				player_1.ch.obj.active = 1;
			}
		}
	}

	return fire;
}

unsigned int move_dual_joystick_player_1(void)
{
	unsigned int fire_trigger, move_trigger;
	unsigned int dir;
	struct wall *wall;
	unsigned int hit_wall = 0;
	unsigned int fire = 0;

	player_1.state_changed = 0;

	if (player_1.ch.obj.active)
	{
		if (player_1.state == PLAYER_STATE_NORMAL || player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			move_trigger = get_dir_input_1(&dir);
			if (move_trigger)
			{
				set_walk_dir_player(&player_1, dir);
				animate_character(&player_1.ch);

				wall = (struct wall *) wall_list;
				while (wall != 0)
				{
					if (quick_check_wall_character(&player_1.ch, wall))
					{
						hit_wall = hit_wall_character(&player_1.ch, wall);
						if (hit_wall)
						{
							break;
						}
					}
					wall = (struct wall *) wall->obj.next;
				}

				if (!hit_wall)
				{
					move_character(&player_1.ch);
				}
			}

			fire_trigger = get_dir_input_2(&dir);
			fire = fire_bullet_player(&player_1, dir, fire_trigger);
		}
		else if (player_1.state == PLAYER_STATE_DYING)
		{
			set_fire_dir_player(&player_1, player_1.fire_dir + 1);
			if (++player_1.anim_counter >= PLAYER_SCALE_TRESHOLD)
			{
				player_1.anim_counter = 0;
				if (--player_1.ch.obj.scale < 1)
				{
					player_1.ch.obj.scale = 1;
				}
			}

			if (++player_1.state_counter >= PLAYER_DYING_TRESHOLD)
			{
				player_1.ch.obj.scale = SPIDER_SCALE;
				set_state_player(&player_1, PLAYER_STATE_DEAD);
			}
		}
		
		if (player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			if (++player_1.state_counter >= PLAYER_INVINSIBLE_TRESHOLD)
			{
				set_state_player(&player_1, PLAYER_STATE_NORMAL);
			}
		}
	}
	else if (player_1.state == PLAYER_STATE_DEAD)
	{
		if (player_1.num_lives > 0)
		{
			if (++player_1.state_counter >= PLAYER_DEAD_TRESHOLD)
			{
				player_1.num_lives--;
				player_1.ch.obj.y = player_1.start_y;
				player_1.ch.obj.x = player_1.start_x;
				set_fire_dir_player(&player_1, DIR_UP);
				set_state_player(&player_1, PLAYER_STATE_INVINSIBLE);
				player_1.ch.obj.active = 1;
			}
		}
	}

	return fire;
}

struct enemy* interaction_enemies_player_1(void)
{
	struct enemy *enemy;
	struct bullet *bullet;
	struct bullet *rem_bullet = 0;
	struct enemy *result = 0;

	if (player_1.ch.obj.active)
	{
		enemy = (struct enemy *) enemy_list;
		while (enemy != 0)
		{
			if (player_1.state == PLAYER_STATE_NORMAL)
			{
				if (enemy->state == ENEMY_STATE_MOVE || enemy->state == ENEMY_STATE_STOP)
				{
					if (hit_object(&player_1.ch.obj, &enemy->ch.obj))
					{
						set_state_player(&player_1, PLAYER_STATE_DYING);
					}
				}
				else if (enemy->state == ENEMY_STATE_EXPLODE)
				{
					if (explosion_hit_object_enemy(enemy, &player_1.ch.obj))
					{
						set_state_player(&player_1, PLAYER_STATE_DYING);
					}
				}
			}

			bullet = (struct bullet *) bullet_list;
			while (bullet != 0)
			{
				if (enemy->state == ENEMY_STATE_MOVE || enemy->state == ENEMY_STATE_STOP)
				{
					if (hit_object(&bullet->obj, &enemy->ch.obj))
					{
						rem_bullet = bullet;
						if (hit_enemy(enemy))
						{
							result = enemy;
						}
					}
				}
				bullet = (struct bullet *) bullet->obj.next;

				if (rem_bullet != 0)
				{
					deinit_bullet(rem_bullet);
					rem_bullet = 0;
				}
			}
			enemy = (struct enemy *) enemy->ch.obj.next;
		}
	}

	return result;
}

unsigned int interaction_food_player_1(void)
{
	struct food *food;
	struct food *rem_food = 0;
	unsigned int result = 0;

	food = (struct food *) food_list;
	while (food != 0)
	{
		if (hit_object(&player_1.ch.obj, &food->obj))
		{
			rem_food = food;
			player_1.score += (unsigned int) food->value;
			result = 1;
		}
		food = (struct food *) food->obj.next;

		if (rem_food != 0)
		{
			deinit_food(rem_food);
			rem_food = 0;
		}
	}

	return result;
}

void interaction_projectiles_player_1(void)
{
	struct projectile *proj;
	struct projectile *rem_proj = 0;

	proj = (struct projectile *) projectile_list;
	while (proj != 0)
	{
		if (hit_object(&player_1.ch.obj, &proj->obj))
		{
			rem_proj = proj;
			set_state_player(&player_1, PLAYER_STATE_DYING);
		}
		proj = (struct projectile *) proj->obj.next;

		if (rem_proj != 0)
		{
			deinit_projectile(rem_proj);
			rem_proj = 0;
		}
	}
}

void draw_player_1(void)
{
	if (player_1.ch.obj.active)
	{
		if (player_1.state == PLAYER_STATE_INVINSIBLE)
		{
			if (++player_1.anim_counter >= PLAYER_BLINK_TRESHOLD)
			{
				player_1.anim_counter = 0;
				draw_synced_list_c(
					player_1.ch.shapes[player_1.ch.base_frame + player_1.ch.frame],
					player_1.ch.obj.y,
					player_1.ch.obj.x,
					OBJECT_MOVE_SCALE,
					player_1.ch.obj.scale
					);
			}
		}
		else if (player_1.state != PLAYER_STATE_DEAD)
		{
			draw_synced_list_c(
				player_1.ch.shapes[player_1.ch.base_frame + player_1.ch.frame],
				player_1.ch.obj.y,
				player_1.ch.obj.x,
				OBJECT_MOVE_SCALE,
				player_1.ch.obj.scale
				);
		}
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
