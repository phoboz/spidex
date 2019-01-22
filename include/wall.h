#ifndef _WALL_H
#define _WALL_H

#include "object.h"

#define WALL_MODE_PASS_NONE		0
#define WALL_MODE_PASS_IN		1
#define WALL_MODE_PASS_OUT		2

#define WALL_CHECK_DELTA	3

struct wall
{
	struct object obj;
	unsigned int index;

	signed int y2, x2;

	const signed char *coords;
	const signed char *pos_vlist;
};

void init_wall(
	struct wall *wall,
	unsigned int index
	);

void deinit_wall(
	struct wall *wall
	);

unsigned int check_point_on_wall(
	struct wall *wall,
	signed int y,
	signed int x
	);

void draw_walls(void);

extern struct object *wall_list;
extern struct object *wall_free_list;

#endif