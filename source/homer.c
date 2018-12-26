// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "homer.h"

// ---------------------------------------------------------------------------

void init_homer(
	struct homer *homer,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int max_frames,
	unsigned int treshold,
	const signed char **shapes
	)
{
	init_character(&homer->ch, y, x, scale, speed, treshold, max_frames, shapes);
}


void set_dir_homer(
	struct homer *homer,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
         dir = DIR_DOWN;
    }

	set_dir_character(&homer->ch, dir);
}

void move_homer(
	struct homer *homer
	)
{
	animate_character(&homer->ch);
}

void draw_homer(
	struct homer *homer
	)
{
	draw_character(&homer->ch);
}

// ***************************************************************************
// end of file
// ***************************************************************************
