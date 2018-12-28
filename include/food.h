#ifndef _FOOD_H
#define _FOOD_H

#include "object.h"

#define FOOD_SCALE		0x40
#define FOOD_HEIGHT	8
#define FOOD_WIDTH		8

struct food
{
	struct object obj;
};

void init_food(
	struct food *food,
	signed int y,
	signed int x
	);

void draw_food(
	struct food *food
	);

#endif
