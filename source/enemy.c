// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "enemy.h"

// ---------------------------------------------------------------------------


void init_enemy(
	struct enemy *enemy,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	unsigned int type,
	signed int speed,
	unsigned int num_steps,
	const struct enemy_path *path,
	unsigned int max_frames,
	unsigned int treshold,
	const signed char **shapes
	)
{
	static unsigned int start_step = 0;

	if (++start_step >= num_steps)
	{
		start_step = 0;
	}

	init_character(&enemy->ch, y, x, h, w, scale, speed, treshold, max_frames, shapes);

	enemy->type			= type;
	enemy->counter		= 0;
	enemy->step_counter	= start_step;
	enemy->num_steps		= num_steps;
	enemy->path			= path;

	enemy->stopped		= 0;
	enemy->stop_counter	= 0;

	set_dir_enemy(enemy, enemy->path[enemy->step_counter].dir);
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
		if (enemy->stopped)
		{
			if (++enemy->stop_counter >= ENEMY_STOP_TRESHOLD)
			{
				enemy->stop_counter = 0;
				enemy->stopped = 0;
			}
		}
		else
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

void hit_enemy(
	struct enemy *enemy
	)
{
	if (enemy->type == ENEMY_TYPE_HOMER)
	{
		retreat_character(&enemy->ch);
		enemy->stopped = 1;
	}
	else
	{
		enemy->ch.obj.active = 0;
	}
}

void draw_enemy(
	struct enemy *enemy
	)
{
	draw_character(&enemy->ch);
}

// ***************************************************************************
// end of file
// ***************************************************************************
