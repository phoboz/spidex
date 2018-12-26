#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "object.h"

#define CHARACTER_MIN_Y	-108
#define CHARACTER_MAX_Y	 108
#define CHARACTER_MIN_X	 -84
#define CHARACTER_MAX_X	  84

struct character
{
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

void animate_character(
	struct character *ch
	);

void move_character(
	struct character *ch
	);

void draw_character(
	struct character *ch
	);

#endif
