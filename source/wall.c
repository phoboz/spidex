// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "wall.h"

// ---------------------------------------------------------------------------

extern const signed char *web_walls[];

void init_wall(
	struct wall *wall,
	unsigned int index,
	unsigned int time_treshold
	)
{
	signed int y1, x1, y2, x2, temp;
	const signed char *web_wall = web_walls[index];

	wall->active		= 1;
	wall->counter		= 0;

	wall->time_counter		= 0;
	wall->time_treshold	= time_treshold;

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
	signed int y1, x1, y2, x2;
	unsigned int result = 0;

	if (wall->active)
	{
		y1 = wall->y1;
		x1 = wall->x1;

		y2 = wall->y2;
		x2 = wall->x2;

		if (y1 == y2 && y > y1 - WALL_CHECK_DELTA && y < y1 + WALL_CHECK_DELTA)
		{
			if (x > x1 && x < x2)
			{
				result = 1;
			} 
		}
		else if (x1 == x2 && x > x1 - WALL_CHECK_DELTA && x < x1 + WALL_CHECK_DELTA)
		{
			if (y > y1 && y < y2)
			{
				result = 1;
			} 
		}
		else if (y > y1 && y < y2 && x > x1 && x < x2)
		{
			result = 1;
		}
	}

	return result;
}

void move_wall(
	struct wall *wall
	)
{
	if (wall->active)
	{
		if (++wall->counter >= WALL_CYCLE_TRESHOLD)
		{
			wall->counter = 0;
			if (++wall->time_counter >= wall->time_treshold)
			{
				wall->time_counter = 0;
				wall->active = 0;
			}
		}
	}
}

void draw_wall(
	struct wall *wall
	)
{
	if (wall->active)
	{
		Reset0Ref();
		Moveto_d(wall->pos[0], wall->pos[1]);
		Draw_Line_d(wall->vec[0], wall->vec[1]);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
