#ifndef _OBJECT_H
#define _OBJECT_H

#define OBJECT_MOVE_SCALE	0x80

#define DIR_DOWN			0
#define DIR_DOWN_RIGHT		1
#define DIR_RIGHT			2
#define DIR_UP_RIGHT		3
#define DIR_UP			4
#define DIR_UP_LEFT		5
#define DIR_LEFT			6
#define DIR_DOWN_LEFT		7
#define DIR_NONE			8

struct object
{
	unsigned int active;
	signed int y, x;
	signed int h, w;
	signed int h_2, w_2;
	unsigned int scale;
	const signed char *shape;

	struct object *prev, *next;
};

void  give_object(
	struct object *obj,
	struct object **head
	);

void take_object(
	struct object *obj,
	struct object **head
	);

void init_object(
	struct object *obj,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	const signed char *shape,
	struct object **head
	);

void deinit_object(
	struct object *obj,
	struct object **head
	);

__INLINE unsigned int hit_object(
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

#endif
