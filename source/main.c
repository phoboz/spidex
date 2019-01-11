// ***************************************************************************
// main
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "controller.h"
#include "input.h"
#include "draw.h"
#include "player.h"
#include "enemy.h"
#include "food.h"
#include "wall.h"
#include "wave.h"
#include "draw.h"
#include "text.h"
#include "ayfxPlayer.h"
#include "fire_snd.h"
#include "fall_snd.h"

// ---------------------------------------------------------------------------
// cold reset: the vectrex logo is shown, all ram data is cleared
// warm reset: skip vectrex logo and keep ram data
// ---------------------------------------------------------------------------
// at system startup, when powering up the vectrex, a cold reset is performed
// if the reset button is pressed, then a warm reset is performed
// ---------------------------------------------------------------------------
// after each reset, the cartridge title is shown and then main() is called
// ---------------------------------------------------------------------------

#define MAX_ENEMIES	3
#define MAX_FOOD		5
#define MAX_WALLS		3

extern const signed char web[];
extern const signed char web1[];
extern const signed char web2[];
extern const signed char web3[];
extern const signed char web4[];
extern const signed char web5[];

struct player player;
struct wave wave;
struct enemy enemy[MAX_ENEMIES];
struct food food[MAX_FOOD];
struct wall wall[MAX_WALLS];

void clear_enemies(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		deinit_enemy(&enemy[i]);
	}
}

void clear_foods(void)
{
	unsigned int i;

	for (i = 0; i < MAX_FOOD; i++)
	{
		deinit_food(&food[i]);
	}
}

void clear_walls(void)
{
	unsigned int i;

	for (i = 0; i < MAX_WALLS; i++)
	{
		deinit_wall(&wall[i]);
	}
}

void move_enemies(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		move_enemy(&enemy[i], &player.ch.obj, MAX_WALLS, wall);
	}
}

void move_foods(void)
{
	unsigned int i;

	for (i = 0; i < MAX_FOOD; i++)
	{
		move_food(&food[i]);
	}
}

void draw_enemies(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		draw_enemy(&enemy[i]);
	}
}

void draw_foods(void)
{
	unsigned int i;

	for (i = 0; i < MAX_FOOD; i++)
	{
		draw_food(&food[i]);
	}
}

void draw_walls(void)
{
	unsigned int i;

	for (i = 0; i < MAX_WALLS; i++)
	{
		draw_wall(&wall[i]);
	}
}

signed int new_frame(void)
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

int main(void)
{
	unsigned int i;
	unsigned int enemy_id;
	signed int status;
	unsigned int fire_status = 0;
	unsigned int new_wave_index = 0;
	unsigned int wave_index = 1;
	unsigned int pause_state = 0;
	unsigned int dual_joystick = 0;

	init_input();
	init_random(5, 27, 3, 19);
	init_player(&player, 0, 0);
	clear_enemies();
	clear_foods();
	clear_walls();
	init_wave(&wave);
////DEBUG
	//wave.wave_index = 2;
////END DEBUG
	while(1)
	{
		update_input();

		if (pause_state)
		{
			Intensity_5F();
			reset0ref();
			Vec_Text_Width = 64;
			Print_Str_d(-127, -32, "PAUSE\x80");
		}
		else
		{
			if (dual_joystick)
			{
				fire_status = move_dual_joystick_player(&player, MAX_WALLS, wall);
			}
			else
			{
				fire_status = move_single_joystick_player(&player, MAX_WALLS, wall);
			}
			move_enemies();
			move_foods();

			enemy_id = interaction_enemies_player(&player, MAX_ENEMIES, enemy);
			if (enemy_id)
			{
				for (i = 0; i < MAX_FOOD; i++)
				{
					if (!food[i].obj.active)
					{
						init_food(
							&food[i],
							enemy[enemy_id - 1].ch.obj.y,
							enemy[enemy_id - 1].ch.obj.x
							);
						break;
					}
				}
			}
			new_wave_index = move_wave(&wave, MAX_ENEMIES, enemy, MAX_WALLS, wall);
			interaction_food_player(&player, MAX_FOOD, food);
		}

		status = new_frame();
		Intensity_5F();
		if (status)
		{
			Vec_Text_Width = 64;
			Print_Str_d(-127, -46, "WAVE \x80");
			print_3digit_number(-127, 16, (unsigned long) wave_index);
		}
		else
		{
			if (new_wave_index)
			{
				wave_index = new_wave_index;
				clear_enemies();
				clear_walls();
				Vec_Music_Flag = 1;
			}

			if (fire_status && !new_wave_index)
			{
				sfx_pointer_1 = (long unsigned int) (&fire_snd_data);
				sfx_status_1 = 1;
			}
			else if (player.state_changed)
			{
				if (player.state == PLAYER_STATE_DYING)
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

		if (player.state == PLAYER_STATE_DEAD)
		{
			Vec_Text_Width = 64;
			if (player.num_lives > 0)
			{
				Intensity_5F();
				Print_Str_d(-127, -46, "LIVES \x80");
				print_3digit_number(-127, 16, (unsigned long) player.num_lives);
			}
			else
			{
				Print_Str_d(-127, -46, "GAME OVER\x80");
				if (button_1_4_pressed())
				{
					init_player(&player, 0, 0);
					clear_enemies();
					clear_foods();
					clear_walls();
					init_wave(&wave);
				}
			}
		}

		if (button_1_1_pressed())
		{
			if (!pause_state)
			{
				pause_state = 1;
			}
			else
			{
				pause_state = 0;
			}
		}

		if (button_2_4_pressed())
		{
			dual_joystick = 1;
		}

		print_3digit_number(127, -16, player.score);

		Intensity_3F();
		draw_synced_list_c_nm(web1, 0x80/10-1);
		draw_synced_list_c_nm(web2, 0x80/3-1);
		draw_synced_list_c_nm1(web3, 0x80/8-1, 0x80);
		draw_synced_list_c_nm(web4, 0x80/2-1);
		draw_synced_list_c_nm(web5, 0x80);

		Intensity_5F();
		draw_walls();

		Intensity_7F();
		draw_player(&player);
		draw_enemies();
		draw_foods();
	}
	
	// if return value is <= 0, then a warm reset will be performed,
	// otherwise a cold reset will be performed
	return 0;
}

// ***************************************************************************
// end of file
// ***************************************************************************
