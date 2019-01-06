// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define BLOW_UP 10

const signed char star_0[]=
{	(signed char) +1, -4*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) -1, +6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_1[]=
{	(signed char) +1, +2*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_2[]=
{	(signed char) +1, +7*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) -1, -4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_3[]=
{	(signed char) +1, +8*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_4[]=
{	(signed char) +1, +4*BLOW_UP, -7*BLOW_UP, // sync and move to y, x
	(signed char) -1, -6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_5[]=
{	(signed char) +1, -2*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_6[]=
{	(signed char) +1, -7*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) -1, +4*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char star_7[]=
{	(signed char) +1, -8*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const star[]=
{	 star_0, // list of all single vectorlists in this
	 star_1,
	 star_2,
	 star_3,
	 star_4,
	 star_5,
	 star_6,
	 star_7,
};

// ***************************************************************************
// end of file
// ***************************************************************************
