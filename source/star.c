// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------


const signed char star[]=
{	(signed char) +1, +2, +5, // sync and move to y, x
	(signed char) +0, +0, +2, // additional sync move to y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, +3, +5, // draw, y, x
	(signed char) -1, -3, +5, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) +2 // endmarker 
};


// ***************************************************************************
// end of file
// ***************************************************************************
