// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char spider_down_1[]=
{	(signed char) +1, +6, +13, // sync and move to y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) +0, -12, -2, // mode, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +4, -6, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +0, -9, +3, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) +0, +13, +7, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) +0, +8, +13, // mode, y, x
	(signed char) +1, +13, +0, // sync and move to y, x
	(signed char) +0, +1, +0, // additional sync move to y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +1, -7, +0, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +1, -7, -4, // sync and move to y, x
	(signed char) -1, -4, -6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_right_1[]=
{	(signed char) +1, +13, +5, // sync and move to y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, -10, +7, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, -1, -7, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) +0, -4, +9, // mode, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) +0, +14, -4, // mode, y, x
	(signed char) -1, -1, -4, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) +0, +15, +3, // mode, y, x
	(signed char) +1, +10, -10, // sync and move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +1, -5, +5, // sync and move to y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +1, -8, +2, // sync and move to y, x
	(signed char) -1, -7, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_right_1[]=
{	(signed char) +1, +13, -6, // sync and move to y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) +0, -2, +12, // mode, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, -6, -4, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +0, +3, +9, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) +0, +7, -13, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) +0, +13, -8, // mode, y, x
	(signed char) +1, +0, -13, // sync and move to y, x
	(signed char) +0, +0, -1, // additional sync move to y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +1, +0, +7, // sync and move to y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +1, -4, +7, // sync and move to y, x
	(signed char) -1, -6, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_right_1[]=
{	(signed char) +1, +5, -13, // sync and move to y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) +0, +7, +10, // mode, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -7, +1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) +0, +9, +4, // mode, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) +0, -4, -14, // mode, y, x
	(signed char) -1, -4, +1, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) +0, +3, -15, // mode, y, x
	(signed char) +1, -10, -10, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +1, +5, +5, // sync and move to y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +1, +2, +8, // sync and move to y, x
	(signed char) -1, -1, +7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_1[]=
{	(signed char) +1, -6, -13, // sync and move to y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) +0, +12, +2, // mode, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -4, +6, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +0, +9, -3, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) +0, -13, -7, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) +0, -8, -13, // mode, y, x
	(signed char) +1, -13, +0, // sync and move to y, x
	(signed char) +0, -1, +0, // additional sync move to y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +1, +7, +0, // sync and move to y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +1, +7, +4, // sync and move to y, x
	(signed char) -1, +4, +6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_left_1[]=
{	(signed char) +1, -13, -5, // sync and move to y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +4, +1, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -4, -4, // draw, y, x
	(signed char) -1, -4, -1, // draw, y, x
	(signed char) +0, +10, -7, // mode, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, +1, +7, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +4, +4, // draw, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) +0, +4, -9, // mode, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) +0, -14, +4, // mode, y, x
	(signed char) -1, +1, +4, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) +0, -15, -3, // mode, y, x
	(signed char) +1, -10, +10, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +1, +5, -5, // sync and move to y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +1, +8, -2, // sync and move to y, x
	(signed char) -1, +7, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_left_1[]=
{	(signed char) +1, -13, +6, // sync and move to y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) +0, +2, -12, // mode, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +6, +4, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) +0, -3, -9, // mode, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) +0, -7, +13, // mode, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) +0, -13, +8, // mode, y, x
	(signed char) +1, +0, +13, // sync and move to y, x
	(signed char) +0, +0, +1, // additional sync move to y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +1, +0, -7, // sync and move to y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +1, +4, -7, // sync and move to y, x
	(signed char) -1, +6, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_left_1[]=
{	(signed char) +1, -5, +13, // sync and move to y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +1, -4, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -4, +4, // draw, y, x
	(signed char) -1, -1, +4, // draw, y, x
	(signed char) +0, -7, -10, // mode, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +7, -1, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +4, -4, // draw, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) +0, -9, -4, // mode, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +0, +4, +14, // mode, y, x
	(signed char) -1, +4, -1, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) +0, -3, +15, // mode, y, x
	(signed char) +1, +10, +10, // sync and move to y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +1, -5, -5, // sync and move to y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +1, -2, -8, // sync and move to y, x
	(signed char) -1, +1, -7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_2[]=
{	(signed char) +1, +1, +13, // sync and move to y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, -1, +6, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) +0, -8, -3, // mode, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, -1, -6, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) +0, -4, +5, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) +0, +15, -3, // mode, y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, +15, +4, // mode, y, x
	(signed char) +1, +14, +0, // sync and move to y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) +1, -7, +0, // sync and move to y, x
	(signed char) -1, +0, -2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +3, -4, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) +1, -7, -4, // sync and move to y, x
	(signed char) -1, -3, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_right_2[]=
{	(signed char) +1, +10, +8, // sync and move to y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -3, -2, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) +0, -8, +4, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +0, +0, +6, // mode, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) +0, +9, -13, // mode, y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +2, +3, // draw, y, x
	(signed char) +0, +14, -8, // mode, y, x
	(signed char) +1, +10, -10, // sync and move to y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +1, +3, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) +1, -5, +5, // sync and move to y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, -1, -5, // draw, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) +1, -8, +2, // sync and move to y, x
	(signed char) -1, -5, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_right_2[]=
{	(signed char) +1, +13, -1, // sync and move to y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +7, +1, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +0, -3, +8, // mode, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -7, +1, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) +0, +5, +4, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) +0, -3, -15, // mode, y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +4, -15, // mode, y, x
	(signed char) +1, +0, -14, // sync and move to y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +5, +5, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +3, +1, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) +1, +0, +7, // sync and move to y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -3, -3, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -4, -3, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) +1, -4, +7, // sync and move to y, x
	(signed char) -1, -4, +3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_right_2[]=
{	(signed char) +1, +8, -10, // sync and move to y, x
	(signed char) -1, -2, +5, // draw, y, x
	(signed char) -1, -2, +3, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +5, -4, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +0, +4, +8, // mode, y, x
	(signed char) -1, -4, -2, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -4, +5, // draw, y, x
	(signed char) -1, -1, +2, // draw, y, x
	(signed char) +0, +6, +0, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) +0, -13, -9, // mode, y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +3, -2, // draw, y, x
	(signed char) +0, -8, -14, // mode, y, x
	(signed char) +1, -10, -10, // sync and move to y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +7, +0, // draw, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +3, -1, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) +1, +5, +5, // sync and move to y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -5, +1, // draw, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) +1, +2, +8, // sync and move to y, x
	(signed char) -1, -1, +5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_2[]=
{	(signed char) +1, -1, -13, // sync and move to y, x
	(signed char) -1, +2, +5, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, +3, +0, // mode, y, x
	(signed char) -1, +1, -7, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +0, +8, +3, // mode, y, x
	(signed char) -1, -4, +2, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) +0, -3, +0, // mode, y, x
	(signed char) -1, +1, +7, // draw, y, x
	(signed char) -1, +1, +2, // draw, y, x
	(signed char) +0, +4, -5, // mode, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) +0, -15, +3, // mode, y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) +0, -15, -4, // mode, y, x
	(signed char) +1, -14, +0, // sync and move to y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +5, -5, // draw, y, x
	(signed char) -1, +6, +0, // draw, y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, +1, -3, // draw, y, x
	(signed char) -1, +3, +0, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) +1, +7, +0, // sync and move to y, x
	(signed char) -1, +0, +1, // draw, y, x
	(signed char) -1, -3, +3, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +0, -1, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -3, +4, // draw, y, x
	(signed char) -1, -6, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) +1, +7, +4, // sync and move to y, x
	(signed char) -1, +3, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_left_2[]=
{	(signed char) +1, -10, -8, // sync and move to y, x
	(signed char) -1, +5, +2, // draw, y, x
	(signed char) -1, +3, +2, // draw, y, x
	(signed char) +0, +2, -2, // mode, y, x
	(signed char) -1, -4, -5, // draw, y, x
	(signed char) -1, -1, -2, // draw, y, x
	(signed char) +0, +8, -4, // mode, y, x
	(signed char) -1, -2, +4, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) +0, -2, +2, // mode, y, x
	(signed char) -1, +5, +4, // draw, y, x
	(signed char) -1, +2, +1, // draw, y, x
	(signed char) +0, +0, -6, // mode, y, x
	(signed char) -1, +4, -2, // draw, y, x
	(signed char) +0, -9, +13, // mode, y, x
	(signed char) -1, -2, -5, // draw, y, x
	(signed char) -1, -2, -3, // draw, y, x
	(signed char) +0, -14, +8, // mode, y, x
	(signed char) +1, -10, +10, // sync and move to y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -7, // draw, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, -1, -3, // draw, y, x
	(signed char) -1, +2, -2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) +1, +5, -5, // sync and move to y, x
	(signed char) -1, +1, +1, // draw, y, x
	(signed char) -1, +0, +4, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, -1, -1, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +1, +5, // draw, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) +1, +8, -2, // sync and move to y, x
	(signed char) -1, +5, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_left_2[]=
{	(signed char) +1, -13, +1, // sync and move to y, x
	(signed char) -1, +5, -2, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, -3, // mode, y, x
	(signed char) -1, -7, -1, // draw, y, x
	(signed char) -1, -2, -1, // draw, y, x
	(signed char) +0, +3, -8, // mode, y, x
	(signed char) -1, +2, +4, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) +0, +0, +3, // mode, y, x
	(signed char) -1, +7, -1, // draw, y, x
	(signed char) -1, +2, -1, // draw, y, x
	(signed char) +0, -5, -4, // mode, y, x
	(signed char) -1, +2, -4, // draw, y, x
	(signed char) +0, +3, +15, // mode, y, x
	(signed char) -1, -5, -2, // draw, y, x
	(signed char) -1, -4, +0, // draw, y, x
	(signed char) +0, -4, +15, // mode, y, x
	(signed char) +1, +0, +14, // sync and move to y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) -1, -5, -5, // draw, y, x
	(signed char) -1, +0, -6, // draw, y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, -3, -1, // draw, y, x
	(signed char) -1, +0, -3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) +1, +0, -7, // sync and move to y, x
	(signed char) -1, +1, +0, // draw, y, x
	(signed char) -1, +3, +3, // draw, y, x
	(signed char) -1, +0, +3, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -1, +0, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +4, +3, // draw, y, x
	(signed char) -1, +0, +6, // draw, y, x
	(signed char) -1, -5, +5, // draw, y, x
	(signed char) -1, -3, +0, // draw, y, x
	(signed char) +1, +4, -7, // sync and move to y, x
	(signed char) -1, +4, -3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_left_2[]=
{	(signed char) +1, -8, +10, // sync and move to y, x
	(signed char) -1, +2, -5, // draw, y, x
	(signed char) -1, +2, -3, // draw, y, x
	(signed char) +0, -2, -2, // mode, y, x
	(signed char) -1, -5, +4, // draw, y, x
	(signed char) -1, -2, +1, // draw, y, x
	(signed char) +0, -4, -8, // mode, y, x
	(signed char) -1, +4, +2, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) +0, +2, +2, // mode, y, x
	(signed char) -1, +4, -5, // draw, y, x
	(signed char) -1, +1, -2, // draw, y, x
	(signed char) +0, -6, +0, // mode, y, x
	(signed char) -1, -2, -4, // draw, y, x
	(signed char) +0, +13, +9, // mode, y, x
	(signed char) -1, -5, +2, // draw, y, x
	(signed char) -1, -3, +2, // draw, y, x
	(signed char) +0, +8, +14, // mode, y, x
	(signed char) +1, +10, +10, // sync and move to y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) -1, -7, +0, // draw, y, x
	(signed char) -1, -5, -4, // draw, y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, -3, +1, // draw, y, x
	(signed char) -1, -2, -2, // draw, y, x
	(signed char) -1, +0, -4, // draw, y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) +1, -5, -5, // sync and move to y, x
	(signed char) -1, +1, -1, // draw, y, x
	(signed char) -1, +4, +0, // draw, y, x
	(signed char) -1, +2, +2, // draw, y, x
	(signed char) -1, -1, +3, // draw, y, x
	(signed char) -1, -1, +1, // draw, y, x
	(signed char) -1, +3, -3, // draw, y, x
	(signed char) -1, +5, -1, // draw, y, x
	(signed char) -1, +4, +5, // draw, y, x
	(signed char) -1, +0, +7, // draw, y, x
	(signed char) -1, -2, +2, // draw, y, x
	(signed char) +1, -2, -8, // sync and move to y, x
	(signed char) -1, +1, -5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char *spider[]=
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
