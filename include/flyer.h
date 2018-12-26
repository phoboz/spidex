#ifndef _FLYER_H
#define _FLYER_H

#include "character.h"

struct flyer_path {
	unsigned int treshold;
	unsigned int dir;
};

struct flyer
{
	struct character ch;
	unsigned int counter;
	unsigned int step_counter;
	unsigned int num_steps;
	const struct flyer_path *path;
};

void init_flyer(
	struct flyer *flyer,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int num_steps,
	const struct flyer_path *path,
	unsigned int max_frames,
	unsigned int treshold,
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
