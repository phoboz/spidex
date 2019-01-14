// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "draw.h"
#include "wall.h"

// ---------------------------------------------------------------------------

extern const signed char* const web_walls[];
extern const signed char* const web_wall_coords[];

struct object *wall_list = 0;

void init_wall(
	struct wall *wall,
	unsigned int index
	)
{
	signed int y1, x1, y2, x2, temp;
	const signed char *web_wall = web_walls[index];

	wall->index = index;

	y1 = web_wall[0];
	x1 = web_wall[1];

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

	init_object(&wall->obj, y1, x1, y2 - y1, x2 - x1, OBJECT_MOVE_SCALE, 0, &wall_list);

	wall->y2 = y2;
	wall->x2 = x2;

	wall->coords =	web_wall_coords[index];
	wall->pos_vlist =	web_wall;
}

void deinit_wall(
	struct wall *wall
	)
{
	deinit_object(&wall->obj, &wall_list);
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

	if (wall->obj.active)
	{
		y1 = wall->obj.y;
		x1 = wall->obj.x;

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

void draw_walls(void)
{
	struct wall *wall;

	wall = (struct wall *) wall_list;
	while (wall != 0)
	{
		reset0ref();
		moveto(wall->pos_vlist[0], wall->pos_vlist[1]);
		draw_vlist_c(&wall->pos_vlist[2]);
		wall = (struct wall *) wall->obj.next;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
