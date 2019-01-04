// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10 

const signed char fly_down_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_right_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_left_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_right_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_left_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_left_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_left_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char* const fly[]=
{
	fly_down_1,
	fly_down_2,
	fly_down_right_1,
	fly_down_right_2,
	fly_right_1,
	fly_right_2,
	fly_up_right_1,
	fly_up_right_2,
	fly_up_1,
	fly_up_2,
	fly_up_left_1,
	fly_up_left_2,
	fly_left_1,
	fly_left_2,
	fly_down_left_1,
	fly_down_left_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
