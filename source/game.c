// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "player.h"
#include "enemy.h"
#include "food.h"
#include "wall.h"
#include "wave.h"
#include "ayfxPlayer.h"
#include "game.h"

// ---------------------------------------------------------------------------

struct wave game_wave;
struct enemy game_enemies[GAME_MAX_ENEMIES];
struct food game_food[GAME_MAX_FOOD];
struct wall game_walls[GAME_MAX_WALLS];

unsigned int game_state = GAME_STATE_NORMAL;
unsigned int game_wave_index = 1;


void init_game(void)
{
	unsigned int i;

	for (i = 0; i < GAME_MAX_ENEMIES; i++)
	{
		game_enemies[i].ch.obj.active = 0;
	}

	for (i = 0; i < GAME_MAX_FOOD; i++)
	{
		game_food[i].obj.active = 0;
	}

	for (i = 0; i < GAME_MAX_WALLS; i++)
	{
		game_walls[i].obj.active = 0;
	}

	init_player(&player_1, GAME_PLAYER_1_START_Y, GAME_PLAYER_1_START_X);
	init_wave(&game_wave);
}

static void clear_foods_game(void)
{
	unsigned int i;

	for (i = 0; i < GAME_MAX_FOOD; i++)
	{
		deinit_food(&game_food[i]);
	}
}

void restart_game(void)
{
	close_wave(&game_wave, GAME_MAX_ENEMIES, game_enemies, GAME_MAX_WALLS, game_walls);
	clear_foods_game();
	init_player(&player_1, GAME_PLAYER_1_START_Y, GAME_PLAYER_1_START_X);;
	init_wave(&game_wave);
}

void init_food_game(
	unsigned int enemy_index
	)
{
	unsigned int i;

	for (i = 0; i < GAME_MAX_FOOD; i++)
	{
		if (!game_food[i].obj.active)
		{
			init_food(
				&game_food[i],
				game_enemies[enemy_index].ch.obj.y,
				game_enemies[enemy_index].ch.obj.x,
				game_enemies[enemy_index].race->max_hits
				);
			break;
		}
	}
}

signed int new_frame_game(void)
{
	if (Vec_Music_Flag)
	{
		DP_to_C8();
		Init_Music_chk(&Vec_Music_9);
	}

	Wait_Recal();

	if (Vec_Music_Flag || sfx_status_1 == 1)
	{
		Do_Sound();
	}

	return Vec_Music_Flag;
}

// ***************************************************************************
// end of file
// ***************************************************************************
