#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "object.h"
#include "wall.h"

#define CHARACTER_WALL_PASS_NONE	0
#define CHARACTER_WALL_PASS_IN		1
#define CHARACTER_WALL_PASS_OUT		2

#define CHARACTER_MIN_Y	-108
#define CHARACTER_MAX_Y	 108
#define CHARACTER_MIN_X	-100
#define CHARACTER_MAX_X	 100

struct character
{
	struct object obj;
	unsigned int wall_mode;
	signed int move_speed;
	unsigned int dir;
	signed int dy, dx;
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
	unsigned int wall_mode,
	signed int move_speed,
	unsigned int treshold,
	unsigned int max_frames,
	const signed char* const *shapes,
	struct object **head
	);

void deinit_character(
	struct character *ch,
	struct object **head
	);

void set_dir_character(
	struct character *ch,
	unsigned int dir
	);

unsigned int animate_character(
	struct character *ch
	);

unsigned int move_character(
	struct character *ch
	);

unsigned int retreat_character(
	struct character *ch
	);

unsigned int quick_check_wall_character(
	struct character *ch,
	struct wall *wall
	);

unsigned int hit_wall_character(
	struct character *ch,
	struct wall *wall
	);

#endif
