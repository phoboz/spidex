#ifndef _OBJECT_H
#define _OBJECT_H

#define OBJECT_TYPE_FOOD		1

#define OBJECT_TYPE_CHARACTER	10
#define OBJECT_TYPE_PLAYER		11
#define OBJECT_TYPE_BULLET		12
#define OBJECT_TYPE_ENEMY		13

#define OBJECT_TYPE_STATIC		20
#define OBJECT_TYPE_WALL		21

#define OBJECT_MAX_STATIC		2

#define OBJECT_MOVE_SCALE	0x80

#define DIR_DOWN			0
#define DIR_DOWN_RIGHT		1
#define DIR_RIGHT			2
#define DIR_UP_RIGHT		3
#define DIR_UP			4
#define DIR_UP_LEFT		5
#define DIR_LEFT			6
#define DIR_DOWN_LEFT		7

struct object
{
	unsigned int active;
	unsigned int type;
	unsigned int num_static;
	struct object *static_obj[OBJECT_MAX_STATIC];
	signed int y, x;
	signed int h, w;
	signed int h_2, w_2;
	unsigned int scale;
	const signed char *shape;

	struct object *prev, *next;
	struct grid *grid;
};


void init_object(
	struct object *obj,
	unsigned int type,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	const signed char *shape,
	struct grid *grid
	);

void deinit_object(
	struct object *obj
	);

void move_object(
	struct object *obj,
	signed int y,
	signed int x
	);

unsigned int distance_object(
	struct object *obj1,
	struct object *obj2
	);

unsigned int hit_object(
	struct object *obj1,
	struct object *obj2
	);

void handle_object_hit(
	struct object *obj1,
	struct object *obj2
	);

void draw_object(
	struct object *obj
	);

#endif
