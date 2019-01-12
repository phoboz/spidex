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
	const signed char *shape,
	struct object **head
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

	// Add object to list
	if (head)
	{
		obj->prev = 0;
		obj->next = *head;
		*head = obj;

		if (obj->next != 0)
		{
			obj->next->prev = obj;
		}
	}
	else
	{
		obj->prev = 0;
		obj->next = 0;
	}
}

void deinit_object(
	struct object *obj,
	struct object **head
	)
{
	if (obj->active)
	{
		// Remove object from list
		if (head)
		{
			if (obj->prev != 0)
			{
				obj->prev->next = obj->next;
			}

			if (obj->next != 0)
			{
				obj->next->prev = obj->prev;
			}

			if (*head == obj)
			{
				*head = obj->next;
			}
		}
	}

	obj->active = 0;
}

unsigned int hit_object(
	struct object *obj1,
	struct object *obj2
	)
{
	signed int obj1_y1, obj1_x1, obj1_y2, obj1_x2;
	signed int obj2_y1, obj2_x1, obj2_y2, obj2_x2;

	unsigned int result = 0;

	if (obj1->active && obj2->active)
	{
		obj1_y1 = obj1->y - obj1->h_2;
		obj1_x1 = obj1->x - obj1->w_2;
		obj1_y2 = obj1->y + obj1->h_2;
		obj1_x2 = obj1->x + obj1->w_2;

		obj2_y1 = obj2->y - obj2->h_2;
		obj2_x1 = obj2->x - obj2->w_2;
		obj2_y2 = obj2->y + obj2->h_2;
		obj2_x2 = obj2->x + obj2->w_2;

		if (obj1_y1 < obj2_y2 && obj1_y2 > obj2_y1 && obj1_x1 < obj2_x2 && obj1_x2 > obj2_x1)
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
