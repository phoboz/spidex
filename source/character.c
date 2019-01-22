// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "character.h"

// ---------------------------------------------------------------------------

void init_character(
	struct character *ch,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	unsigned int wall_mode,
	signed int move_speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char* const *shapes,
	struct object **head
	)
{
	init_object(&ch->obj, y, x, h, w, scale, shapes[0], head);

	ch->dir 			= DIR_DOWN;
	ch->wall_mode		= wall_mode;
	ch->move_speed	= move_speed;

	ch->dy = 0;
	ch->dx = 0;

	ch->counter		= 0;
	ch->treshold		= treshold;
	ch->base_frame	= 0;
	ch->frame			= 0;
	ch->max_frames	= max_frames;

	ch->shapes = shapes;
}

void deinit_character(
	struct character *ch,
	struct object **head
	)
{
	deinit_object(&ch->obj, head);
}

void set_dir_character(
	struct character *ch,
	unsigned int dir
	)
{
	ch->dir = dir;

	switch (dir)
	{
		case DIR_DOWN:
			ch->dy = -ch->move_speed;
			ch->dx =  0;
			break;

		case DIR_DOWN_RIGHT:
			ch->dy = -ch->move_speed;
			ch->dx =  ch->move_speed;
			break;

		case DIR_RIGHT:
			ch->dy =  0;
			ch->dx =  ch->move_speed;
			break;

		case DIR_UP_RIGHT:
			ch->dy =  ch->move_speed;
			ch->dx =  ch->move_speed;
			break;

		case DIR_UP:
			ch->dy =  ch->move_speed;
			ch->dx =  0;
			break;

		case DIR_UP_LEFT:
			ch->dy =  ch->move_speed;
			ch->dx = -ch->move_speed;
			break;

		case DIR_LEFT:
			ch->dy =  0;
			ch->dx = -ch->move_speed;
			break;

		case DIR_DOWN_LEFT:
			ch->dy = -ch->move_speed;
			ch->dx = -ch->move_speed;
			break;

		case DIR_NONE:
		default:
			ch->dy =  0;
			ch->dx =  0;
			break;
	}

	if (dir < DIR_NONE)
	{
		ch->base_frame = dir << 1;
	}
}

unsigned int animate_character(
	struct character *ch
	)
{
	unsigned int changed = 0;

	if (++ch->counter >= ch->treshold) {
		ch->counter = 0;
		if (ch->dir < DIR_NONE)
		{
			if (++ch->frame >= ch->max_frames)
			{
				ch->frame = 0;
			}
		}
		changed = 1;
	}

	return changed;
}

unsigned int move_character(
	struct character *ch
	)
{
	unsigned int stopped = 0;

	ch->obj.y += ch->dy;
	ch->obj.x += ch->dx;

	if (ch->obj.y < CHARACTER_MIN_Y)
	{
		ch->obj.y = CHARACTER_MIN_Y;
		stopped = 1;
	}

	if (ch->obj.y > CHARACTER_MAX_Y)
	{
		ch->obj.y = CHARACTER_MAX_Y;
		stopped = 1;
	}

	if (ch->obj.x < CHARACTER_MIN_X)
	{
		ch->obj.x = CHARACTER_MIN_X;
		stopped = 1;
	}

	if (ch->obj.x > CHARACTER_MAX_X)
	{
		ch->obj.x = CHARACTER_MAX_X;
		stopped = 1;
	}

	return stopped;
}

unsigned int retreat_character(
	struct character *ch
	)
{
	unsigned int stopped = 0;

	ch->obj.y -= ch->dy << 1;
	ch->obj.x -= ch->dx << 1;

	if (ch->obj.y < CHARACTER_MIN_Y)
	{
		ch->obj.y = CHARACTER_MIN_Y;
		stopped = 1;
	}

	if (ch->obj.y > CHARACTER_MAX_Y)
	{
		ch->obj.y = CHARACTER_MAX_Y;
		stopped = 1;
	}

	if (ch->obj.x < CHARACTER_MIN_X)
	{
		ch->obj.x = CHARACTER_MIN_X;
		stopped = 1;
	}

	if (ch->obj.x > CHARACTER_MAX_X)
	{
		ch->obj.x = CHARACTER_MAX_X;
		stopped = 1;
	}

	return stopped;
}

unsigned int quick_check_wall_character(
	struct character *ch,
	struct wall *wall
	)
{
	signed int y1, x1, y2, x2;
	signed int y, x;
	signed int h_2, w_2;
	unsigned int result = 0;

	if (wall->obj.active)
	{
		y = ch->obj.y + ch->dy;
		x = ch->obj.x + ch->dx;

		h_2 = ch->obj.h_2;
		w_2 = ch->obj.w_2;

		y1 = wall->obj.y;
		x1 = wall->obj.x;

		y2 = wall->y2;
		x2 = wall->x2;

		if (y1 == y2 && y >= y1 - h_2 && y <= y1 + h_2)
		{
			if (x >= x1 && x <= x2)
			{
				result = 1;
			} 
		}
		else if (x1 == x2 && x >= x1 - w_2 && x <= x1 + w_2)
		{
			if (y >= y1 && y <= y2)
			{
				result = 1;
			}
		}
		else if (y > y1 - h_2 && y < y2 + h_2 && x > x1 - w_2 && x < x2 + w_2)
		{
			result = 1;
		}
	}

	return result;
}

unsigned int hit_wall_character(
	struct character *ch,
	struct wall *wall
	)
{
	signed int y, x;
	signed int h_2, w_2;
	unsigned int result = 0;

	if (ch->wall_mode == WALL_MODE_PASS_NONE)
	{
		h_2 = ch->obj.h_2;
		w_2 = ch->obj.w_2;

		y = ch->obj.y + ch->dy;
		x = ch->obj.x + ch->dx;

		if (check_point_on_wall(wall, y - h_2, x - w_2) ||
			check_point_on_wall(wall, y - h_2, x + w_2) ||
			check_point_on_wall(wall, y + h_2, x + w_2) ||
			check_point_on_wall(wall, y + h_2, x - w_2))
		{
			result = 1;
		}
	}
	else if (ch->wall_mode == WALL_MODE_PASS_IN)
	{
		h_2 = ch->obj.h_2;
		w_2 = ch->obj.w_2;

		if (ch->dy != 0 && ch->dx != 0)
		{
			y = ch->obj.y + ch->dy;
			x = ch->obj.x;

			if ((unsigned int) abs(y) > (unsigned int) abs(ch->obj.y))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
	
			y = ch->obj.y;
			x = ch->obj.x + ch->dx;

			if ((unsigned int) abs(x) > (unsigned int) abs(ch->obj.x))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
		}
		else if (ch->dy != 0)
		{
			y = ch->obj.y + ch->dy;
			x = ch->obj.x;

			if ((unsigned int) abs(y) > (unsigned int) abs(ch->obj.y))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
		}
		else if (ch->dx != 0)
		{
			y = ch->obj.y;
			x = ch->obj.x + ch->dx;

			if ((unsigned int) abs(x) > (unsigned int) abs(ch->obj.x))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
		}
	}
	else if (ch->wall_mode == WALL_MODE_PASS_OUT)
	{
		h_2 = ch->obj.h_2;
		w_2 = ch->obj.w_2;

		if (ch->dy != 0 && ch->dx != 0)
		{
			y = ch->obj.y + ch->dy;
			x = ch->obj.x;

			if ((unsigned int) abs(y) < (unsigned int) abs(ch->obj.y))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
	
			y = ch->obj.y;
			x = ch->obj.x + ch->dx;

			if ((unsigned int) abs(x) < (unsigned int) abs(ch->obj.x))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
		}
		else if (ch->dy != 0)
		{
			y = ch->obj.y + ch->dy;
			x = ch->obj.x;

			if ((unsigned int) abs(y) < (unsigned int) abs(ch->obj.y))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
		}
		else if (ch->dx != 0)
		{
			y = ch->obj.y;
			x = ch->obj.x + ch->dx;

			if ((unsigned int) abs(x) < (unsigned int) abs(ch->obj.x))
			{
				if (check_point_on_wall(wall, y - h_2, x - w_2) ||
					check_point_on_wall(wall, y - h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x + w_2) ||
					check_point_on_wall(wall, y + h_2, x - w_2))
				{
					result = 1;
				}
			}
		}
	}

	return result;
}

// ***************************************************************************
// end of file
// ***************************************************************************
