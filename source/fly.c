// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char fly_down_1[]=
{	(signed char) +1, +7, +0, // sync and move to y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, +3, -7, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, -7, +4, // draw, y, x
	(signed char) -1, +3, +7, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, -7, -4, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_right_1[]=
{	(signed char) +1, +5, -5, // sync and move to y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -3, -7, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, -2, +8, // draw, y, x
	(signed char) -1, +7, +3, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) -1, -8, +2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_right_1[]=
{	(signed char) +1, +0, -7, // sync and move to y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -7, -3, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +4, +7, // draw, y, x
	(signed char) -1, +7, -3, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, -4, +7, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_right_1[]=
{	(signed char) +1, -5, -5, // sync and move to y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, -7, +3, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, +8, +2, // draw, y, x
	(signed char) -1, +3, -7, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) -1, +2, +8, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_1[]=
{	(signed char) +1, -7, +0, // sync and move to y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, -3, +7, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, +7, -4, // draw, y, x
	(signed char) -1, -3, -7, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, +7, +4, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_left_1[]=
{	(signed char) +1, -5, +5, // sync and move to y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +3, +7, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, +2, -8, // draw, y, x
	(signed char) -1, -7, -3, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) -1, +8, -2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_left_1[]=
{	(signed char) +1, +0, +7, // sync and move to y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +7, +3, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -4, -7, // draw, y, x
	(signed char) -1, -7, +3, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +4, -7, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_left_1[]=
{	(signed char) +1, +5, +5, // sync and move to y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +7, -3, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, -8, -2, // draw, y, x
	(signed char) -1, -3, +7, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) -1, -2, -8, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_2[]=
{	(signed char) +1, +7, +0, // sync and move to y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -3, -7, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, -3, +7, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, -2, -6, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_right_2[]=
{	(signed char) +1, +5, -5, // sync and move to y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -7, -3, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +3, +7, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, -6, -3, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_right_2[]=
{	(signed char) +1, +0, -7, // sync and move to y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -7, +3, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +7, +3, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, -6, +2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_right_2[]=
{	(signed char) +1, -5, -5, // sync and move to y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, -3, +7, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +7, -3, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -3, +6, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_2[]=
{	(signed char) +1, -7, +0, // sync and move to y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +3, +7, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +3, -7, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, +2, +6, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_left_2[]=
{	(signed char) +1, -5, +5, // sync and move to y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +7, +3, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -3, -7, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, +6, +3, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_left_2[]=
{	(signed char) +1, +0, +7, // sync and move to y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +7, -3, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -7, -3, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_left_2[]=
{	(signed char) +1, +5, +5, // sync and move to y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +3, -7, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -7, +3, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +3, -6, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
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
