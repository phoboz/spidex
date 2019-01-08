// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "food.h"

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10

static const signed char food_shape[]=
{	
	(signed char) 0x01, -0x04*AMPLIFIER_MUL, +0x00*AMPLIFIER_MUL, // sync and move to y, x
	(signed char) 0xFF, +0x08*AMPLIFIER_MUL, +0x00*AMPLIFIER_MUL, // draw, y, x
	(signed char) 0x00, -0x01*AMPLIFIER_MUL, +0x03*AMPLIFIER_MUL, // mode, y, x
	(signed char) 0xFF, -0x06*AMPLIFIER_MUL, -0x06*AMPLIFIER_MUL, // draw, y, x
	(signed char) 0x00, +0x03*AMPLIFIER_MUL, -0x01*AMPLIFIER_MUL, // mode, y, x
	(signed char) 0xFF, +0x00*AMPLIFIER_MUL, +0x08*AMPLIFIER_MUL, // draw, y, x
	(signed char) 0x00, -0x03*AMPLIFIER_MUL, -0x01*AMPLIFIER_MUL, // mode, y, x
	(signed char) 0xFF, +0x06*AMPLIFIER_MUL, -0x06*AMPLIFIER_MUL, // draw, y, x
	(signed char) 0x02 // endmarker 	


	};

void init_food(
	struct food *food,
	signed int y,
	signed int x
	)
{
	init_object(&food->obj, y, x, FOOD_HEIGHT, FOOD_WIDTH, FOOD_SCALE/AMPLIFIER_MUL, food_shape);
}

void deinit_food(
	struct food *food
	)
{
	deinit_object(&food->obj);
}

void move_food(
	struct food *food
	)
{
	if (food->obj.active)
	{
		if (++food->counter >= FOOD_TRESHOLD)
		{
			food->counter = 0;
			food->obj.active = 0;
		}
	}
}

void draw_food(
	struct food *food
	)
{
	draw_object(&food->obj);
}

// ***************************************************************************
// end of file
// ***************************************************************************
