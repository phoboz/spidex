#ifndef _FOOD_H
#define _FOOD_H

#include "object.h"

#define FOOD_SCALE		0x40
#define FOOD_HEIGHT	8
#define FOOD_WIDTH		8
#define FOOD_TRESHOLD	255

struct food
{
	struct object obj;
	unsigned int counter;
};

void init_food(
	struct food *food,
	signed int y,
	signed int x
	);

void deinit_food(
	struct food *food
	);

void move_food(
	struct food *food
	);

void draw_food(
	struct food *food
	);

#endif
