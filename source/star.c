// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10

const signed char star[]=
{	(signed char) +1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

// ***************************************************************************
// end of file
// ***************************************************************************
