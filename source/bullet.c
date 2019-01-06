// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "bullet.h"

// ---------------------------------------------------------------------------

void init_bullet(
	struct bullet *bullet,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int dir,
	signed int speed,
	unsigned int scale,
	const signed char* const *shapes,
	struct grid *grid
	)
{
	init_object(&bullet->obj, OBJECT_TYPE_BULLET, y, x, h, w, scale, shapes[0], grid);
	bullet->frame		= 0;
	bullet->shapes	= shapes;

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
}

void move_bullet(
	struct bullet *bullet
	)
{
	if (bullet->obj.active)
	{
		if (++bullet->frame >= 8)
		{
			bullet->frame = 0;
		}

		move_object(&bullet->obj, bullet->obj.y + bullet->dy, bullet->obj.x + bullet->dx);

		if (bullet->obj.y < BULLET_MIN_Y || bullet->obj.y > BULLET_MAX_Y)
		{
			deinit_object(&bullet->obj);
		}

		if (bullet->obj.x < BULLET_MIN_X || bullet->obj.x > BULLET_MAX_X)
		{
			deinit_object(&bullet->obj);
		}
	}
}

void draw_bullet(
	struct bullet *bullet
	)
{
	bullet->obj.shape = bullet->shapes[bullet->frame];
	draw_object(&bullet->obj);
}

// ***************************************************************************
// end of file
// ***************************************************************************
