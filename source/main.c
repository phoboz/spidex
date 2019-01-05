// ***************************************************************************
// main
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "controller.h"
#include "input.h"
#include "draw.h"
#include "grid.h"
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
struct grid grid;

void init_enemies(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		//set_state_enemy(&enemy[i], ENEMY_STATE_STOP);
		deinit_object(&enemy[i].ch.obj);
	}
}

void init_foods(void)
{
	unsigned int i;

	for (i = 0; i < MAX_FOOD; i++)
	{
		deinit_object(&food[i].obj);
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
		move_enemy(&enemy[i], &player.ch.obj, MAX_WALLS, wall);
	}
}

void add_food(struct enemy *curr_enemy)
{
	unsigned int i;

	for (i = 0; i < MAX_FOOD; i++)
	{
		if (!food[i].obj.active)
		{
			init_food(
				&food[i],
				curr_enemy->ch.obj.y,
				curr_enemy->ch.obj.x,
				&grid
				);
			break;
		}
	}
}

void move_foods(void)
{
	unsigned int i;

	for (i = 0; i < MAX_ENEMIES; i++)
	{
		if (enemy[i].state == ENEMY_STATE_DEAD)
		{
			add_food(&enemy[i]);
			set_state_enemy(&enemy[i], ENEMY_STATE_STOP);
		}
	}

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
	signed int status;
	unsigned int fire_status = 0;
	unsigned int new_wave_index = 1;

	init_input();
	init_grid(&grid);
	clear_player(&player);
	init_player(&player, 0, 0, &grid);
	init_enemies();
	init_foods();
	init_walls();
	init_wave(&wave);
////DEBUG
	//wave.wave_index = 2;
////END DEBUG
	while(1)
	{
		fire_status = move_player(&player, MAX_WALLS, wall);
		move_enemies();
		move_foods();
		move_walls();

		handle_grid(&grid);

		status = new_frame();
		if (status)
		{
			Vec_Text_Width = 64;
			Print_Str_d(-127, -46, "WAVE \x80");
			print_3digit_number(-127, 16, (unsigned long) new_wave_index);
		}
		else
		{
			new_wave_index = move_wave(&wave, MAX_ENEMIES, enemy, MAX_WALLS, wall, &grid);
			if (new_wave_index)
			{
				init_enemies();
				init_walls();
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
					clear_player(&player);
					init_player(&player, 0, 0, &grid);
					init_enemies();
					init_foods();
					init_walls();
					init_wave(&wave);
				}
			}
		}

		print_3digit_number(127, -16, player.score);

		Intensity_1F();
		draw_synced_list_c_nm(web1, 0x80/10-1);
		draw_synced_list_c_nm(web2, 0x80/3-1);
		draw_synced_list_c_nm1(web3, 0x80/8-1, 0x80);
		draw_synced_list_c_nm(web4, 0x80/2-1);
		draw_synced_list_c_nm(web5, 0x80);
//		draw_synced_list_c(web, 0, 0, 0x80, 0x80);

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
