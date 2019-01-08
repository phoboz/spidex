// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define AMPLIFIER_MUL 10 

static const signed char egg_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

static const signed char egg_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char* const egg[]=
{
	egg_1,
	egg_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
