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
	obj->y = y;
	obj->x = x;

	obj->scale = scale;
	obj->shape = shape;
}

void draw_object(
	struct object *obj
	)
{
	draw_synced_list_c(obj->shape, obj->y, obj->x, 0x60, obj->scale);
}

// ***************************************************************************
// end of file
// ***************************************************************************
