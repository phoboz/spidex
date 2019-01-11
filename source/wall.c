// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "object.h"
#include "draw.h"
#include "wall.h"

// ---------------------------------------------------------------------------

extern const signed char* const web_walls[];
extern const signed char* const web_wall_coords[];

void init_wall(
	struct wall *wall,
	unsigned int index
	)
{
	signed int y1, x1, y2, x2, temp;
	const signed char *web_wall = web_walls[index];

	wall->active	= 1;
	wall->index	= index;

	y1 = web_wall[1];
	x1 = web_wall[2];

	y2 = y1 + web_wall[3];
	x2 = x1 + web_wall[4];

	if (y1 > y2)
	{
		temp = y1;
		y1 = y2;
		y2 = temp; 
	}

	if (x1 > x2)
	{
		temp = x1;
		x1 = x2;
		x2 = temp; 
	}

	wall->y1 = y1;
	wall->x1 = x1;

	wall->y2 = y2;
	wall->x2 = x2;

	wall->coords = web_wall_coords[index];

	wall->pos[0] = web_wall[1];
	wall->pos[1] = web_wall[2];

	wall->vec[0] = web_wall[0] - 1;
	wall->vec[1] = web_wall[3];
	wall->vec[2] = web_wall[4];
}

void deinit_wall(
	struct wall *wall
	)
{
	wall->active = 0;
}

unsigned int quick_check_wall(
	struct wall *wall,
	signed int y,
	signed int x
	)
{
	signed int y1, x1, y2, x2;
	unsigned int result = 0;

	if (wall->active)
	{
		y1 = wall->y1;
		x1 = wall->x1;

		y2 = wall->y2;
		x2 = wall->x2;

		if (y1 == y2 && y >= y1 - WALL_QCHECK_DELTA && y <= y1 + WALL_QCHECK_DELTA)
		{
			if (x >= x1 && x <= x2)
			{
				result = 1;
			} 
		}
		else if (x1 == x2 && x >= x1 - WALL_QCHECK_DELTA && x <= x1 + WALL_QCHECK_DELTA)
		{
			if (y >= y1 && y <= y2)
			{
				result = 1;
			}
		}
		else if (y > y1 - WALL_QCHECK_DELTA && y < y2 + WALL_QCHECK_DELTA &&
				x > x1 - WALL_QCHECK_DELTA && x < x2 + WALL_QCHECK_DELTA)
		{
			result = 1;
		}
	}

	return result;
}

unsigned int check_point_on_wall(
	struct wall *wall,
	signed int y,
	signed int x
	)
{
	const signed char *coord;
	signed int y1, x1, y2, x2;
	unsigned int result = 0;

	if (wall->active)
	{
		y1 = wall->y1;
		x1 = wall->x1;

		y2 = wall->y2;
		x2 = wall->x2;

		if (y1 == y2 && y >= y1 - WALL_CHECK_DELTA && y <= y1 + WALL_CHECK_DELTA)
		{
			if (x >= x1 && x <= x2)
			{
				result = 1;
			} 
		}
		else if (x1 == x2 && x >= x1 - WALL_CHECK_DELTA && x <= x1 + WALL_CHECK_DELTA)
		{
			if (y >= y1 && y <= y2)
			{
				result = 1;
			}
		}
		else if (y > y1 && y < y2 && x > x1 && x < x2)
		{
			for (coord = wall->coords; coord[0] != 127; coord += 2)
			{
				if (y > coord[0] - WALL_CHECK_DELTA &&
				    y < coord[0] + WALL_CHECK_DELTA &&
				    x > coord[1] - WALL_CHECK_DELTA &&
				    x < coord[1] + WALL_CHECK_DELTA)
				{
					result = 1;
					break;
				}
			}
		}
	}

	return result;
}

unsigned int object_hit_wall(
	struct wall *wall,
	unsigned int mode,
	struct object *obj,
	signed int dy,
	signed int dx
	)
{
	signed int y, x;
	unsigned int result = 0;

	if (mode == WALL_MODE_PASS_IN)
	{
		if (dy != 0 && dx != 0)
		{
			y = obj->y + dy;
			x = obj->x;

			if ((unsigned int) abs(y) > (unsigned int) abs(obj->y))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
	
			y = obj->y;
			x = obj->x + dx;

			if ((unsigned int) abs(x) > (unsigned int) abs(obj->x))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
		}
		else if (dy != 0)
		{
			y = obj->y + dy;
			x = obj->x;

			if ((unsigned int) abs(y) > (unsigned int) abs(obj->y))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
		}
		else if (dx != 0)
		{
			y = obj->y;
			x = obj->x + dx;

			if ((unsigned int) abs(x) > (unsigned int) abs(obj->x))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
		}
	}
	else if (mode == WALL_MODE_PASS_OUT)
	{
		if (dy != 0 && dx != 0)
		{
			y = obj->y + dy;
			x = obj->x;

			if ((unsigned int) abs(y) < (unsigned int) abs(obj->y))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
	
			y = obj->y;
			x = obj->x + dx;

			if ((unsigned int) abs(x) < (unsigned int) abs(obj->x))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
		}
		else if (dy != 0)
		{
			y = obj->y + dy;
			x = obj->x;

			if ((unsigned int) abs(y) < (unsigned int) abs(obj->y))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
		}
		else if (dx != 0)
		{
			y = obj->y;
			x = obj->x + dx;

			if ((unsigned int) abs(x) < (unsigned int) abs(obj->x))
			{
				if (check_point_on_wall(wall, y - obj->h_2, x - obj->w_2) ||
					check_point_on_wall(wall, y - obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x + obj->w_2) ||
					check_point_on_wall(wall, y + obj->h_2, x - obj->w_2))
				{
					result = 1;
				}
			}
		}
	}

	return result;
}

void draw_wall(
	struct wall *wall
	)
{
	if (wall->active)
	{
		reset0ref();
		moveto(wall->pos[0], wall->pos[1]);
		draw_vlist_c((const signed char *) wall->vec);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
