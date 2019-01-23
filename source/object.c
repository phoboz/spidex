// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "object.h"

// ---------------------------------------------------------------------------

void  give_object(
	struct object *obj,
	struct object **head
	)
{
	obj->active = 0;

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

void take_object(
	struct object *obj,
	struct object **head
	)
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

// ***************************************************************************
// end of file
// ***************************************************************************
