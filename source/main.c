// ***************************************************************************
// main
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "controller.h"
#include "input.h"
#include "draw.h"
#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include "projectile.h"
#include "food.h"
#include "wall.h"
#include "wave.h"
#include "draw.h"
#include "game.h"
#include "text.h"
#include "ayfxPlayer.h"
#include "fire_snd.h"
#include "fall_snd.h"

#define PLAYER_1_START_Y	-40
#define PLAYER_1_START_X	0

extern const signed char web[];
extern const signed char web1[];
extern const signed char web2[];
extern const signed char web3[];
extern const signed char web4[];
extern const signed char web5[];

unsigned int fire_status = 0;
unsigned int new_wave_index = 0;
unsigned int dual_joystick = 0;
unsigned int enemy_id = 0;

// ---------------------------------------------------------------------------
// cold reset: the vectrex logo is shown, all ram data is cleared
// warm reset: skip vectrex logo and keep ram data
// ---------------------------------------------------------------------------
// at system startup, when powering up the vectrex, a cold reset is performed
// if the reset button is pressed, then a warm reset is performed
// ---------------------------------------------------------------------------
// after each reset, the cartridge title is shown and then main() is called
// ---------------------------------------------------------------------------

int main(void)
{
	init_single_input();
	init_random(5, 27, 3, 19);
	init_game();
	init_player(&player_1, PLAYER_1_START_Y, PLAYER_1_START_X);
	init_wave(&game_wave);
////DEBUG
	//game_wave.wave_index = 1;
////END DEBUG
	while(1)
	{
		update_input();

		if (game_state != GAME_STATE_PAUSE)
		{
			if (dual_joystick)
			{
				fire_status = move_dual_joystick_player_1();
			}
			else
			{
				fire_status = move_single_joystick_player_1();
			}
			move_bullets();
			move_enemies();
			move_projectiles();
			move_food();

			enemy_id = interaction_enemies_player_1();
			if (enemy_id)
			{
				init_food_game(enemy_id - 1);
			}
			interaction_projectiles_player_1();
			new_wave_index = move_wave(
				&game_wave,
				GAME_MAX_ENEMIES,
				game_enemies,
				GAME_MAX_WALLS,
				game_walls
				);
			interaction_food_player_1();
		}

		if (new_frame_game())
		{
			game_state = GAME_STATE_NEW_WAVE;
		}
		else
		{
			if (game_state != GAME_STATE_PAUSE)
			{
				game_state = GAME_STATE_NORMAL;
			}

			if (new_wave_index)
			{
				game_wave_index = new_wave_index;
				Vec_Music_Flag = 1;
			}

			if (fire_status && !new_wave_index)
			{
				sfx_pointer_1 = (long unsigned int) (&fire_snd_data);
				sfx_status_1 = 1;
			}
			else if (player_1.state_changed)
			{
				if (player_1.state == PLAYER_STATE_DYING)
				{
					sfx_pointer_1 = (long unsigned int) (&fall_snd_data);
					sfx_status_1 = 1;
				}
			}

			if (sfx_status_1 == 1)
			{
				ayfx_sound1();
			}
		}

		if (player_1.state == PLAYER_STATE_DEAD)
		{
			if (player_1.num_lives > 0)
			{
				game_state = GAME_STATE_DEAD;
			}
			else
			{
				game_state = GAME_STATE_OVER;
				if (button_1_4_pressed())
				{
					close_wave(
						&game_wave,
						GAME_MAX_ENEMIES,
						game_enemies,
						GAME_MAX_WALLS,
						game_walls
						);
					clear_foods_game();
					init_player(&player_1, PLAYER_1_START_Y, PLAYER_1_START_X);;
					init_wave(&game_wave);
					game_state = GAME_STATE_NORMAL;
				}
			}
		}

		if (button_1_1_pressed())
		{
			if (game_state == GAME_STATE_NORMAL)
			{
				game_state = GAME_STATE_PAUSE;
			}
			else
			{
				game_state = GAME_STATE_NORMAL;
			}
		}

		if (button_2_4_pressed())
		{
			init_dual_input();
			dual_joystick = 1;
		}

		Intensity_5F();
		print_3digit_number(127, -16, player_1.score);

		Intensity_a(0x2f);
		draw_synced_list_c_nm(web1, 0x80/10-1);
		draw_synced_list_c_nm(web2, 0x80/3-1);
		draw_synced_list_c_nm1(web3, 0x80/8-1, 0x80);
		draw_synced_list_c_nm(web4, 0x80/2-1);
		draw_synced_list_c_nm(web5, 0x80);

		Intensity_5F();
		draw_walls();

		Intensity_a(0x6f);
		draw_player_1();
		draw_enemies();
		draw_food();

		Intensity_7F();
		draw_bullets();
		draw_projectiles();

		Intensity_5F();
		print_info_text();
	}
	
	// if return value is <= 0, then a warm reset will be performed,
	// otherwise a cold reset will be performed
	return 0;
}

// ***************************************************************************
// end of file
// ***************************************************************************
