// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "input.h"
#include "player.h"

// ---------------------------------------------------------------------------

extern const signed char* const spider[];
extern const signed char star[];

void init_player(
	struct player *player,
	signed int y,
	signed int x
	)
{
	unsigned int i;

	init_character(
		&player->ch,
		y,
		x,
		PLAYER_HEIGHT,
		PLAYER_WIDTH,
		SPIDER_SCALE,
		PLAYER_SPEED,
		PLAYER_ANIM_TRESHOLD,
		PLAYER_MAX_FRAMES,
		spider
		);

	player->score		= 0;
	player->num_lives	= PLAYER_NUM_LIVES;

	player->fire_counter	= 0;
	player->anim_counter	= 0;

	set_state_player(player, PLAYER_STATE_NORMAL);

	for (i = 0; i < PLAYER_MAX_BULLETS; i++) {
		player->bullet[i].obj.active = 0;
	}
}

void set_state_player(
	struct player *player,
	unsigned int state
	)
{
	player->state			= state;
	player->state_counter	= 0;
	player->state_changed	= 1;
}

void set_fire_dir_player(
	struct player *player,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
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
	unsigned int i;
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
			for (i = 0; i < PLAYER_MAX_BULLETS; i++)
			{
				if (!player->bullet[i].obj.active)
				{
					init_bullet(
						&player->bullet[i],
						player->ch.obj.y,
						player->ch.obj.x,
						PLAYER_BULLET_HEIGHT,
						PLAYER_BULLET_WIDTH,
						player->fire_dir,
						PLAYER_BULLET_SPEED,
						PLAYER_SCALE/10,
						star
						);
					fire = i + 1;
					break;
				}
			}
		}
	}

	return fire;
}

unsigned int move_player(
	struct player *player,
	unsigned int num_walls,
	struct wall *walls
	)
{
	unsigned int i;
	signed int dy, dx;
	unsigned int fire_trigger, move_trigger;
	unsigned int dir;
	unsigned int fire_tried = 0;
	unsigned int fire = 0;

	if (player->ch.obj.active)
	{
		if (player->state == PLAYER_STATE_NORMAL || player->state == PLAYER_STATE_INVINSIBLE)
		{
			update_input();

			if (!get_fire_input_1())
			{
				move_trigger = get_dir_input_1(&dir);
				if (move_trigger)
				{
					set_dir_character(&player->ch, dir);
					animate_character(&player->ch);
					get_move_character(&player->ch, player->ch.move_speed, &dy, &dx);

					if (!interaction_walls_character(
							&player->ch,
							dy,
							dx,
							CHARACTER_WALL_MODE_PASS_IN,
							num_walls,
							walls
							))
					{
						player->ch.obj.y += dy;
						player->ch.obj.x += dx;
						limit_move_character(&player->ch);
					}
				}
			}
			else
			{
				fire_trigger = get_dir_input_1(&dir);
				fire = fire_bullet_player(player, dir, fire_trigger);
				fire_tried = 1;
			}

			if (!fire && !fire_tried)
			{
				fire_trigger = get_dir_input_2(&dir);
				fire = fire_bullet_player(player, dir, fire_trigger);
			}
		}
		else if (player->state == PLAYER_STATE_DYING)
		{
			set_fire_dir_player(player, player->fire_dir + 1);
			if (++player->anim_counter >= PLAYER_SCALE_TRESHOLD)
			{
				player->anim_counter = 0;
				if (--player->ch.obj.scale < 1)
				{
					player->ch.obj.scale = 1;
				}
			}

			if (++player->state_counter >= PLAYER_DYING_TRESHOLD)
			{
				player->ch.obj.y = 0;
				player->ch.obj.x = 0;
				player->ch.obj.scale = SPIDER_SCALE;
				set_state_player(player, PLAYER_STATE_DEAD);
				player->ch.obj.active = 0;
			}
		}
		
		if (player->state == PLAYER_STATE_INVINSIBLE)
		{
			if (++player->state_counter >= PLAYER_INVINSIBLE_TRESHOLD)
			{
				set_state_player(player, PLAYER_STATE_NORMAL);
			}
		}

		if (player->state_changed)
		{
			player->state_changed = 0;
		}
	}
	else if (player->state == PLAYER_STATE_DEAD)
	{
		if (player->num_lives > 0)
		{
			if (++player->state_counter >= PLAYER_DEAD_TRESHOLD)
			{
				player->num_lives--;
				set_state_player(player, PLAYER_STATE_INVINSIBLE);
				player->ch.obj.active = 1;
			}
		}
	}

	for (i = 0; i < PLAYER_MAX_BULLETS; i++)
	{
		move_bullet(&player->bullet[i]);
	}

	return fire;
}

unsigned int interaction_enemies_player(
	struct player *player,
	unsigned int num_enemies,
	struct enemy *enemies
	)
{
	unsigned int i, j;
	unsigned int result = 0;

	if (player->ch.obj.active)
	{
		for (i = 0; i < num_enemies; i++)
		{
			if (player->state == PLAYER_STATE_NORMAL && enemies[i].state != ENEMY_STATE_SPAWN)
			{
				if (hit_object_enemy(&enemies[i], &player->ch.obj))
				{
					set_state_player(player, PLAYER_STATE_DYING);
				}
			}

			for (j = 0; j < PLAYER_MAX_BULLETS; j++)
			{
				if (enemies[i].state != ENEMY_STATE_SPAWN)
				{
					if (player->bullet[j].obj.active)
					{
						if (hit_object(&player->bullet[j].obj, &enemies[i].ch.obj))
						{
							player->bullet[j].obj.active = 0;
							if (hit_enemy(&enemies[i]))
							{
								result = 1 + i;
							}
							break;
						}
					}
				}
			}
		}
	}

	return result;
}

void interaction_food_player(
	struct player *player,
	unsigned int num_food,
	struct food *food
	)
{
	unsigned int i;

	for (i = 0; i < num_food; i++)
	{
		if (hit_object(&player->ch.obj, &food[i].obj))
		{
			food[i].obj.active = 0;
			player->score++;
		}
	}
}

void draw_player(
	struct player *player
	)
{
	unsigned int i;

	if (player->ch.obj.active)
	{
		if (player->state == PLAYER_STATE_INVINSIBLE)
		{
			if (++player->anim_counter >= PLAYER_BLINK_TRESHOLD)
			{
				player->anim_counter = 0;
				draw_character(&player->ch);
			}
		}
		else if (player->state != PLAYER_STATE_DEAD)
		{
			draw_character(&player->ch);
		}
	}

	for (i = 0; i < PLAYER_MAX_BULLETS; i++)
	{
		draw_object(&player->bullet[i].obj);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
