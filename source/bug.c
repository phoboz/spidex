// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char bug_left_1[]=
{	(signed char) +1, -11, -9, // sync and move to y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) +0, -2, -8, // mode, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) +0, +4, +13, // mode, y, x
	(signed char) -1, +0, -12, // draw, y, x
	(signed char) +0, +4, -1, // mode, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) +0, -2, +8, // mode, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +1, +4, +12, // sync and move to y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +8, +0, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +1, -4, -8, // sync and move to y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +1, +4, -6, // sync and move to y, x
	(signed char) +0, -1, +2, // mode, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_left_1[]=
{	(signed char) +1, -12, +1, // sync and move to y, x
	(signed char) +0, -2, +0, // additional sync move to y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -1, +6, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +0, -7, -4, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) +0, +12, +6, // mode, y, x
	(signed char) -1, -8, -8, // draw, y, x
	(signed char) +0, +2, -4, // mode, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +0, +4, +7, // mode, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -6, +1, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +1, +11, +6, // sync and move to y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +6, -6, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) +1, -8, -3, // sync and move to y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +1, -1, -7, // sync and move to y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_1[]=
{	(signed char) +1, -9, +11, // sync and move to y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, -7, +2, // mode, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) +0, +12, -4, // mode, y, x
	(signed char) -1, -11, +0, // draw, y, x
	(signed char) +0, -1, -4, // mode, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +0, +7, +2, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +1, +12, -4, // sync and move to y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +1, -8, +4, // sync and move to y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +1, -6, -4, // sync and move to y, x
	(signed char) +0, +2, +1, // mode, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_right_1[]=
{	(signed char) +1, +1, +12, // sync and move to y, x
	(signed char) +0, +0, +2, // additional sync move to y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +6, +1, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +0, -4, +7, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) +0, +6, -12, // mode, y, x
	(signed char) -1, -8, +8, // draw, y, x
	(signed char) +0, -4, -2, // mode, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +0, +7, -4, // mode, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, +1, +6, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +1, +6, -11, // sync and move to y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -6, -6, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) +1, -3, +8, // sync and move to y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +1, -7, +1, // sync and move to y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_right_1[]=
{	(signed char) +1, +11, +9, // sync and move to y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) +0, +2, +7, // mode, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) +0, -4, -12, // mode, y, x
	(signed char) -1, +0, +11, // draw, y, x
	(signed char) +0, -4, +1, // mode, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +0, +2, -7, // mode, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +1, -4, -12, // sync and move to y, x
	(signed char) -1, +8, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +1, +4, +8, // sync and move to y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +1, -4, +6, // sync and move to y, x
	(signed char) +0, +1, -2, // mode, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_right_1[]=
{	(signed char) +1, +12, -1, // sync and move to y, x
	(signed char) +0, +2, +0, // additional sync move to y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +1, -6, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +0, +7, +4, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) +0, -12, -6, // mode, y, x
	(signed char) -1, +8, +8, // draw, y, x
	(signed char) +0, -2, +4, // mode, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +0, -4, -7, // mode, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +6, -1, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +1, -11, -6, // sync and move to y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -6, +6, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) +1, +8, +3, // sync and move to y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +1, +1, +7, // sync and move to y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_1[]=
{	(signed char) +1, +9, -11, // sync and move to y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +7, -2, // mode, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) +0, -12, +4, // mode, y, x
	(signed char) -1, +11, +0, // draw, y, x
	(signed char) +0, +1, +4, // mode, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +0, -7, -2, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +1, -12, +4, // sync and move to y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +1, +8, -4, // sync and move to y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +1, +6, +4, // sync and move to y, x
	(signed char) +0, -2, -1, // mode, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_left_1[]=
{	(signed char) +1, -1, -12, // sync and move to y, x
	(signed char) +0, +0, -2, // additional sync move to y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -6, -1, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +0, +4, -7, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) +0, -6, +12, // mode, y, x
	(signed char) -1, +8, -8, // draw, y, x
	(signed char) +0, +4, +2, // mode, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +0, -7, +4, // mode, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, -1, -6, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +1, -6, +11, // sync and move to y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +6, +6, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +1, +3, -8, // sync and move to y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +1, +7, -1, // sync and move to y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_left_2[]=
{	(signed char) +1, -12, +2, // sync and move to y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, -4, +5, // mode, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) +0, +4, +13, // mode, y, x
	(signed char) -1, +0, -12, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, +4, -1, // mode, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) +0, -4, -5, // mode, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +0, +1, -2, // mode, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +1, +3, -9, // sync and move to y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) +1, +3, -4, // sync and move to y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +8, +0, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +1, +3, -4, // sync and move to y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char bug_down_left_2[]=
{	(signed char) +1, -7, +10, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +0, +0, +6, // mode, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, +12, +6, // mode, y, x
	(signed char) -1, -8, -8, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, +2, -4, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) +0, -6, +0, // mode, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) +1, -4, -8, // sync and move to y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +1, -1, -5, // sync and move to y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, -6, +6, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +1, -1, -5, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_2[]=
{	(signed char) +1, +2, +12, // sync and move to y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +0, +5, +4, // mode, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +0, +12, -4, // mode, y, x
	(signed char) -1, -11, +0, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, -1, -4, // mode, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +0, -5, +4, // mode, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +0, -2, -1, // mode, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +1, -8, -3, // sync and move to y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +1, -4, -3, // sync and move to y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +1, -4, -3, // sync and move to y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_right_2[]=
{	(signed char) +1, +10, +7, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +0, +6, +0, // mode, y, x
	(signed char) -1, +0, -5, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) +0, +6, -12, // mode, y, x
	(signed char) -1, -8, +8, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, -4, -2, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) +0, +0, +6, // mode, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +1, -8, +4, // sync and move to y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +1, -5, +1, // sync and move to y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +6, +6, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +1, -5, +1, // sync and move to y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_right_2[]=
{	(signed char) +1, +12, -2, // sync and move to y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) +0, +4, -5, // mode, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, -4, -12, // mode, y, x
	(signed char) -1, +0, +11, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, -4, +1, // mode, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +0, +4, +5, // mode, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +0, -1, +2, // mode, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +1, -3, +8, // sync and move to y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +1, -3, +4, // sync and move to y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) -1, +8, +0, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +1, -3, +4, // sync and move to y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_right_2[]=
{	(signed char) +1, +7, -10, // sync and move to y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) +0, +0, -6, // mode, y, x
	(signed char) -1, -5, +0, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, -12, -6, // mode, y, x
	(signed char) -1, +8, +8, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, -2, +4, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) +0, +6, +0, // mode, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +1, +4, +8, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +1, +1, +5, // sync and move to y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, +6, -6, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +1, +1, +5, // sync and move to y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_2[]=
{	(signed char) +1, -2, -12, // sync and move to y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +0, -5, -4, // mode, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, -12, +4, // mode, y, x
	(signed char) -1, +11, +0, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, +1, +4, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +0, +5, -4, // mode, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +0, +2, +1, // mode, y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +1, +8, +3, // sync and move to y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +1, +4, +3, // sync and move to y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +1, +4, +3, // sync and move to y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_left_2[]=
{	(signed char) +1, -10, -7, // sync and move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +0, -6, +0, // mode, y, x
	(signed char) -1, +0, +5, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -6, +12, // mode, y, x
	(signed char) -1, +8, -8, // draw, y, x
	(signed char) +1, +0, +0, // sync and move to y, x
	(signed char) +0, +4, +2, // mode, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +5, +0, // draw, y, x
	(signed char) +0, +0, -6, // mode, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +1, +8, -4, // sync and move to y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, -2, +0, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) -1, +0, +2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +1, +5, -1, // sync and move to y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, -6, -6, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +1, +5, -1, // sync and move to y, x
	(signed char) -1, +2, +0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char *bug[]=
{
	bug_down_1,
	bug_down_2,
	bug_down_right_1,
	bug_down_right_2,
	bug_right_1,
	bug_right_2,
	bug_up_right_1,
	bug_up_right_2,
	bug_up_1,
	bug_up_2,
	bug_up_left_1,
	bug_up_left_2,
	bug_left_1,
	bug_left_2,
	bug_down_left_1,
	bug_down_left_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
