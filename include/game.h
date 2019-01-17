#ifndef _GAME_H
#define _GAME_H

#include "enemy.h"
#include "food.h"
#include "wall.h"

#define GAME_MAX_ENEMIES		3
#define GAME_MAX_FOOD			5
#define GAME_MAX_WALLS			8

#define GAME_STATE_NORMAL		0
#define GAME_STATE_PAUSE		1
#define GAME_STATE_NEW_WAVE		2
#define GAME_STATE_DEAD		3
#define GAME_STATE_OVER		4

void init_game(void);

void clear_foods_game(void);

void init_food_game(
	unsigned int enemy_index
	);

signed int new_frame_game(void);

extern unsigned int game_state;
extern unsigned int game_wave_index;

extern struct wave game_wave;
extern struct enemy game_enemies[];
extern struct food game_food[];
extern struct wall game_walls[];

#endif
