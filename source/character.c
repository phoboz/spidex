// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "character.h"

// ---------------------------------------------------------------------------

void init_character(
	struct character *ch,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	signed int move_speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char* const *shapes
	)
{
	init_object(&ch->obj, y, x, h, w, scale, shapes[0]);

	ch->dir 			= DIR_DOWN;
	ch->move_speed	= move_speed;

	ch->dy = 0;
	ch->dx = 0;

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

	switch (dir)
	{
		case DIR_DOWN:
			ch->dy = -ch->move_speed;
			ch->dx =  0;
			break;

		case DIR_DOWN_RIGHT:
			ch->dy = -ch->move_speed;
			ch->dx =  ch->move_speed;
			break;

		case DIR_RIGHT:
			ch->dy =  0;
			ch->dx =  ch->move_speed;
			break;

		case DIR_UP_RIGHT:
			ch->dy =  ch->move_speed;
			ch->dx =  ch->move_speed;
			break;

		case DIR_UP:
			ch->dy =  ch->move_speed;
			ch->dx =  0;
			break;

		case DIR_UP_LEFT:
			ch->dy =  ch->move_speed;
			ch->dx = -ch->move_speed;
			break;

		case DIR_LEFT:
			ch->dy =  0;
			ch->dx = -ch->move_speed;
			break;

		case DIR_DOWN_LEFT:
			ch->dy = -ch->move_speed;
			ch->dx = -ch->move_speed;
			break;

		default:
			ch->dy =  0;
			ch->dx =  0;
			break;
	}
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

	ch->obj.y += ch->dy;
	ch->obj.x += ch->dx;

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

unsigned int retreat_character(
	struct character *ch
	)
{
	unsigned int stopped = 0;

	ch->obj.y -= ch->dy << 1;
	ch->obj.x -= ch->dx << 1;

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
