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
#include "flyer.h"
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

extern const signed char web[];
extern const signed char *fly[];

struct player player;
struct flyer flyer[MAX_FLYERS];
const struct flyer_path path[] =
{
	/* treshold		dir */
	{6,				DIR_RIGHT},
	{12,				DIR_DOWN},
	{12,				DIR_LEFT},
	{12,				DIR_UP},
	{6,				DIR_RIGHT}
};

int main(void)
{
	unsigned int i;

	init_input();

	init_player(&player, 0, 0);

	for (i = 0; i < MAX_FLYERS; i++)
	{
		init_flyer(&flyer[i], 40, (signed int) i * 40, 0x40, 1, 5, path, 2, 2, fly);
	}

	while(1)
	{
		move_player(&player);

		for (i = 0; i < MAX_FLYERS; i++)
		{
			move_flyer(&flyer[i]);
		}

		Wait_Recal();

		Intensity_1F();
		draw_synced_list_c(web, 0, 0, 0x80, 0x80);

		Intensity_5F();
		draw_player(&player);

		for (i = 0; i < MAX_FLYERS; i++)
		{
			draw_flyer(&flyer[i]);
		}
	};
	
	// if return value is <= 0, then a warm reset will be performed,
	// otherwise a cold reset will be performed
	return 0;
}

// ***************************************************************************
// end of file
// ***************************************************************************
