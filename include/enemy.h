#ifndef _ENEMY_H
#define _ENEMY_H

#include "character.h"
#include "projectile.h"
#include "wall.h"

#define ENEMY_STATE_SPAWN	0
#define ENEMY_STATE_EGG	1
#define ENEMY_STATE_HATCH	2
#define ENEMY_STATE_STOP	3
#define ENEMY_STATE_MOVE	4
#define ENEMY_STATE_EXPLODE	5
#define ENEMY_STATE_DYING	6
#define ENEMY_STATE_DEAD	7

#define ENEMY_TYPE_RANDOM	0
#define ENEMY_TYPE_PATH	1
#define ENEMY_TYPE_HOMING	2

#define ENEMY_SPECIAL_NONE		0
#define ENEMY_SPECIAL_EXPLODE	1
#define ENEMY_SPECIAL_EGG		2
#define ENEMY_SPECIAL_HEAVY		3

#define ENEMY_RACE_MOSQUITO		0
#define ENEMY_RACE_FLY			1
#define ENEMY_RACE_BUTTERFLY	2
#define ENEMY_RACE_BEE			3
#define ENEMY_RACE_BUG			4
#define ENEMY_RACE_MINE		5
#define ENEMY_RACE_DRAGONFLY	6
#define ENEMY_RACE_ANT			7
#define ENEMY_RACE_SWALLOW		8
#define ENEMY_RACE_STUMP		9

#define ENEMY_PROJECTILE_HEIGHT	4
#define ENEMY_PROJECTILE_WIDTH	4
#define ENEMY_PROJECTILE_SCALE	0x40

#define ENEMY_ACTION_MOVE		1
#define ENEMY_ACTION_SHOOT		2

#define ENEMY_EXPLOSION_RADIUS	16

#define ENEMY_SPAWN_TRESHOLD		16
#define ENEMY_SPAWN_ANIM_TRESHOLD	1
#define ENEMY_SPAWN_ANIM_FRAMES		8
#define ENEMY_EGG_TRESHOLD			72
#define ENEMY_HATCH_TRESHOLD		32
#define ENEMY_STOP_TRESHOLD			3
#define ENEMY_EXPLODE_TRESHOLD		12

#define ENEMY_RANDOM_RANGE_DOWN			(1*32U-1)
#define ENEMY_RANDOM_RANGE_DOWN_RIGHT	(2*32U-1)
#define ENEMY_RANDOM_RANGE_RIGHT		(3*32U-1)
#define ENEMY_RANDOM_RANGE_UP_RIGHT		(4*32U-1)
#define ENEMY_RANDOM_RANGE_UP			(5*32U-1)
#define ENEMY_RANDOM_RANGE_UP_LEFT		(6*32U-1)
#define ENEMY_RANDOM_RANGE_LEFT			(7*32U-1)
#define ENEMY_RANDOM_RANGE_DOWN_LEFT		(8*32U-1)

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

struct enemy_path {
	unsigned int treshold;
	unsigned int dir;
	unsigned int action;
};

struct enemy
{
	struct character ch;
	const struct enemy_race *race;
	signed int num_hits;
	unsigned int state;
	unsigned int path_counter;
	unsigned int spawn_counter;
	unsigned int step_counter;
	unsigned int num_steps;
	const struct enemy_path *path;
	signed int param;
	unsigned int state_counter;
};


void init_enemy(
	struct enemy *enemy,
	signed int y,
	signed int x,
	const struct enemy_race *race, 
	unsigned int num_steps,
	const struct enemy_path *path,
	signed int param
	);

void deinit_enemy(
	struct enemy *enemy
	);

void move_enemies(void);

unsigned int hit_enemy(
	struct enemy *enemy
	);

unsigned int explosion_hit_object_enemy(
	struct enemy *enemy,
	struct object *obj
	);

void draw_enemies(void);

extern const struct enemy_race enemy_races[];
extern struct object *enemy_list;
extern struct object *enemy_free_list;

#endif
