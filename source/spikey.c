// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define BLOW_UP 10

const signed char spikey_1_0[]=
{	(signed char) +1, +8*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_1[]=
{	(signed char) +1, -1*BLOW_UP, -9*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_2[]=
{	(signed char) +1, -8*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_3[]=
{	(signed char) +1, -9*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_4[]=
{	(signed char) +1, -8*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_5[]=
{	(signed char) +1, +1*BLOW_UP, +9*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_6[]=
{	(signed char) +1, +8*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_1_7[]=
{	(signed char) +1, +9*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_0[]=
{	(signed char) +1, +7*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_1[]=
{	(signed char) +1, -2*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -4*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_2[]=
{	(signed char) +1, -8*BLOW_UP, -7*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +8*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_3[]=
{	(signed char) +1, -8*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) +0, -4*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +6*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_4[]=
{	(signed char) +1, -7*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_5[]=
{	(signed char) +1, +2*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +4*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_6[]=
{	(signed char) +1, +8*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -8*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char spikey_2_7[]=
{	(signed char) +1, +8*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) +0, +4*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -6*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const spikey[]=
{	 spikey_1_0, // list of all single vectorlists in this
	 spikey_2_0,
	 spikey_1_1,
	 spikey_2_1,
	 spikey_1_2,
	 spikey_2_2,
	 spikey_1_3,
	 spikey_2_3,
	 spikey_1_4,
	 spikey_2_4,
	 spikey_1_5,
	 spikey_2_5,
	 spikey_1_6,
	 spikey_2_6,
	 spikey_1_7,
	 spikey_2_7
};


// ***************************************************************************
// end of file
// ***************************************************************************
