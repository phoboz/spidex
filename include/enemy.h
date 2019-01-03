#ifndef _ENEMY_H
#define _ENEMY_H

#include "character.h"

#define ENEMY_STATE_SPAWN	0
#define ENEMY_STATE_EGG	1
#define ENEMY_STATE_STOP	2
#define ENEMY_STATE_MOVE	3
#define ENEMY_STATE_EXPLODE	4
#define ENEMY_STATE_DEAD	5

#define ENEMY_TYPE_FLYER	1
#define ENEMY_TYPE_HOMER	2

#define ENEMY_SPECIAL_NONE		0
#define ENEMY_SPECIAL_EXPLODE	1
#define ENEMY_SPECIAL_EGG		2

#define ENEMY_RACE_FLY		0
#define ENEMY_RACE_BEE		1
#define ENEMY_RACE_BUG		2
#define ENEMY_RACE_MINE	3

#define ENEMY_EXPLOSION_RADIUS	16

#define ENEMY_SPAWN_TRESHOLD		16
#define ENEMY_SPAWN_ANIM_TRESHOLD	1
#define ENEMY_SPAWN_ANIM_FRAMES		8
#define ENEMY_STOP_TRESHOLD			3
#define ENEMY_EXPLODE_TRESHOLD		12

struct enemy_path {
	unsigned int treshold;
	unsigned int dir;
};

struct enemy_race {
	signed int h;
	signed int w;
	unsigned int scale;
	unsigned int type;
	signed int speed;
	signed int max_hits;
	unsigned int special;
	unsigned int treshold;
	const signed char * const *shapes;
};

struct enemy
{
	struct character ch;
	const struct enemy_race *race;
	signed int num_hits;
	unsigned int state;
	unsigned int counter;
	unsigned int spawn_counter;
	unsigned int step_counter;
	unsigned int num_steps;
	const struct enemy_path *path;
	unsigned int state_counter;
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

void set_state_enemy(
	struct enemy *enemy,
	unsigned int state
	);

void move_enemy(
	struct enemy *enemy,
	struct object *obj,
	unsigned int num_walls,
	struct wall *walls
	);

unsigned int hit_enemy(
	struct enemy *enemy
	);

unsigned int hit_object_enemy(
	struct enemy *enemy,
	struct object *obj
	);

void draw_enemy(
	struct enemy *enemy
	);

extern const struct enemy_race enemy_races[];

#endif
