// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "text.h"

// ---------------------------------------------------------------------------

static char text_buffer[4];

static void itoa(
	unsigned long number,
	char* text
	)
{
	unsigned int i, d;
	unsigned long muls[] = { 100, 10, 1 };

	if (number > 999)
	{
		number = 999;
	}

	for (i = 0; i < 3; i++)
	{
		d = 0;
		while (number >= muls[i])
		{
			d++;
			number -= muls[i];
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
	Print_Str_d(y, x, text_buffer);
}

// ***************************************************************************
// end of file
// ***************************************************************************
