// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char fly_up_1[]=
{	(signed char) +1, +6, +3, // sync and move to y, x
	(signed char) +0, +1, +0, // additional sync move to y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +1, +0, +3, // sync and move to y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +6, -4, // draw, y, x
	(signed char) -1, -6, -4, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_2[]=
{	(signed char) +1, +6, +3, // sync and move to y, x
	(signed char) +0, +1, +0, // additional sync move to y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +1, +0, +3, // sync and move to y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) -1, -6, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char *fly[]=
{
	fly_up_1,
	fly_up_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
