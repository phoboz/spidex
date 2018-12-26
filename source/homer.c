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

	homer->ch.base_frame = dir << 1;
}

void move_homer(
	struct homer *homer,
	signed int dest_y,
	signed int dest_x
	)
{
	signed int src_y = homer->ch.obj.y;
	signed int src_x = homer->ch.obj.x;

	animate_character(&homer->ch);

	if (src_y < dest_y && src_x < dest_x)
	{
		set_dir_homer(homer, DIR_UP_RIGHT);
	}
	else if (src_y < dest_y && src_x == dest_x)
	{
		set_dir_homer(homer, DIR_UP);
	}
	else if (src_y < dest_y && src_x > dest_x)
	{
		set_dir_homer(homer, DIR_UP_LEFT);
	}
	else if (src_y == dest_y && src_x < dest_x)
	{
		set_dir_homer(homer, DIR_RIGHT);
	}
	else if (src_y == dest_y && src_x > dest_x)
	{
		set_dir_homer(homer, DIR_LEFT);
	}
	else if (src_y > dest_y && src_x < dest_x)
	{
		set_dir_homer(homer, DIR_DOWN_RIGHT);
	}
	else if (src_y > dest_y && src_x == dest_x)
	{
		set_dir_homer(homer, DIR_DOWN);
	}
	else if (src_y > dest_y && src_x > dest_x)
	{
		set_dir_homer(homer, DIR_DOWN_LEFT);
	}

	move_character(&homer->ch);
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
