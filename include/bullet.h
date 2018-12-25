#ifndef _BULLET_H
#define _BULLET_H

#include "object.h"

struct bullet {
	struct object obj;
	unsigned int active;
	signed int dy;
	signed int dx;
};

void init_bullet(
	struct bullet *bullet,
	signed int y,
	signed int x,
	unsigned int dir,
	signed int speed,
	unsigned int scale,
	const signed char *shape
	);

void move_bullet(
	struct bullet *bullet
	);

void draw_bullet(
	struct bullet *bullet
	);

#endif
