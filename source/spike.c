// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define BLOW_UP 10

const signed char spike_0[]=
{	(signed char) +1, +4*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_1[]=
{	(signed char) +1, +2*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_2[]=
{	(signed char) +1, -1*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) -1, +2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_3[]=
{	(signed char) +1, -4*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_4[]=
{	(signed char) +1, -4*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_5[]=
{	(signed char) +1, -2*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_6[]=
{	(signed char) +1, +1*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) -1, -2*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spike_7[]=
{	(signed char) +1, +4*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const spike[]=
{	 spike_0, // list of all single vectorlists in this
	 spike_1,
	 spike_2,
	 spike_3,
	 spike_4,
	 spike_5,
	 spike_6,
	 spike_7,
};

// ***************************************************************************
// end of file
// ***************************************************************************
