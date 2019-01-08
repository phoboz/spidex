#ifndef _BULLET_H
#define _BULLET_H

#include "object.h"

#define BULLET_NUM_FRAMES	8

#define BULLET_MIN_Y	-108
#define BULLET_MAX_Y	 108
#define BULLET_MIN_X	-100
#define BULLET_MAX_X	 100

struct bullet
{
	struct object obj;
	signed int dy;
	signed int dx;
	unsigned int frame;
	const signed char* const *shapes;
};

void init_bullet(
	struct bullet *bullet,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int dir,
	signed int speed,
	unsigned int scale,
	const signed char* const *shapes
	);

void move_bullet(
	struct bullet *bullet
	);

void draw_bullet(
	struct bullet *bullet
	);

#endif
