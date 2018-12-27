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
#include "input.h"
#include "player.h"
#include "enemy.h"
#include "draw.h"

// ---------------------------------------------------------------------------
// cold reset: the vectrex logo is shown, all ram data is cleared
// warm reset: skip vectrex logo and keep ram data
// ---------------------------------------------------------------------------
// at system startup, when powering up the vectrex, a cold reset is performed
// if the reset button is pressed, then a warm reset is performed
// ---------------------------------------------------------------------------
// after each reset, the cartridge title is shown and then main() is called
// ---------------------------------------------------------------------------

#define MAX_FLYERS 2
#define MAX_HOMERS 1
#define MAX_ENEMIES (MAX_FLYERS + MAX_HOMERS)

extern const signed char web[];
extern const signed char *fly[];
extern const signed char *bug[];
extern const signed char *bee[];

struct player player;
const struct enemy_path path[] =
{
	/* treshold		dir */
	{3,				DIR_DOWN},
	{3,				DIR_DOWN_RIGHT},
	{3,				DIR_RIGHT},
	{3,				DIR_UP_RIGHT},
	{3,				DIR_UP},
	{3,				DIR_UP_LEFT},
	{3,				DIR_LEFT},
	{3,				DIR_DOWN_LEFT}
};
struct enemy enemy[MAX_ENEMIES];

int main(void)
{
	unsigned int i;

	init_input();

	init_player(&player, 0, 0);

	for (i = 0; i < MAX_FLYERS; i++)
	{
		init_enemy(&enemy[i], 40, (signed int) i * 40, 9, 9, 0x40, ENEMY_TYPE_FLYER, 1, 8, path, 2, 2, bee);
	}

	for (i = 0; i < MAX_HOMERS; i++)
	{
		init_enemy(&enemy[i+MAX_FLYERS], -40, (signed int) i * 40, 12, 12, 0x40, ENEMY_TYPE_HOMER, 1, 0, 0, 2, 3, bug);
	}

	while(1)
	{
		move_player(&player);

		for (i = 0; i < MAX_ENEMIES; i++)
		{
			move_enemy(&enemy[i], player.ch.obj.y, player.ch.obj.x);
		}

		interaction_enemies_player(&player, MAX_ENEMIES, enemy);

		Wait_Recal();

		Intensity_1F();
		draw_synced_list_c(web, 0, 0, 0x80, 0x80);

		Intensity_5F();
		draw_player(&player);

		for (i = 0; i < MAX_ENEMIES; i++)
		{
			draw_enemy(&enemy[i]);
		}
	};
	
	// if return value is <= 0, then a warm reset will be performed,
	// otherwise a cold reset will be performed
	return 0;
}

// ***************************************************************************
// end of file
// ***************************************************************************
