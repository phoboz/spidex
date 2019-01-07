#ifndef _WALL_H
#define _WALL_H

#include "object.h"

#define WALL_SCALE			0x80

#define WALL_CHECK_DELTA	3

struct wall
{
	struct object obj;

	signed int y1, x1;
	signed int y2, x2;

	const signed char *coords;
 
	signed int pos[2];
	signed int vec[2];
};

void init_wall(
	struct wall *wall,
	unsigned int index,
	struct grid *grid
	);

unsigned int check_point_on_wall(
	struct wall *wall,
	signed int y,
	signed int x
	);

void draw_wall(
	struct wall *wall
	);

#endif