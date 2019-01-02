// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char spider_down_1[]=
{	(signed char) +1, +6, +12, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, -7, -9, // draw, y, x
	(signed char) -1, -6, -2, // draw, y, x
	(signed char) +0, +2, +1, // mode, y, x
	(signed char) -1, +1, +7, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) +0, -12, -2, // mode, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +4, -6, // draw, y, x
	(signed char) -1, +0, -8, // draw, y, x
	(signed char) -1, -4, -6, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) +0, +12, -2, // mode, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) -1, -1, +7, // draw, y, x
	(signed char) +1, -5, -3, // sync and move to y, x
	(signed char) +0, -2, +1, // mode, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +7, -9, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_right_1[]=
{	(signed char) +1, +11, +5, // sync and move to y, x
	(signed char) +0, +2, +0, // additional sync move to y, x
	(signed char) -1, -11, -1, // draw, y, x
	(signed char) -1, -6, +2, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, -10, +7, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -1, -7, // draw, y, x
	(signed char) -1, -6, -6, // draw, y, x
	(signed char) -1, -7, -1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +0, +7, -10, // mode, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) +1, -6, +1, // sync and move to y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +2, -6, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -11, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_right_1[]=
{	(signed char) +1, +12, -6, // sync and move to y, x
	(signed char) +0, +1, +0, // additional sync move to y, x
	(signed char) -1, -9, +7, // draw, y, x
	(signed char) -1, -3, +6, // draw, y, x
	(signed char) +0, +3, -2, // mode, y, x
	(signed char) -1, +6, -1, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) +0, -2, +12, // mode, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -6, -4, // draw, y, x
	(signed char) -1, -8, +0, // draw, y, x
	(signed char) -1, -6, +4, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) +0, -2, -12, // mode, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) -1, +6, +1, // draw, y, x
	(signed char) +1, -4, +5, // sync and move to y, x
	(signed char) +0, +3, +2, // mode, y, x
	(signed char) -1, -3, -6, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -9, -7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_right_1[]=
{	(signed char) +1, +5, -11, // sync and move to y, x
	(signed char) +0, +0, -2, // additional sync move to y, x
	(signed char) -1, -1, +11, // draw, y, x
	(signed char) -1, +2, +6, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) +0, +7, +10, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -7, +1, // draw, y, x
	(signed char) -1, -6, +6, // draw, y, x
	(signed char) -1, -1, +7, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +0, -10, -7, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) +1, +1, +6, // sync and move to y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, -6, -2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -11, +1, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char spider_up_1[]=
{	(signed char) +1, -6, -12, // sync and move to y, x
	(signed char) +0, +0, -1, // additional sync move to y, x
	(signed char) -1, +7, +9, // draw, y, x
	(signed char) -1, +6, +3, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, -1, -6, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) +0, +12, +2, // mode, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -4, +6, // draw, y, x
	(signed char) -1, +0, +8, // draw, y, x
	(signed char) -1, +4, +6, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +0, -12, +2, // mode, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) -1, +1, -6, // draw, y, x
	(signed char) +1, +5, +4, // sync and move to y, x
	(signed char) +0, +2, -3, // mode, y, x
	(signed char) -1, -6, +3, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -7, +9, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_left_1[]=
{	(signed char) +1, -11, -5, // sync and move to y, x
	(signed char) +0, -2, +0, // additional sync move to y, x
	(signed char) -1, +11, +1, // draw, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +10, -7, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, +1, +7, // draw, y, x
	(signed char) -1, +6, +6, // draw, y, x
	(signed char) -1, +7, +1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +0, -7, +10, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) +1, +6, -1, // sync and move to y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -2, +6, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +11, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_left_1[]=
{	(signed char) +1, -12, +6, // sync and move to y, x
	(signed char) +0, -1, +0, // additional sync move to y, x
	(signed char) -1, +9, -7, // draw, y, x
	(signed char) -1, +3, -6, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, -6, +1, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) +0, +2, -12, // mode, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +6, +4, // draw, y, x
	(signed char) -1, +8, +0, // draw, y, x
	(signed char) -1, +6, -4, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) +0, +2, +12, // mode, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, -6, -1, // draw, y, x
	(signed char) +1, +4, -5, // sync and move to y, x
	(signed char) +0, -3, -2, // mode, y, x
	(signed char) -1, +3, +6, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +9, +7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_left_1[]=
{	(signed char) +1, -5, +11, // sync and move to y, x
	(signed char) +0, +0, +2, // additional sync move to y, x
	(signed char) -1, +1, -11, // draw, y, x
	(signed char) -1, -2, -6, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -7, -10, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +7, -1, // draw, y, x
	(signed char) -1, +6, -6, // draw, y, x
	(signed char) -1, +1, -7, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +0, +10, +7, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) +1, -1, -6, // sync and move to y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +6, +2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +11, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_2[]=
{	(signed char) +1, -10, +10, // sync and move to y, x
	(signed char) +0, -4, +0, // additional sync move to y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, +9, -3, // mode, y, x
	(signed char) -1, +0, +10, // draw, y, x
	(signed char) +0, -2, +1, // mode, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) +1, +10, +3, // sync and move to y, x
	(signed char) +0, +4, +0, // additional sync move to y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -6, -2, // draw, y, x
	(signed char) +0, +2, +1, // mode, y, x
	(signed char) -1, +0, +10, // draw, y, x
	(signed char) +0, +6, +0, // mode, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) +0, +0, -2, // mode, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_right_2[]=
{	(signed char) +1, -3, +9, // sync and move to y, x
	(signed char) +0, +0, +8, // additional sync move to y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, +4, -9, // mode, y, x
	(signed char) -1, +7, +7, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +2, -6, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) +1, +9, -8, // sync and move to y, x
	(signed char) +0, +3, +0, // additional sync move to y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, -6, +2, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +7, +7, // draw, y, x
	(signed char) +0, +4, -5, // mode, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_right_2[]=
{	(signed char) +1, +9, +9, // sync and move to y, x
	(signed char) +0, +1, +5, // additional sync move to y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, -3, -9, // mode, y, x
	(signed char) -1, +9, +0, // draw, y, x
	(signed char) +0, +3, +2, // mode, y, x
	(signed char) -1, -3, -6, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) +1, +3, -9, // sync and move to y, x
	(signed char) +0, +0, -5, // additional sync move to y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, -3, +6, // draw, y, x
	(signed char) +0, +3, -2, // mode, y, x
	(signed char) -1, +9, +0, // draw, y, x
	(signed char) +0, +0, -6, // mode, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) +0, -2, +0, // mode, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_right_2[]=
{	(signed char) +1, +9, +3, // sync and move to y, x
	(signed char) +0, +8, +0, // additional sync move to y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -9, -4, // mode, y, x
	(signed char) -1, +7, -7, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, -6, -2, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) +1, -8, -9, // sync and move to y, x
	(signed char) +0, +0, -3, // additional sync move to y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +2, +6, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, +7, -7, // draw, y, x
	(signed char) +0, -5, -4, // mode, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_2[]=
{	(signed char) +1, +9, -9, // sync and move to y, x
	(signed char) +0, +5, -1, // additional sync move to y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) +0, -9, +3, // mode, y, x
	(signed char) -1, +0, -9, // draw, y, x
	(signed char) +0, +2, -3, // mode, y, x
	(signed char) -1, -6, +3, // draw, y, x
	(signed char) +0, -1, +0, // mode, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) +1, -9, -3, // sync and move to y, x
	(signed char) +0, -5, +0, // additional sync move to y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +0, +1, +0, // mode, y, x
	(signed char) -1, +6, +3, // draw, y, x
	(signed char) +0, -2, -3, // mode, y, x
	(signed char) -1, +0, -9, // draw, y, x
	(signed char) +0, -6, +0, // mode, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) +0, +0, +2, // mode, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_left_2[]=
{	(signed char) +1, +3, -9, // sync and move to y, x
	(signed char) +0, +0, -8, // additional sync move to y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, -4, +9, // mode, y, x
	(signed char) -1, -7, -7, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -2, +6, // draw, y, x
	(signed char) +0, -1, +1, // mode, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) +1, -9, +8, // sync and move to y, x
	(signed char) +0, -3, +0, // additional sync move to y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) +0, +1, -1, // mode, y, x
	(signed char) -1, +6, -2, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, -7, -7, // draw, y, x
	(signed char) +0, -4, +5, // mode, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_left_2[]=
{	(signed char) +1, -9, -9, // sync and move to y, x
	(signed char) +0, -1, -5, // additional sync move to y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +0, +3, +9, // mode, y, x
	(signed char) -1, -9, +0, // draw, y, x
	(signed char) +0, -3, -2, // mode, y, x
	(signed char) -1, +3, +6, // draw, y, x
	(signed char) +0, +0, +1, // mode, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) +1, -3, +9, // sync and move to y, x
	(signed char) +0, +0, +5, // additional sync move to y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +0, +0, -1, // mode, y, x
	(signed char) -1, +3, -6, // draw, y, x
	(signed char) +0, -3, +2, // mode, y, x
	(signed char) -1, -9, +0, // draw, y, x
	(signed char) +0, +0, +6, // mode, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +0, +2, +0, // mode, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_left_2[]=
{	(signed char) +1, -9, -3, // sync and move to y, x
	(signed char) +0, -8, +0, // additional sync move to y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) +0, +9, +4, // mode, y, x
	(signed char) -1, -7, +7, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +6, +2, // draw, y, x
	(signed char) +0, +1, +1, // mode, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) +1, +8, +9, // sync and move to y, x
	(signed char) +0, +0, +3, // additional sync move to y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) +0, -1, -1, // mode, y, x
	(signed char) -1, -2, -6, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, -7, +7, // draw, y, x
	(signed char) +0, +5, +4, // mode, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char * const spider[]=
{
	spider_down_1,
	spider_down_2,
	spider_down_right_1,
	spider_down_right_2,
	spider_right_1,
	spider_right_2,
	spider_up_right_1,
	spider_up_right_2,
	spider_up_1,
	spider_up_2,
	spider_up_left_1,
	spider_up_left_2,
	spider_left_1,
	spider_left_2,
	spider_down_left_1,
	spider_down_left_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
