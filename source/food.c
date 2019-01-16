// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "draw.h"
#include "food.h"

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10

struct object *food_list = 0;

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
	signed int x,
	signed int value
	)
{
	signed int inc_scale;

	if (value < FOOD_MAX_SCALE_INCREASE)
	{
		inc_scale = value;
	}
	else
	{
		inc_scale = FOOD_MAX_SCALE_INCREASE;
	}

	init_object(
		&food->obj,
		y,
		x,
		FOOD_HEIGHT + inc_scale,
		FOOD_WIDTH + inc_scale,
		FOOD_SCALE/AMPLIFIER_MUL + (unsigned int) inc_scale,
		food_shape,
		&food_list
		);

	food->counter	= 0;
	food->value	= value;
}

void deinit_food(
	struct food *food
	)
{
	deinit_object(&food->obj, &food_list);
}

void move_food(void)
{
	struct food *food;
	struct food *rem_food = 0;

	food = (struct food *) food_list;
	while (food != 0)
	{
		if (++food->counter >= FOOD_TRESHOLD)
		{
			food->counter = 0;
			rem_food = food;
		}

		food = (struct food *) food->obj.next;

		if (rem_food != 0)
		{
			deinit_food(rem_food);
			rem_food = 0;
		}
	}
}

void draw_food(void)
{
	struct food *food;

	food = (struct food *) food_list;
	while (food != 0)
	{
		draw_synced_list_c(
			food->obj.shape,
			food->obj.y,
			food->obj.x,
			OBJECT_MOVE_SCALE,
			food->obj.scale
			);
		food = (struct food *) food->obj.next;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
