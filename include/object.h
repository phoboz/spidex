#ifndef _OBJECT_H
#define _OBJECT_H

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
	signed int y, x;
	signed int h, w;
	signed int h_2, w_2;
	unsigned int scale;
	const signed char *shape;
};


void init_object(
	struct object *obj,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	const signed char *shape
	);

void deinit_object(
	struct object *obj
	);

unsigned int hit_object(
	struct object *obj1,
	struct object *obj2
	);

void draw_object(
	struct object *obj
	);

#endif
