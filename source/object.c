// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "object.h"
#include "draw.h"

// ---------------------------------------------------------------------------


void init_object(
	struct object *obj,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	const signed char *shape
	)
{
	obj->active = 1;

	obj->y = y;
	obj->x = x;
	obj->h = h;
	obj->w = w;
	obj->h_2 = h >> 1;
	obj->w_2 = w >> 1;

	obj->scale = scale;
	obj->shape = shape;
}

unsigned int hit_object(
	struct object *obj1,
	struct object *obj2
	)
{
	signed int y1, y2;
	signed int h1, h2;
	signed int x1, x2;
	signed int w1, w2;

	unsigned int result = 0;

	if (obj1->active && obj2->active)
	{
		y1 = obj1->y - obj1->h_2;
		x1 = obj1->x - obj1->w_2;
		h1 = obj1->h;
		w1 = obj1->w;

		y2 = obj2->y - obj2->h_2;
		x2 = obj2->x - obj2->w_2;
		h2 = obj2->h;
		w2 = obj2->w;

		if (x1 < x2 + w2 &&
		    x1 + w1 > x2 &&
		    y1 < y2 + h2 &&
		    h1 + y1 > y2)
		{
			result = 1;
		}
	}

	return result;
}

void draw_object(
	struct object *obj
	)
{
	if (obj->active)
	{
		draw_synced_list_c(obj->shape, obj->y, obj->x, OBJECT_MOVE_SCALE, obj->scale);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
