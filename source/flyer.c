// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "flyer.h"

// ---------------------------------------------------------------------------


void init_flyer(
	struct flyer *flyer,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char **shapes
	)
{
	init_character(&flyer->ch, y, x, scale, speed, treshold, max_frames, shapes);
}

void set_dir_flyer(
	struct flyer *flyer,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
         dir = DIR_DOWN;
    }

	set_dir_character(&flyer->ch, dir);

	flyer->ch.base_frame = dir << 1;
}

void move_flyer(
	struct flyer *flyer
	)
{
	animate_character(&flyer->ch);

	if (move_character(&flyer->ch))
	{
		set_dir_flyer(flyer, flyer->ch.dir + 1);
	}
}

void draw_flyer(
	struct flyer *flyer
	)
{
	draw_character(&flyer->ch);
}

// ***************************************************************************
// end of file
// ***************************************************************************
