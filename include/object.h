#ifndef _OBJECT_H
#define _OBJECT_H

#define DIR_DOWN			0
#define DIR_DOWN_RIGHT		1
#define DIR_RIGHT			2
#define DIR_UP_RIGHT		3
#define DIR_UP			4
#define DIR_UP_LEFT		5
#define DIR_LEFT			6
#define DIR_DOWN_LEFT		7

struct object {
	signed int y, x;
	unsigned int scale;
	const signed char *shape;
};


void init_object(
	struct object *obj,
	signed int y,
	signed int x,
	unsigned int scale,
	const signed char *shape
	);

void draw_object(
	struct object *obj
	);

#endif
