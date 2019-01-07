// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "wall.h"

// ---------------------------------------------------------------------------

extern const signed char* const web_walls[];
extern const signed char* const web_wall_coords[];

void init_wall(
	struct wall *wall,
	unsigned int index,
	struct grid *grid
	)
{
	signed int y1, x1, y2, x2, temp;
	signed int h, w;
	const signed char *web_wall = web_walls[index];

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

	// TODO: Calulcate size accurately
	if (y1 == y2)
	{
		h = 2;
	}
	else
	{
		h = y2 - y1;
	}

	if (x1 == x2)
	{
		w = 2;
	}
	else
	{
		w = x2 - x1;
	}

	init_object(&wall->obj, OBJECT_TYPE_WALL, y1, x1, h, w, WALL_SCALE, 0, grid);

	wall->coords = web_wall_coords[index];

	wall->pos[0] = web_wall[1];
	wall->pos[1] = web_wall[2];

	wall->vec[0] = web_wall[3];
	wall->vec[1] = web_wall[4];
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
			if (y > coord[0] - WALL_CHECK_DELTA && y < coord[0] + WALL_CHECK_DELTA &&
				x > coord[1] - WALL_CHECK_DELTA && x < coord[1] + WALL_CHECK_DELTA)
			{
				result = 1;
				break;
			}
		}
	}

	return result;
}

void draw_wall(
	struct wall *wall
	)
{
	if (wall->obj.active)
	{
		Reset0Ref();
		Moveto_d(wall->pos[0], wall->pos[1]);
		Draw_Line_d(wall->vec[0], wall->vec[1]);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
