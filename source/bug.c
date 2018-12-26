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

const signed char *bug[]=
{
	bug_left_1,
	bug_left_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
