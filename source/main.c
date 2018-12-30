// ***************************************************************************
// main
// ***************************************************************************
// This file was developed by Prof. Dr. Peer Johannsen as part of the 
// "Retro-Programming" and "Advanced C Programming" class at
// Pforzheim University, Germany.
// 
// It can freely be used, but at one's own risk and for non-commercial
// purposes only. Please respect the copyright and credit the origin of
// this file.
//
// Feedback, suggestions and bug-reports are welcome and can be sent to:
// peer.johannsen@pforzheim-university.de
// ---------------------------------------------------------------------------

#include <vectrex.h>
#include "controller.h"
#include "input.h"
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
#define MAX_WALLS		4

extern const signed char web[];

struct player player;
struct wave wave;
struct enemy enemy[MAX_ENEMIES];
struct food food[MAX_FOOD];
struct wall wall[MAX_WALLS];

void init_enemies(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		enemy[i].ch.obj.active = 0;
	}
}

void init_foods(void)
{
	unsigned int i;

	for (i = 0; i < MAX_FOOD; i++)
	{
		food[i].obj.active = 0;
	}
}

void init_walls(void)
{
	unsigned int i;

	for (i = 0; i < MAX_WALLS; i++)
	{
		wall[i].active = 0;
	}
}

void move_enemies(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		move_enemy(&enemy[i], player.ch.obj.y, player.ch.obj.x);
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

void move_walls(void)
{
	unsigned int i;

	for (i = 0; i < MAX_WALLS; i++)
	{
		move_wall(&wall[i]);
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

	Intensity_5F();

	return Vec_Music_Flag;
}

int main(void)
{
	unsigned int i;
	unsigned int enemy_id;
	signed int status;
	unsigned int fire_status = 0;
	unsigned int new_wave_index = 1;

	init_input();
	init_player(&player, 0, 0);
	init_enemies();
	init_foods();
	init_walls();
	init_wave(&wave);

	while(1)
	{
		fire_status = move_player(&player, MAX_WALLS, wall);
		move_enemies();
		move_foods();
		move_walls();

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

		interaction_food_player(&player, MAX_FOOD, food);

		status = new_frame();
		if (status)
		{
			Vec_Text_Width = 64;
			Print_Str_d(-127, -46, "WAVE \x80");
			print_3digit_number(-127, 16, (unsigned long) new_wave_index);
		}
		else
		{
			new_wave_index = move_wave(&wave, MAX_ENEMIES, enemy, MAX_WALLS, wall);
			if (new_wave_index)
			{
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
				Print_Str_d(-127, -46, "LIVES \x80");
				print_3digit_number(-127, 16, (unsigned long) player.num_lives);
			}
			else
			{
				Print_Str_d(-127, -46, "GAME OVER\x80");
				update_input();
				if (button_1_4_pressed())
				{
					init_player(&player, 0, 0);
					init_enemies();
					init_foods();
					init_walls();
					init_wave(&wave);
				}
			}
		}

		print_3digit_number(127, -16, player.score);

		Intensity_1F();
		draw_synced_list_c(web, 0, 0, 0x80, 0x80);

		Intensity_5F();
		draw_walls();

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
