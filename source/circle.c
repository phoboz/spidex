// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define AMPLIFIER_MUL 10

const signed char cicle[]=
{	(signed char) +1, +AMPLIFIER_MUL*10, -AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*10, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*10, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};


// ***************************************************************************
// end of file
// ***************************************************************************
