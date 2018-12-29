// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "input.h"
#include "player.h"

// ---------------------------------------------------------------------------

extern const signed char *spider[];
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
		PLAYER_SCALE,
		PLAYER_SPEED,
		PLAYER_ANIM_TRESHOLD,
		PLAYER_MAX_FRAMES,
		spider
		);

	player->score		= 0;
	player->counter	= 0;

	for (i = 0; i < PLAYER_MAX_BULLETS; i++) {
		player->bullet[i].obj.active = 0;
	}
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

	if (++player->counter >= PLAYER_FIRE_THRESHOLD)
	{
		if (trigger)
		{
			player->counter = 0;
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
						PLAYER_SCALE,
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
	struct player *player
	)
{
	unsigned int i;
	unsigned int fire_trigger, move_trigger;
	unsigned int dir;
	unsigned int fire_tried = 0;
	unsigned int fire = 0;

	if (player->ch.obj.active)
	{
		update_input();

		if (!get_fire_input_1())
		{
			move_trigger = get_dir_input_1(&dir);
			if (move_trigger)
			{
				set_dir_character(&player->ch, dir);
				animate_character(&player->ch);
				move_character(&player->ch);
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

	for (i = 0; i < num_enemies; i++)
	{
		if (hit_object(&player->ch.obj, &enemies[i].ch.obj))
		{
			player->ch.obj.active = 0;
		}

		for (j = 0; j < PLAYER_MAX_BULLETS; j++)
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

	draw_character(&player->ch);

	for (i = 0; i < PLAYER_MAX_BULLETS; i++)
	{
		if (player->bullet[i].obj.active)
		{
			draw_object(&player->bullet[i].obj);
		}
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
