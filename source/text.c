// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "player.h"
#include "game.h"
#include "draw.h"
#include "text.h"

// ---------------------------------------------------------------------------

static const char wave_text[]			= "WAVE \x80";
static const char done_text[]			= "DONE\x80";
static const char lives_text[]			= "LIVES \x80";
static const char game_over_text[]		= "GAME OVER\x80";
static const char game_finnish_text[]	= "CONGRATULATIONS, WELL DONE!\x80";

static const char options_control_text[]	= "CONTROL:\x80";
static const char options_single_text[]	= "SINGLE JOYSTICK\x80";
static const char options_dual_text[]	= "DUAL JOYSTICKS\x80";

static const unsigned long text_muls[] = { 100, 10, 1 };
static char text_buffer[4];

static void itoa(
	unsigned long number,
	char* text
	)
{
	unsigned int i, d;

	if (number > 999)
	{
		number = 999;
	}

	for (i = 0; i < 3; i++)
	{
		d = 0;
		while (number >= text_muls[i])
		{
			d++;
			number -= text_muls[i];
		}

		text[i] = d + '0';
	}
	text[3] = 0x80;
}

void print_3digit_number(
	signed int y,
	signed int x,
	unsigned long number
	)
{
	itoa(number, text_buffer);
	Vec_Text_Width = TEXT_WIDTH;
	Print_Str_d(y, x, text_buffer);
}

void print_info_text(void)
{
	reset0ref();
	Vec_Text_Width = TEXT_WIDTH;

	switch (game_state)
	{
		case GAME_STATE_PAUSE:
			Print_Str_d(TEXT_INFO_Y, -112, (char *) options_control_text);
			if (game_options & GAME_OPTIONS_DUAL_JOYSTICKS)
			{
				Print_Str_d(TEXT_INFO_Y, -24, (char *) options_dual_text);
			}
			else
			{
				Print_Str_d(TEXT_INFO_Y, -24, (char *) options_single_text);
			}
			break;

		case GAME_STATE_WAVE_DONE:
			Print_Str_d(TEXT_INFO_Y, -64, (char *) wave_text);
			print_3digit_number(TEXT_INFO_Y, -20, (unsigned long) game_wave_index);
			Print_Str_d(TEXT_INFO_Y, 16, (char *) done_text);
			break;

		case GAME_STATE_DEAD:
				Print_Str_d(TEXT_INFO_Y, -46, (char *) lives_text);
				print_3digit_number(TEXT_INFO_Y, 16, (unsigned long) (unsigned long) player_1.num_lives);
			break;

		case GAME_STATE_OVER:
			Print_Str_d(TEXT_INFO_Y, -46, (char *) game_over_text);
			break;

		case GAME_STATE_FINNISH:
			Print_Str_d(TEXT_INFO_Y, -127, (char *) game_finnish_text);
			break;

		default:
			break;
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
