// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "food.h"

// ---------------------------------------------------------------------------

static const signed char food_shape[]=
{	(signed char) +1, +4, +0, // sync and move to y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) +1, +3, -3, // sync and move to y, x
	(signed char) -1, -6, +6, // draw, y, x
	(signed char) +1, +0, -4, // sync and move to y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) +1, -3, -3, // sync and move to y, x
	(signed char) -1, +6, +6, // draw, y, x
	(signed char) +2 // endmarker 
};

void init_food(
	struct food *food,
	signed int y,
	signed int x
	)
{
	init_object(&food->obj, y, x, FOOD_HEIGHT, FOOD_WIDTH, FOOD_SCALE, food_shape);
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
