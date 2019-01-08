// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define BLOW_UP 5

const signed char mosquito_1_0[]=
{	(signed char) +1, +6*BLOW_UP, +6*BLOW_UP, // sync and move to y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_1[]=
{	(signed char) +1, +8*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_2[]=
{	(signed char) +1, +6*BLOW_UP, -6*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_3[]=
{	(signed char) +1, +0*BLOW_UP, -8*BLOW_UP, // sync and move to y, x
	(signed char) -1, +4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_4[]=
{	(signed char) +1, -6*BLOW_UP, -6*BLOW_UP, // sync and move to y, x
	(signed char) -1, +6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_5[]=
{	(signed char) +1, -8*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) -1, +4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_6[]=
{	(signed char) +1, -6*BLOW_UP, +6*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_1_7[]=
{	(signed char) +1, +0*BLOW_UP, +8*BLOW_UP, // sync and move to y, x
	(signed char) -1, -4*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_0[]=
{	(signed char) +1, -1*BLOW_UP, +6*BLOW_UP, // sync and move to y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_1[]=
{	(signed char) +1, +4*BLOW_UP, +5*BLOW_UP, // sync and move to y, x
	(signed char) -1, -4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_2[]=
{	(signed char) +1, +6*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_3[]=
{	(signed char) +1, +5*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_4[]=
{	(signed char) +1, +1*BLOW_UP, -6*BLOW_UP, // sync and move to y, x
	(signed char) -1, +5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_5[]=
{	(signed char) +1, -4*BLOW_UP, -5*BLOW_UP, // sync and move to y, x
	(signed char) -1, +4*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_6[]=
{	(signed char) +1, -6*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char mosquito_2_7[]=
{	(signed char) +1, -5*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const mosquito[]=
{	 mosquito_1_0, // list of all single vectorlists in this
	 mosquito_2_0,
	 mosquito_1_1,
	 mosquito_2_1,
	 mosquito_1_2,
	 mosquito_2_2,
	 mosquito_1_3,
	 mosquito_2_3,
	 mosquito_1_4,
	 mosquito_2_4,
	 mosquito_1_5,
	 mosquito_2_5,
	 mosquito_1_6,
	 mosquito_2_7,
	 mosquito_1_7,
	 mosquito_2_7
};

// ***************************************************************************
// end of file
// ***************************************************************************
