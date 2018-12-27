// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "character.h"

// ---------------------------------------------------------------------------

void init_character(
	struct character *ch,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	signed int speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char **shapes
	)
{
	init_object(&ch->obj, y, x, h, w, scale, shapes[0]);

	ch->dir 			= DIR_DOWN;
	ch->move_speed	= speed;

	ch->counter		= 0;
	ch->treshold		= treshold;
	ch->base_frame	= 0;
	ch->frame			= 0;
	ch->max_frames	= max_frames;

	ch->shapes = shapes;
}

void set_dir_character(
	struct character *ch,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
         dir = DIR_DOWN;
    }

	ch->dir = dir;
}

unsigned int animate_character(
	struct character *ch
	)
{
	unsigned int changed = 0;

	if (++ch->counter >= ch->treshold) {
		ch->counter = 0;
		if (++ch->frame >= ch->max_frames) {
			ch->frame = 0;
		}
		changed = 1;
	}

	return changed;
}

unsigned int move_character(
	struct character *ch
	)
{
	unsigned int stopped = 0;
	signed int speed = ch->move_speed;

	switch (ch->dir)
	{
		case DIR_DOWN:
			ch->obj.y -= speed;
			break;

		case DIR_DOWN_RIGHT:
			ch->obj.y -= speed;
			ch->obj.x +=  speed;
			break;

		case DIR_RIGHT:
			ch->obj.x += speed;
			break;

		case DIR_UP_RIGHT:
			ch->obj.y += speed;
			ch->obj.x += speed;
			break;

		case DIR_UP:
			ch->obj.y += speed;
			break;

		case DIR_UP_LEFT:
			ch->obj.y += speed;
			ch->obj.x -= speed;
			break;

		case DIR_LEFT:
			ch->obj.x -= speed;
			break;

		case DIR_DOWN_LEFT:
			ch->obj.y -= speed;
			ch->obj.x -= speed;
			break;

		default:
			break;
	}

	if (ch->obj.y < CHARACTER_MIN_Y)
	{
		ch->obj.y = CHARACTER_MIN_Y;
		stopped = 1;
	}

	if (ch->obj.y > CHARACTER_MAX_Y)
	{
		ch->obj.y = CHARACTER_MAX_Y;
		stopped = 1;
	}

	if (ch->obj.x < CHARACTER_MIN_X)
	{
		ch->obj.x = CHARACTER_MIN_X;
		stopped = 1;
	}

	if (ch->obj.x > CHARACTER_MAX_X)
	{
		ch->obj.x = CHARACTER_MAX_X;
		stopped = 1;
	}

	return stopped;
}

void retreat_character(
	struct character *ch
	)
{
	signed int speed = ch->move_speed << 2;

	switch (ch->dir)
	{
		case DIR_DOWN:
			ch->obj.y += speed;
			break;

		case DIR_DOWN_RIGHT:
			ch->obj.y += speed;
			ch->obj.x -=  speed;
			break;

		case DIR_RIGHT:
			ch->obj.x -= speed;
			break;

		case DIR_UP_RIGHT:
			ch->obj.y -= speed;
			ch->obj.x -= speed;
			break;

		case DIR_UP:
			ch->obj.y -= speed;
			break;

		case DIR_UP_LEFT:
			ch->obj.y -= speed;
			ch->obj.x += speed;
			break;

		case DIR_LEFT:
			ch->obj.x += speed;
			break;

		case DIR_DOWN_LEFT:
			ch->obj.y += speed;
			ch->obj.x += speed;
			break;

		default:
			break;
	}

	if (ch->obj.y < CHARACTER_MIN_Y)
	{
		ch->obj.y = CHARACTER_MIN_Y;
	}

	if (ch->obj.y > CHARACTER_MAX_Y)
	{
		ch->obj.y = CHARACTER_MAX_Y;
	}

	if (ch->obj.x < CHARACTER_MIN_X)
	{
		ch->obj.x = CHARACTER_MIN_X;
	}

	if (ch->obj.x > CHARACTER_MAX_X)
	{
		ch->obj.x = CHARACTER_MAX_X;
	}
}

void draw_character(
	struct character *ch
	)
{
	ch->obj.shape = ch->shapes[ch->base_frame + ch->frame];
	draw_object(&ch->obj);
}


// ***************************************************************************
// end of file
// ***************************************************************************
