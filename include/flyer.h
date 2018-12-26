#ifndef _FLYER_H
#define _FLYER_H

#include "character.h"

struct flyer
{
	struct character ch;
};

void init_flyer(
	struct flyer *flyer,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char **shapes
	);

void set_dir_flyer(
	struct flyer *flyer,
	unsigned int dir
	);

void move_flyer(
	struct flyer *flyer
	);

void draw_flyer(
	struct flyer *flyer
	);

#endif
