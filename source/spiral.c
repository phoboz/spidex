// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char spiral_1[]=
{	(signed char) +1, +0, -9, // sync and move to y, x
	(signed char) -1, -9, +6, // draw, y, x
	(signed char) -1, -1, +9, // draw, y, x
	(signed char) -1, +4, +6, // draw, y, x
	(signed char) -1, +7, -2, // draw, y, x
	(signed char) -1, +3, -6, // draw, y, x
	(signed char) -1, -3, -5, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_2[]=
{	(signed char) +1, -6, -6, // sync and move to y, x
	(signed char) -1, -2, +10, // draw, y, x
	(signed char) -1, +5, +7, // draw, y, x
	(signed char) -1, +7, +2, // draw, y, x
	(signed char) -1, +4, -7, // draw, y, x
	(signed char) -1, -2, -6, // draw, y, x
	(signed char) -1, -6, -1, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_3[]=
{	(signed char) +1, -8, +0, // sync and move to y, x
	(signed char) -1, +5, +8, // draw, y, x
	(signed char) -1, +9, +2, // draw, y, x
	(signed char) -1, +6, -4, // draw, y, x
	(signed char) -1, -2, -7, // draw, y, x
	(signed char) -1, -6, -3, // draw, y, x
	(signed char) -1, -5, +3, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_4[]=
{	(signed char) +1, -6, +6, // sync and move to y, x
	(signed char) -1, +10, +2, // draw, y, x
	(signed char) -1, +7, -5, // draw, y, x
	(signed char) -1, +2, -7, // draw, y, x
	(signed char) -1, -7, -4, // draw, y, x
	(signed char) -1, -6, +2, // draw, y, x
	(signed char) -1, -1, +6, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_5[]=
{	(signed char) +1, +0, +8, // sync and move to y, x
	(signed char) -1, +8, -5, // draw, y, x
	(signed char) -1, +2, -9, // draw, y, x
	(signed char) -1, -4, -6, // draw, y, x
	(signed char) -1, -7, +2, // draw, y, x
	(signed char) -1, -3, +6, // draw, y, x
	(signed char) -1, +3, +5, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_6[]=
{	(signed char) +1, +6, +6, // sync and move to y, x
	(signed char) -1, +2, -10, // draw, y, x
	(signed char) -1, -5, -7, // draw, y, x
	(signed char) -1, -7, -2, // draw, y, x
	(signed char) -1, -4, +7, // draw, y, x
	(signed char) -1, +2, +6, // draw, y, x
	(signed char) -1, +6, +1, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_7[]=
{	(signed char) +1, +8, +0, // sync and move to y, x
	(signed char) -1, -5, -8, // draw, y, x
	(signed char) -1, -9, -2, // draw, y, x
	(signed char) -1, -6, +4, // draw, y, x
	(signed char) -1, +2, +7, // draw, y, x
	(signed char) -1, +6, +3, // draw, y, x
	(signed char) -1, +5, -3, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_8[]=
{	(signed char) +1, +6, -6, // sync and move to y, x
	(signed char) -1, -10, -2, // draw, y, x
	(signed char) -1, -7, +5, // draw, y, x
	(signed char) -1, -2, +7, // draw, y, x
	(signed char) -1, +7, +4, // draw, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) -1, +1, -6, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char * const spiral[]=
{
	spiral_1,
	spiral_2,
	spiral_3,
	spiral_4,
	spiral_5,
	spiral_6,
	spiral_7,
	spiral_8
};

// ***************************************************************************
// end of file
// ***************************************************************************
