// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char bee_left_1[]=
{	(signed char) +1, +2, -9, // sync and move to y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, +1, +9, // mode, y, x
	(signed char) -1, -8, +1, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +3, -6, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, +5, +6, // draw, y, x
	(signed char) +1, +6, +6, // sync and move to y, x
	(signed char) -1, +3, -5, // draw, y, x
	(signed char) -1, -8, -1, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_left_1[]=
{	(signed char) +1, -5, -7, // sync and move to y, x
	(signed char) +0, +0, -1, // additional sync move to y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, +7, +6, // mode, y, x
	(signed char) -1, -5, +6, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, -2, -6, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +7, +1, // draw, y, x
	(signed char) +1, +7, +0, // sync and move to y, x
	(signed char) +0, +1, +0, // additional sync move to y, x
	(signed char) -1, -1, -6, // draw, y, x
	(signed char) -1, -6, +5, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, +3, +2, // mode, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_1[]=
{	(signed char) +1, -9, -2, // sync and move to y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +0, +9, -1, // mode, y, x
	(signed char) -1, +1, +8, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, -6, -3, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +6, -5, // draw, y, x
	(signed char) +1, +6, -6, // sync and move to y, x
	(signed char) -1, -5, -3, // draw, y, x
	(signed char) -1, -1, +8, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, +3, -1, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_right_1[]=
{	(signed char) +1, -7, +5, // sync and move to y, x
	(signed char) +0, -1, +0, // additional sync move to y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, +6, -7, // mode, y, x
	(signed char) -1, +6, +5, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, -6, +2, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +1, -7, // draw, y, x
	(signed char) +1, +0, -7, // sync and move to y, x
	(signed char) +0, +0, -1, // additional sync move to y, x
	(signed char) -1, -6, +1, // draw, y, x
	(signed char) -1, +5, +6, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +0, +2, -3, // mode, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_right_1[]=
{	(signed char) +1, -2, +9, // sync and move to y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) +0, -1, -9, // mode, y, x
	(signed char) -1, +8, -1, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, -3, +6, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -5, -6, // draw, y, x
	(signed char) +1, -6, -6, // sync and move to y, x
	(signed char) -1, -3, +5, // draw, y, x
	(signed char) -1, +8, +1, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, -1, -3, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_right_1[]=
{	(signed char) +1, +5, +7, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) +0, -7, -6, // mode, y, x
	(signed char) -1, +5, -6, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, +2, +6, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -7, -1, // draw, y, x
	(signed char) +1, -7, +0, // sync and move to y, x
	(signed char) +0, -1, +0, // additional sync move to y, x
	(signed char) -1, +1, +6, // draw, y, x
	(signed char) -1, +6, -5, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) +0, -3, -2, // mode, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_1[]=
{	(signed char) +1, +9, +2, // sync and move to y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +0, -9, +1, // mode, y, x
	(signed char) -1, -1, -8, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, +6, +3, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -6, +5, // draw, y, x
	(signed char) +1, -6, +6, // sync and move to y, x
	(signed char) -1, +5, +3, // draw, y, x
	(signed char) -1, +1, -8, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, -3, +1, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_left_1[]=
{	(signed char) +1, +7, -5, // sync and move to y, x
	(signed char) +0, +1, +0, // additional sync move to y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +0, -6, +7, // mode, y, x
	(signed char) -1, -6, -5, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -1, +7, // draw, y, x
	(signed char) +1, +0, +7, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, +6, -1, // draw, y, x
	(signed char) -1, -5, -6, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +0, -2, +3, // mode, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_left_2[]=
{	(signed char) +1, +2, -9, // sync and move to y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, +1, +9, // mode, y, x
	(signed char) -1, -7, +6, // draw, y, x
	(signed char) -1, +5, +3, // draw, y, x
	(signed char) -1, +2, -9, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, +2, +9, // draw, y, x
	(signed char) +1, +3, +9, // sync and move to y, x
	(signed char) -1, +5, -3, // draw, y, x
	(signed char) -1, -7, -6, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +0, +3, +3, // mode, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_left_2[]=
{	(signed char) +1, -5, -8, // sync and move to y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, +7, +6, // mode, y, x
	(signed char) -1, +0, +9, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, -5, -7, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +7, +5, // draw, y, x
	(signed char) +1, +8, +4, // sync and move to y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, -9, +0, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +0, +4, +0, // mode, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) +0, +2, +3, // mode, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_2[]=
{	(signed char) +1, -9, -2, // sync and move to y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +0, +9, -1, // mode, y, x
	(signed char) -1, +6, +7, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, -8, -2, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +8, -2, // draw, y, x
	(signed char) +1, +8, -3, // sync and move to y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -6, +7, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +0, +3, -3, // mode, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, +3, +1, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_right_2[]=
{	(signed char) +1, -8, +5, // sync and move to y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, +6, -7, // mode, y, x
	(signed char) -1, +9, +0, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -7, +5, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +5, -7, // draw, y, x
	(signed char) +1, +4, -8, // sync and move to y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, +0, +9, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +0, +0, -4, // mode, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +0, +3, -2, // mode, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_right_2[]=
{	(signed char) +1, -2, +9, // sync and move to y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) +0, -1, -9, // mode, y, x
	(signed char) -1, +7, -6, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -2, +8, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -2, -8, // draw, y, x
	(signed char) +1, -3, -8, // sync and move to y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, +7, +6, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +0, -3, -3, // mode, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, +1, -3, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_right_2[]=
{	(signed char) +1, +5, +8, // sync and move to y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) +0, -7, -6, // mode, y, x
	(signed char) -1, +0, -9, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, +5, +7, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -7, -5, // draw, y, x
	(signed char) +1, -8, -4, // sync and move to y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +9, +0, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +0, -4, +0, // mode, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_2[]=
{	(signed char) +1, +9, +2, // sync and move to y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +0, -9, +1, // mode, y, x
	(signed char) -1, -6, -7, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +8, +2, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -8, +2, // draw, y, x
	(signed char) +1, -8, +3, // sync and move to y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +6, -7, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +0, -3, +3, // mode, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, -3, -1, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_left_2[]=
{	(signed char) +1, +8, -5, // sync and move to y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +0, -6, +7, // mode, y, x
	(signed char) -1, -9, +0, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +7, -5, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -5, +7, // draw, y, x
	(signed char) +1, -4, +8, // sync and move to y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +0, -9, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +0, +0, +4, // mode, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
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
