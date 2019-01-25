#ifndef _WALL_H
#define _WALL_H

#include "object.h"

#define WALL_SOLID_INDEX_START	32

#define WALL_TYPE_DASHED	0
#define WALL_TYPE_SOLID	1

#define WALL_CHECK_DELTA	3

struct wall
{
	struct object obj;
	unsigned int index;
	unsigned int type;

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