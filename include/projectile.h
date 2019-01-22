#ifndef _PROJECTILE_H
#define _PROJECTILE_H

#include "object.h"

#define PROJECTILE_MIN_Y	-108
#define PROJECTILE_MAX_Y	 108
#define PROJECTILE_MIN_X	-100
#define PROJECTILE_MAX_X	 100

struct projectile
{
	struct object obj;
	struct object *owner;
	signed int dy;
	signed int dx;
};

void init_projectile(
	struct projectile *proj,
	struct object *owner,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int dir,
	signed int speed,
	unsigned int scale,
	const signed char* const *shapes
	);

void deinit_projectile(
	struct projectile *proj
	);

void move_projectiles(void);
void draw_projectiles(void);

extern struct object *projectile_list;
extern struct object *projectile_free_list;

#endif
