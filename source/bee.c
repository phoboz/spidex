// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char bee_left_1[]=
{	(signed char) +1, -2, +7, // sync and move to y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, -4, -4, // mode, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) +1, +2, +2, // sync and move to y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, -8, -1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -8, +1, // draw, y, x
	(signed char) +1, -9, +1, // sync and move to y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +1, +4, -1, // sync and move to y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +0, -10, -6, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_left_1[]=
{	(signed char) +1, +4, +6, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, -5, +0, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) +1, +3, +0, // sync and move to y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -6, +5, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, -5, +6, // draw, y, x
	(signed char) +1, -6, +7, // sync and move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) +1, +2, -4, // sync and move to y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, -11, +3, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, -4, -1, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_1[]=
{	(signed char) +1, +7, +2, // sync and move to y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, -4, +4, // mode, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) +1, +2, -2, // sync and move to y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, +8, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, +8, // draw, y, x
	(signed char) +1, +1, +9, // sync and move to y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +1, -1, -4, // sync and move to y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +0, -6, +10, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_right_1[]=
{	(signed char) +1, +6, -4, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +0, +0, +5, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) +1, +0, -3, // sync and move to y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, +5, +6, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +6, +5, // draw, y, x
	(signed char) +1, +7, +6, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) +1, -4, -2, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, +3, +11, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +0, -1, +4, // mode, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_right_1[]=
{	(signed char) +1, -2, -7, // sync and move to y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, -4, +4, // mode, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) +1, +2, -2, // sync and move to y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -8, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -8, -1, // draw, y, x
	(signed char) +1, -9, -1, // sync and move to y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +1, +4, +1, // sync and move to y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +0, -10, +6, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +0, -2, +3, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_right_1[]=
{	(signed char) +1, -6, -4, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +0, +3, +2, // mode, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, +0, +5, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) +1, +0, -3, // sync and move to y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -5, +6, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -6, +5, // draw, y, x
	(signed char) +1, -7, +6, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +1, +4, -2, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, -3, +11, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, +1, +4, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_1[]=
{	(signed char) +1, -7, -2, // sync and move to y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, +4, -4, // mode, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) +1, -2, +2, // sync and move to y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, -8, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -1, -8, // draw, y, x
	(signed char) +1, -1, -9, // sync and move to y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +1, +1, +4, // sync and move to y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +0, +6, -10, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +3, -2, // mode, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_left_1[]=
{	(signed char) +1, -6, +4, // sync and move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +0, +8, -2, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +1, -7, +1, // sync and move to y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +6, +5, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +5, +6, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +1, +4, +8, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +0, +5, -3, // mode, y, x
	(signed char) +1, +1, -7, // sync and move to y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +1, -4, // mode, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_left_2[]=
{	(signed char) +1, -2, +7, // sync and move to y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, -3, -3, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, -2, +3, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +1, -1, +0, // sync and move to y, x
	(signed char) +0, -5, +0, // mode, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, -7, +6, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +2, -9, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) +1, -1, -5, // sync and move to y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +2, +9, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -7, -6, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_left_2[]=
{	(signed char) +1, +4, +6, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +0, -4, +0, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, -4, -1, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, +1, +4, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) +1, -1, +1, // sync and move to y, x
	(signed char) +0, -3, +3, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +0, +9, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, -5, -7, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +1, -4, -3, // sync and move to y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +7, +5, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -9, +0, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_2[]=
{	(signed char) +1, +7, +2, // sync and move to y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, -3, +3, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +0, +3, +2, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +1, +0, +1, // sync and move to y, x
	(signed char) +0, +0, +5, // mode, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +6, +7, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -9, -2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) +1, -5, +1, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +9, -2, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -6, +7, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char bee_down_right_2[]=
{	(signed char) +1, +6, -4, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, +0, +4, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +0, -1, +4, // mode, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, +4, -1, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) +1, +1, +1, // sync and move to y, x
	(signed char) +0, +3, +3, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +9, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -7, +5, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +1, -3, +4, // sync and move to y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +5, -7, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +0, +9, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_right_2[]=
{	(signed char) +1, -2, -7, // sync and move to y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, -3, +3, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +0, -2, +3, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) +1, -1, +0, // sync and move to y, x
	(signed char) +0, -5, +0, // mode, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, -7, -6, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +2, +9, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +1, -1, +5, // sync and move to y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +2, -9, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -7, +6, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_right_2[]=
{	(signed char) +1, -6, -4, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +0, +3, +2, // mode, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +0, +0, +4, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, +1, +4, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -4, -1, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) +1, -1, +1, // sync and move to y, x
	(signed char) +0, -3, +3, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -9, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +7, +5, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +1, +3, +4, // sync and move to y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -5, -7, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +0, +9, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_2[]=
{	(signed char) +1, -7, -2, // sync and move to y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +3, -3, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +3, -2, // mode, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +0, -3, -2, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +1, +0, -1, // sync and move to y, x
	(signed char) +0, +0, -5, // mode, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -6, -7, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, +9, +2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +1, +5, -1, // sync and move to y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -9, +2, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +6, -7, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_left_2[]=
{	(signed char) +1, +4, +4, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +0, +9, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, +5, -7, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -7, +5, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +9, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +1, -4, -4, // sync and move to y, x
	(signed char) +0, +3, +3, // mode, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +4, -1, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, -1, +4, // mode, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) +1, +1, +1, // sync and move to y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, +0, +4, // mode, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char *bee[]=
{
	bee_down_1,
	bee_down_2,
	bee_down_right_1,
	bee_down_right_2,
	bee_right_1,
	bee_right_2,
	bee_up_right_1,
	bee_up_right_2,
	bee_up_1,
	bee_up_2,
	bee_up_left_1,
	bee_up_left_2,
	bee_left_1,
	bee_left_2,
	bee_down_left_1,
	bee_down_left_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
