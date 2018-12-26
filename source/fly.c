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

const signed char fly_up_left_1[]=
{	(signed char) +1, +7, -3, // sync and move to y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) +0, -2, +1, // mode, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +1, +2, +2, // sync and move to y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +1, -7, // draw, y, x
	(signed char) -1, -7, +1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +0, +1, -2, // mode, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_left_1[]=
{	(signed char) +1, +3, -6, // sync and move to y, x
	(signed char) +0, +0, -1, // additional sync move to y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +1, +3, +0, // sync and move to y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -4, -6, // draw, y, x
	(signed char) -1, -4, +6, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_left_1[]=
{	(signed char) +1, -3, -7, // sync and move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +0, +1, +2, // mode, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +1, +2, -2, // sync and move to y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -7, -1, // draw, y, x
	(signed char) -1, +1, +7, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +0, -2, -1, // mode, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_1[]=
{	(signed char) +1, -6, -3, // sync and move to y, x
	(signed char) +0, -1, +0, // additional sync move to y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +1, +0, -3, // sync and move to y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -6, +4, // draw, y, x
	(signed char) -1, +6, +4, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_right_1[]=
{	(signed char) +1, -7, +3, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) +0, +2, -1, // mode, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) +1, -2, -2, // sync and move to y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, -1, +7, // draw, y, x
	(signed char) -1, +7, -1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +0, -1, +2, // mode, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_right_1[]=
{	(signed char) +1, -3, +6, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +1, -3, +0, // sync and move to y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +4, +6, // draw, y, x
	(signed char) -1, +4, -6, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_right_1[]=
{	(signed char) +1, +3, +7, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) +0, -1, -2, // mode, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +1, -2, +2, // sync and move to y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +7, +1, // draw, y, x
	(signed char) -1, -1, -7, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) +0, +2, +1, // mode, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
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

const signed char fly_up_left_2[]=
{	(signed char) +1, +5, -3, // sync and move to y, x
	(signed char) +0, +2, +0, // additional sync move to y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) +0, -2, +1, // mode, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +1, +2, +2, // sync and move to y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, +3, -5, // draw, y, x
	(signed char) -1, -5, +3, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +0, +1, -2, // mode, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_left_2[]=
{	(signed char) +1, +3, -6, // sync and move to y, x
	(signed char) +0, +0, -1, // additional sync move to y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +1, +3, +0, // sync and move to y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, -1, -6, // draw, y, x
	(signed char) -1, -1, +6, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_left_2[]=
{	(signed char) +1, -3, -5, // sync and move to y, x
	(signed char) +0, +0, -2, // additional sync move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +0, +1, +2, // mode, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +1, +2, -2, // sync and move to y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) -1, -5, -3, // draw, y, x
	(signed char) -1, +3, +5, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +0, -2, -1, // mode, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char fly_down_2[]=
{	(signed char) +1, -6, -3, // sync and move to y, x
	(signed char) +0, -1, +0, // additional sync move to y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +1, +0, -3, // sync and move to y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, -6, +1, // draw, y, x
	(signed char) -1, +6, +1, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_down_right_2[]=
{	(signed char) +1, -5, +3, // sync and move to y, x
	(signed char) +0, -2, +0, // additional sync move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) +0, +2, -1, // mode, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) +1, -2, -2, // sync and move to y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) -1, -3, +5, // draw, y, x
	(signed char) -1, +5, -3, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +0, -1, +2, // mode, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_right_2[]=
{	(signed char) +1, -3, +6, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +1, -3, +0, // sync and move to y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, +1, +6, // draw, y, x
	(signed char) -1, +1, -6, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char fly_up_right_2[]=
{	(signed char) +1, +3, +5, // sync and move to y, x
	(signed char) +0, +0, +2, // additional sync move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) +0, -1, -2, // mode, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +1, -2, +2, // sync and move to y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) -1, +5, +3, // draw, y, x
	(signed char) -1, -3, -5, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) +0, +2, +1, // mode, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char *fly[]=
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
