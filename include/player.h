#ifndef _PLAYER_H
#define _PLAYER_H

#include "character.h"
#include "enemy.h"
#include "wall.h"
#include "food.h"
#include "bullet.h"

#define PLAYER_HEIGHT			12
#define PLAYER_WIDTH			12
#define PLAYER_SCALE			0x40
#define SPIDER_SCALE			PLAYER_SCALE/10
#define PLAYER_SPEED			4
#define PLAYER_ANIM_TRESHOLD	2
#define PLAYER_MAX_FRAMES		2

#define PLAYER_BULLET_HEIGHT	8
#define PLAYER_BULLET_WIDTH		8
#define PLAYER_MAX_BULLETS		3
#define PLAYER_FIRE_THRESHOLD	8
#define PLAYER_BULLET_SPEED		6
#define PLAYER_NUM_LIVES		2

#define PLAYER_STATE_NORMAL		0
#define PLAYER_STATE_DYING		1
#define PLAYER_STATE_DEAD		2
#define PLAYER_STATE_INVINSIBLE	3

#define PLAYER_BLINK_TRESHOLD		2
#define PLAYER_SCALE_TRESHOLD		10
#define PLAYER_DYING_TRESHOLD		48
#define PLAYER_DEAD_TRESHOLD		48
#define PLAYER_INVINSIBLE_TRESHOLD	48


struct player
{
	struct character ch;
	unsigned int state;
	unsigned long score;
	unsigned int num_lives;
	unsigned int fire_dir;
	unsigned int fire_counter;
	unsigned int state_counter;
	unsigned int anim_counter;
	unsigned int invinsible_counter;
	unsigned int state_changed;
	struct bullet bullet[PLAYER_MAX_BULLETS];
};

void clear_player(
	struct player *player
	);

void init_player(
	struct player *player,
	signed int y,
	signed int x,
	struct grid *grid
	);

void set_state_player(
	struct player *player,
	unsigned int state
	);

void set_fire_dir_player(
	struct player *player,
	unsigned int dir
	);

unsigned int move_player(
	struct player *player,
	unsigned int num_walls,
	struct wall *walls
	);

void draw_player(
	struct player *player
	);

#endif
