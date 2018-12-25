#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "object.h"

struct character {
	struct object obj;
	signed int move_speed;
	unsigned int dir;
	unsigned int counter;
	unsigned int treshold;
	unsigned int base_frame;
	unsigned int frame;
	unsigned int max_frames;
	const signed char **shapes;
};


void init_character(
	struct character *ch,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char **shapes
	);

void set_dir_character(
	struct character *ch,
	unsigned int dir
	);

void move_character(
	struct character *ch
	);

void draw_character(
	struct character *ch
	);

#endif
