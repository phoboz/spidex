// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "character.h"

// ---------------------------------------------------------------------------

void init_character(
	struct character *ch,
	unsigned int type,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	signed int move_speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char* const *shapes,
	struct grid *grid
	)
{
	init_object(&ch->obj, type, y, x, h, w, scale, shapes[0], grid);

	ch->dir 			= DIR_DOWN;
	ch->move_speed	= move_speed;

	ch->counter		= 0;
	ch->treshold		= treshold;
	ch->base_frame	= 0;
	ch->frame			= 0;
	ch->max_frames	= max_frames;

	ch->shapes = shapes;
}

void set_dir_character(
	struct character *ch,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
         dir = DIR_DOWN;
    }

	ch->dir = dir;
}

unsigned int animate_character(
	struct character *ch
	)
{
	unsigned int changed = 0;

	if (++ch->counter >= ch->treshold) {
		ch->counter = 0;
		if (++ch->frame >= ch->max_frames) {
			ch->frame = 0;
		}
		changed = 1;
	}

	return changed;
}

void get_move_character(
	struct character *ch,
	signed int speed,
	signed int *dy,
	signed int *dx
	)
{
	switch (ch->dir)
	{
		case DIR_DOWN:
			*dy = -speed;
			*dx =  0;
			break;

		case DIR_DOWN_RIGHT:
			*dy = -speed;
			*dx =  speed;
			break;

		case DIR_RIGHT:
			*dy =  0;
			*dx =  speed;
			break;

		case DIR_UP_RIGHT:
			*dy =  speed;
			*dx =  speed;
			break;

		case DIR_UP:
			*dy =  speed;
			*dx =  0;
			break;

		case DIR_UP_LEFT:
			*dy =  speed;
			*dx = -speed;
			break;

		case DIR_LEFT:
			*dy =  0;
			*dx = -speed;
			break;

		case DIR_DOWN_LEFT:
			*dy = -speed;
			*dx = -speed;
			break;

		default:
			*dy =  0;
			*dx =  0;
			break;
	}
}

unsigned int move_character(
	struct character *ch,
	signed int y,
	signed int x
	)
{
	unsigned int stopped = 0;

	if (y < CHARACTER_MIN_Y)
	{
		y = CHARACTER_MIN_Y;
		stopped = 1;
	}

	if (y > CHARACTER_MAX_Y)
	{
		y = CHARACTER_MAX_Y;
		stopped = 1;
	}

	if (x < CHARACTER_MIN_X)
	{
		x = CHARACTER_MIN_X;
		stopped = 1;
	}

	if (x > CHARACTER_MAX_X)
	{
		x = CHARACTER_MAX_X;
		stopped = 1;
	}

	move_object(&ch->obj, y, x);

	return stopped;
}

unsigned int retreat_character(
	struct character *ch
	)
{
	signed int dy, dx;

	get_move_character(ch, ch->move_speed << 1, &dy, &dx);

	return move_character(ch, ch->obj.y - dy, ch->obj.x - dx);
}

unsigned int interaction_walls_character(
	struct character *ch,
	signed int dy,
	signed int dx,
	unsigned int mode
	)
{
	unsigned int i;
	signed int y, x;
	unsigned int result = 0;

	if (ch->obj.static_obj == 0)
	{
		return result;
	}

	if (mode == CHARACTER_WALL_MODE_PASS_IN)
	{
		if (dy != 0 && dx != 0)
		{
			for (i = 0; i < ch->obj.num_static; i++)
			{
				y = ch->obj.y + dy;
				x = ch->obj.x;

				if ((unsigned int) abs(y) > (unsigned int) abs(ch->obj.y))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
	
				y = ch->obj.y;
				x = ch->obj.x + dx;

				if ((unsigned int) abs(x) > (unsigned int) abs(ch->obj.x))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
			}
		}
		else if (dy != 0)
		{
			for (i = 0; i < ch->obj.num_static; i++)
			{
				y = ch->obj.y + dy;
				x = ch->obj.x;

				if ((unsigned int) abs(y) > (unsigned int) abs(ch->obj.y))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
			}
		}
		else if (dx != 0)
		{
			for (i = 0; i < ch->obj.num_static; i++)
			{
				y = ch->obj.y;
				x = ch->obj.x + dx;

				if ((unsigned int) abs(x) > (unsigned int) abs(ch->obj.x))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
			}
		}
	}
	else if (mode == CHARACTER_WALL_MODE_PASS_OUT)
	{
		if (dy != 0 && dx != 0)
		{
			for (i = 0; i < ch->obj.num_static; i++)
			{
				y = ch->obj.y + dy;
				x = ch->obj.x;

				if ((unsigned int) abs(y) < (unsigned int) abs(ch->obj.y))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
	
				y = ch->obj.y;
				x = ch->obj.x + dx;

				if ((unsigned int) abs(x) < (unsigned int) abs(ch->obj.x))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
			}
		}
		else if (dy != 0)
		{
			for (i = 0; i < ch->obj.num_static; i++)
			{
				y = ch->obj.y + dy;
				x = ch->obj.x;

				if ((unsigned int) abs(y) < (unsigned int) abs(ch->obj.y))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
			}
		}
		else if (dx != 0)
		{
			for (i = 0; i < ch->obj.num_static; i++)
			{
				y = ch->obj.y;
				x = ch->obj.x + dx;

				if ((unsigned int) abs(x) < (unsigned int) abs(ch->obj.x))
				{
					if (check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
						check_point_on_wall((struct wall *) ch->obj.static_obj[i], y + ch->obj.h_2, x - ch->obj.w_2))
					{
						result = 1;
						break;
					}
				}
			}
		}
	}

	return result;
}

#if 0
unsigned int interaction_walls_character(
	struct character *ch,
	signed int dy,
	signed int dx,
	unsigned int mode,
	unsigned int num_walls,
	struct wall *walls
	)
{
	unsigned int i;
	signed int y, x;
	unsigned int result = 0;

	if (ch->obj.num_static == 0)
	{
		return result;
	}

	if (mode == CHARACTER_WALL_MODE_PASS_IN)
	{
		if (dy != 0 && dx != 0)
		{
			for (i = 0; i < num_walls; i++)
			{
				if (walls[i].obj.active)
				{
					y = ch->obj.y + dy;
					x = ch->obj.x;

					if ((unsigned int) abs(y) > (unsigned int) abs(ch->obj.y))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
	
					y = ch->obj.y;
					x = ch->obj.x + dx;

					if ((unsigned int) abs(x) > (unsigned int) abs(ch->obj.x))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
				}
			}
		}
		else if (dy != 0)
		{
			for (i = 0; i < num_walls; i++)
			{
				if (walls[i].obj.active)
				{
					y = ch->obj.y + dy;
					x = ch->obj.x;

					if ((unsigned int) abs(y) > (unsigned int) abs(ch->obj.y))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
				}
			}
		}
		else if (dx != 0)
		{
			for (i = 0; i < num_walls; i++)
			{
				if (walls[i].obj.active)
				{
					y = ch->obj.y;
					x = ch->obj.x + dx;

					if ((unsigned int) abs(x) > (unsigned int) abs(ch->obj.x))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
				}
			}
		}
	}
	else if (mode == CHARACTER_WALL_MODE_PASS_OUT)
	{
		if (dy != 0 && dx != 0)
		{
			for (i = 0; i < num_walls; i++)
			{
				if (walls[i].obj.active)
				{
					y = ch->obj.y + dy;
					x = ch->obj.x;

					if ((unsigned int) abs(y) < (unsigned int) abs(ch->obj.y))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
	
					y = ch->obj.y;
					x = ch->obj.x + dx;

					if ((unsigned int) abs(x) < (unsigned int) abs(ch->obj.x))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
				}
			}
		}
		else if (dy != 0)
		{
			for (i = 0; i < num_walls; i++)
			{
				if (walls[i].obj.active)
				{
					y = ch->obj.y + dy;
					x = ch->obj.x;

					if ((unsigned int) abs(y) < (unsigned int) abs(ch->obj.y))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
				}
			}
		}
		else if (dx != 0)
		{
			for (i = 0; i < num_walls; i++)
			{
				if (walls[i].obj.active)
				{
					y = ch->obj.y;
					x = ch->obj.x + dx;

					if ((unsigned int) abs(x) < (unsigned int) abs(ch->obj.x))
					{
						if (check_point_on_wall(&walls[i], y - ch->obj.h_2, x - ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y - ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x + ch->obj.w_2) ||
							check_point_on_wall(&walls[i], y + ch->obj.h_2, x - ch->obj.w_2))
						{
							result = 1;
							break;
						}
					}
				}
			}
		}
	}

	return result;
}
#endif

void draw_character(
	struct character *ch
	)
{
	ch->obj.shape = ch->shapes[ch->base_frame + ch->frame];
	draw_object(&ch->obj);
}


// ***************************************************************************
// end of file
// ***************************************************************************
