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

unsigned int game_frame_number = 0;
unsigned int game_flashing_intensity = 0;
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

void clear_game(void)
{
	unsigned int i;

	for (i = 0; i < GAME_MAX_BULLETS; i++)
	{
		game_bullets[i].obj.prev = 0;
		game_bullets[i].obj.next = 0;
	}
	bullet_list = 0;
	bullet_free_list = 0;

	for (i = 0; i < GAME_MAX_ENEMIES; i++)
	{
		game_enemies[i].ch.obj.prev = 0;
		game_enemies[i].ch.obj.next = 0;
	}
	enemy_list = 0;
	enemy_free_list = 0;

	for (i = 0; i < GAME_MAX_PROJECTILES; i++)
	{
		game_projectiles[i].obj.prev = 0;
		game_projectiles[i].obj.next = 0;
	}
	projectile_list = 0;
	projectile_free_list = 0;

	for (i = 0; i < GAME_MAX_FOOD; i++)
	{
		game_food[i].obj.prev = 0;
		game_food[i].obj.next = 0;
	}
	food_list = 0;
	food_free_list = 0;

	for (i = 0; i < GAME_MAX_WALLS; i++)
	{
		game_walls[i].obj.prev = 0;
		game_walls[i].obj.next = 0;
	}
	wall_list = 0;
	wall_free_list = 0;
}

void restart_game(void)
{
	close_wave(&game_wave);
	clear_game();
	init_game();
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

	if ((game_frame_number & 16) == 0)
	{
		game_flashing_intensity += 4;
	}
	else
	{
		game_flashing_intensity -= 4;
	}

	game_frame_number++;

	if (Vec_Music_Flag)
	{
		Do_Sound();
	}
	else if (sfx_status_1 == 1)
	{
		ayfx_sound1();
		Do_Sound();
	}

	return Vec_Music_Flag;
}

// ***************************************************************************
// end of file
// ***************************************************************************
