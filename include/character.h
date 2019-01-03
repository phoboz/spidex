#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "object.h"
#include "wall.h"

#define CHARACTER_MIN_Y	-108
#define CHARACTER_MAX_Y	 108
#define CHARACTER_MIN_X	-100
#define CHARACTER_MAX_X	 100

#define CHARACTER_WALL_MODE_PASS_IN	0
#define CHARACTER_WALL_MODE_PASS_OUT	1

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
	const signed char* const *shapes;
};


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
	);

void set_dir_character(
	struct character *ch,
	unsigned int dir
	);

unsigned int animate_character(
	struct character *ch
	);

void get_move_character(
	struct character *ch,
	signed int speed,
	signed int *dy,
	signed int *dx
	);

unsigned int limit_move_character(
	struct character *ch
	);

unsigned int move_character(
	struct character *ch
	);

unsigned int retreat_character(
	struct character *ch
	);

unsigned int interaction_walls_character(
	struct character *ch,
	signed int dy,
	signed int dx,
	unsigned int mode,
	unsigned int num_walls,
	struct wall *walls
	);

void draw_character(
	struct character *ch
	);

#endif
