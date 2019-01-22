// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "draw.h"
#include "projectile.h"

// ---------------------------------------------------------------------------

struct object *projectile_list = 0;
struct object *projectile_free_list = 0;

void init_projectile(
	struct projectile *proj,
	struct object *owner,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int dir,
	signed int speed,
	unsigned int scale,
	const signed char* const *shapes
	)
{
	take_object(&proj->obj, &projectile_free_list);
	init_object(&proj->obj, y, x, h, w, scale, shapes[dir], &projectile_list);

	proj->owner = owner;

	switch (dir) {
		case DIR_DOWN:
			proj->dy = -speed;
			proj->dx =  0;
			break;

		case DIR_DOWN_RIGHT:
			proj->dy = -speed;
			proj->dx =  speed;
			break;

		case DIR_RIGHT:
			proj->dy =  0;
			proj->dx =  speed;
			break;

		case DIR_UP_RIGHT:
			proj->dy =  speed;
			proj->dx =  speed;
			break;

		case DIR_UP:
			proj->dy =  speed;
			proj->dx =  0;
			break;

		case DIR_UP_LEFT:
			proj->dy =  speed;
			proj->dx = -speed;
			break;

		case DIR_LEFT:
			proj->dy =  0;
			proj->dx = -speed;
			break;

		case DIR_DOWN_LEFT:
			proj->dy = -speed;
			proj->dx = -speed;
			break;

		default:
			proj->dy =  0;
			proj->dx =  0;
			break;
	}
}

void deinit_projectile(
	struct projectile *proj
	)
{
	deinit_object(&proj->obj, &projectile_list);
	give_object(&proj->obj, &projectile_free_list);
}

void move_projectiles(void)
{
	struct projectile *proj;
	struct projectile *rem_proj = 0;

	proj = (struct projectile *) projectile_list;
	while (proj != 0)
	{
		proj->obj.y += proj->dy;
		proj->obj.x += proj->dx;

		if (proj->obj.y < PROJECTILE_MIN_Y || proj->obj.y > PROJECTILE_MAX_Y ||
			proj->obj.x < PROJECTILE_MIN_X || proj->obj.x > PROJECTILE_MAX_X)
		{
			rem_proj = proj;
		}

		proj = (struct projectile *) proj->obj.next;

		if (rem_proj != 0)
		{
			deinit_projectile(rem_proj);
			rem_proj = 0;
		}
	}
}

void draw_projectiles(void)
{
	struct projectile *proj;

	proj = (struct projectile *) projectile_list;
	while (proj != 0)
	{
		draw_synced_list_c(
			proj->obj.shape,
			proj->obj.y,
			proj->obj.x,
			OBJECT_MOVE_SCALE,
			proj->obj.scale
			);
		proj = (struct projectile *) proj->obj.next;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
