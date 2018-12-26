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
	unsigned int scale,
	const signed char *shape
	)
{
	obj->active = 1;

	obj->y = y;
	obj->x = x;

	obj->scale = scale;
	obj->shape = shape;
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
