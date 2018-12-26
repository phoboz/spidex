#ifndef _HOMER_H
#define _HOMER_H

#include "character.h"

struct homer
{
	struct character ch;
};

void init_homer(
	struct homer *homer,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int max_frames,
	unsigned int treshold,
	const signed char **shapes
	);

void set_dir_homer(
	struct homer *homer,
	unsigned int dir
	);

void move_homer(
	struct homer *homer,
	signed int dest_y,
	signed int dest_x
	);

void draw_homer(
	struct homer *homer
	);

#endif
