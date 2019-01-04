// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10

const signed char spiral_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*9, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*6, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_3[]=
{	(signed char) +1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_4[]=
{	(signed char) +1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*6, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_5[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_6[]=
{	(signed char) +1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*6, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_7[]=
{	(signed char) +1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spiral_8[]=
{	(signed char) +1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*6, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*10, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
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
