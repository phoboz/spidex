#ifndef _WALL_H
#define _WALL_H

#define WALL_CHECK_DELTA	16

struct wall
{
	unsigned int active;

	signed int y1, x1;
	signed int y2, x2;

	signed int pos[2];
	signed int vec[2];
};

void init_wall(
	struct wall *wall,
	unsigned int index
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