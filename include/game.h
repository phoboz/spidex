#ifndef _GAME_H
#define _GAME_H

#include "enemy.h"
#include "food.h"
#include "wall.h"

#define GAME_PLAYER_1_START_Y	-40
#define GAME_PLAYER_1_START_X	0

#define GAME_MAX_ENEMIES		3
#define GAME_MAX_FOOD			5
#define GAME_MAX_WALLS			8

#define GAME_STATE_NORMAL		0
#define GAME_STATE_PAUSE		1
#define GAME_STATE_NEW_WAVE		2
#define GAME_STATE_DEAD		3
#define GAME_STATE_OVER		4

#define GAME_OPTIONS_NONE			0x00
#define GAME_OPTIONS_DUAL_JOYSTICKS	0x01

void init_game(void);

void restart_game(void);

void init_food_game(
	unsigned int enemy_index
	);

void toggle_control_method_game(void);

signed int new_frame_game(void);

extern struct wave game_wave;
extern struct enemy game_enemies[];
extern struct food game_food[];
extern struct wall game_walls[];

extern unsigned int game_state;
extern unsigned int game_wave_index;

extern unsigned int game_options;

#endif
