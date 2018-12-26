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

void move_flyer(
	struct flyer *flyer
	)
{
	animate_character(&flyer->ch);
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
