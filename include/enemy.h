#ifndef _ENEMY_H
#define _ENEMY_H

#include "character.h"

#define ENEMY_TYPE_FLYER	1
#define ENEMY_TYPE_HOMER	2

struct enemy_path {
	unsigned int treshold;
	unsigned int dir;
};

struct enemy
{
	struct character ch;
	unsigned int type;
	unsigned int counter;
	unsigned int step_counter;
	unsigned int num_steps;
	const struct enemy_path *path;
};

void init_enemy(
	struct enemy *enemy,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	unsigned int type,
	signed int speed,
	unsigned int num_steps,
	const struct enemy_path *path,
	unsigned int max_frames,
	unsigned int treshold,
	const signed char **shapes
	);

void set_dir_enemy(
	struct enemy *enemy,
	unsigned int dir
	);

void move_enemy(
	struct enemy *enemy,
	signed int dest_y,
	signed int dest_x
	);

void draw_enemy(
	struct enemy *enemy
	);

#endif
