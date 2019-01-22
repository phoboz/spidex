// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "draw.h"
#include "bullet.h"

// ---------------------------------------------------------------------------

struct object *bullet_list = 0;
struct object *bullet_free_list = 0;

void init_bullet(
	struct bullet *bullet,
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
	take_object(&bullet->obj, &bullet_free_list);
	init_object(&bullet->obj, y, x, h, w, scale, shapes[0], &bullet_list);

	switch (dir) {
		case DIR_DOWN:
			bullet->dy = -speed;
			bullet->dx =  0;
			break;

		case DIR_DOWN_RIGHT:
			bullet->dy = -speed;
			bullet->dx =  speed;
			break;

		case DIR_RIGHT:
			bullet->dy =  0;
			bullet->dx =  speed;
			break;

		case DIR_UP_RIGHT:
			bullet->dy =  speed;
			bullet->dx =  speed;
			break;

		case DIR_UP:
			bullet->dy =  speed;
			bullet->dx =  0;
			break;

		case DIR_UP_LEFT:
			bullet->dy =  speed;
			bullet->dx = -speed;
			break;

		case DIR_LEFT:
			bullet->dy =  0;
			bullet->dx = -speed;
			break;

		case DIR_DOWN_LEFT:
			bullet->dy = -speed;
			bullet->dx = -speed;
			break;

		default:
			bullet->dy =  0;
			bullet->dx =  0;
			break;
	}

	bullet->frame		= 0;
	bullet->shapes	= shapes;
}

void deinit_bullet(
	struct bullet *bullet
	)
{
	deinit_object(&bullet->obj, &bullet_list);
	give_object(&bullet->obj, &bullet_free_list);
}

void move_bullets(void)
{
	struct bullet *bullet;
	struct bullet *rem_bullet = 0;

	bullet = (struct bullet *) bullet_list;
	while (bullet != 0)
	{
		if (++bullet->frame >= BULLET_NUM_FRAMES)
		{
			bullet->frame = 0;
		}

		bullet->obj.y += bullet->dy;
		bullet->obj.x += bullet->dx;

		if (bullet->obj.y < BULLET_MIN_Y || bullet->obj.y > BULLET_MAX_Y ||
			bullet->obj.x < BULLET_MIN_X || bullet->obj.x > BULLET_MAX_X)
		{
			rem_bullet = bullet;
		}

		bullet = (struct bullet *) bullet->obj.next;

		if (rem_bullet != 0)
		{
			deinit_bullet(rem_bullet);
			rem_bullet = 0;
		}
	}
}

void draw_bullets(void)
{
	struct bullet *bullet;

	bullet = (struct bullet *) bullet_list;
	while (bullet != 0)
	{
		draw_synced_list_c(
			bullet->shapes[bullet->frame],
			bullet->obj.y,
			bullet->obj.x,
			OBJECT_MOVE_SCALE,
			bullet->obj.scale
			);
		bullet = (struct bullet *) bullet->obj.next;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
