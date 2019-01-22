// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "input.h"
#include "player.h"
#include "enemy.h"
#include "food.h"
#include "wall.h"
#include "wave.h"
#include "ayfxPlayer.h"
#include "game.h"

// ---------------------------------------------------------------------------

struct wave game_wave;
struct bullet game_bullets[GAME_MAX_BULLETS];
struct enemy game_enemies[GAME_MAX_ENEMIES];
struct projectile game_projectiles[GAME_MAX_PROJECTILES];
struct food game_food[GAME_MAX_FOOD];
struct wall game_walls[GAME_MAX_WALLS];

unsigned int game_state = GAME_STATE_NORMAL;
unsigned int game_wave_index = 1;

unsigned int game_options = GAME_OPTIONS_NONE;

void init_game(void)
{
	unsigned int i;

	for (i = 0; i < GAME_MAX_BULLETS; i++)
	{
		give_object(&game_bullets[i].obj, &bullet_free_list);
	}

	for (i = 0; i < GAME_MAX_ENEMIES; i++)
	{
		give_object(&game_enemies[i].ch.obj, &enemy_free_list);
	}

	for (i = 0; i < GAME_MAX_PROJECTILES; i++)
	{
		give_object(&game_projectiles[i].obj, &projectile_free_list);
	}

	for (i = 0; i < GAME_MAX_FOOD; i++)
	{
		give_object(&game_food[i].obj, &food_free_list);
	}

	for (i = 0; i < GAME_MAX_WALLS; i++)
	{
		give_object(&game_walls[i].obj, &wall_free_list);
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
	close_wave(&game_wave);
	clear_foods_game();
	init_player(&player_1, GAME_PLAYER_1_START_Y, GAME_PLAYER_1_START_X);;
	init_wave(&game_wave);
}

void init_food_game(
	struct enemy *enemy
	)

{
	if (food_free_list != 0)
	{
		init_food(
			(struct food *) food_free_list,
			enemy->ch.obj.y,
			enemy->ch.obj.x,
			enemy->race->max_hits
			);
	}
}

void toggle_control_method_game(void)
{
	if (game_options & GAME_OPTIONS_DUAL_JOYSTICKS)
	{
		init_single_input();
		game_options &= ~GAME_OPTIONS_DUAL_JOYSTICKS;
	}
	else
	{
		init_dual_input();
		game_options |= GAME_OPTIONS_DUAL_JOYSTICKS;
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
