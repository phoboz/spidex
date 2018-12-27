#ifndef _ENEMY_H
#define _ENEMY_H

#include "character.h"

#define ENEMY_TYPE_FLYER	1
#define ENEMY_TYPE_HOMER	2

#define ENEMY_RACE_FLY		0
#define ENEMY_RACE_BEE		1
#define ENEMY_RACE_BUG		2

#define ENEMY_STOP_TRESHOLD	3

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
	unsigned int stopped;
	unsigned int stop_counter;
};

struct enemy_race {
	signed int h;
	signed int w;
	unsigned int scale;
	unsigned int type;
	signed int speed;
	unsigned int max_frames;
	unsigned int treshold;
	const signed char **shapes;
};

void init_enemy(
	struct enemy *enemy,
	signed int y,
	signed int x,
	const struct enemy_race *race, 
	unsigned int num_steps,
	const struct enemy_path *path
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

void hit_enemy(
	struct enemy *enemy
	);

void draw_enemy(
	struct enemy *enemy
	);

extern const struct enemy_race enemy_races[];

#endif
