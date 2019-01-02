// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

const signed char mine_down_1[]=
{	(signed char) +1, +4, +0, // sync and move to y, x
	(signed char) -1, +2, -7, // draw, y, x
	(signed char) -1, -14, +7, // draw, y, x
	(signed char) -1, +14, +7, // draw, y, x
	(signed char) -1, -2, -7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_right_1[]=
{	(signed char) +1, +3, -3, // sync and move to y, x
	(signed char) -1, -4, -6, // draw, y, x
	(signed char) -1, -5, +15, // draw, y, x
	(signed char) -1, +15, -5, // draw, y, x
	(signed char) -1, -6, -4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_right_1[]=
{	(signed char) +1, +0, -4, // sync and move to y, x
	(signed char) -1, -7, -2, // draw, y, x
	(signed char) -1, +7, +14, // draw, y, x
	(signed char) -1, +7, -14, // draw, y, x
	(signed char) -1, -7, +2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_right_1[]=
{	(signed char) +1, -3, -3, // sync and move to y, x
	(signed char) -1, -6, +4, // draw, y, x
	(signed char) -1, +15, +5, // draw, y, x
	(signed char) -1, -5, -15, // draw, y, x
	(signed char) -1, -4, +6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_1[]=
{	(signed char) +1, -4, +0, // sync and move to y, x
	(signed char) -1, -2, +7, // draw, y, x
	(signed char) -1, +14, -7, // draw, y, x
	(signed char) -1, -14, -7, // draw, y, x
	(signed char) -1, +2, +7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_left_1[]=
{	(signed char) +1, -3, +3, // sync and move to y, x
	(signed char) -1, +4, +6, // draw, y, x
	(signed char) -1, +5, -15, // draw, y, x
	(signed char) -1, -15, +5, // draw, y, x
	(signed char) -1, +6, +4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_left_1[]=
{	(signed char) +1, +0, +4, // sync and move to y, x
	(signed char) -1, +7, +2, // draw, y, x
	(signed char) -1, -7, -14, // draw, y, x
	(signed char) -1, -7, +14, // draw, y, x
	(signed char) -1, +7, -2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_left_1[]=
{	(signed char) +1, +3, +3, // sync and move to y, x
	(signed char) -1, +6, -4, // draw, y, x
	(signed char) -1, -15, -5, // draw, y, x
	(signed char) -1, +5, +15, // draw, y, x
	(signed char) -1, +4, -6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_2[]=
{	(signed char) +1, +2, +0, // sync and move to y, x
	(signed char) -1, +4, -6, // draw, y, x
	(signed char) -1, -14, +6, // draw, y, x
	(signed char) -1, +14, +6, // draw, y, x
	(signed char) -1, -4, -6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_right_2[]=
{	(signed char) +1, +1, -1, // sync and move to y, x
	(signed char) -1, -1, -7, // draw, y, x
	(signed char) -1, -6, +14, // draw, y, x
	(signed char) -1, +14, -6, // draw, y, x
	(signed char) -1, -7, -1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_right_2[]=
{	(signed char) +1, +0, -1, // sync and move to y, x
	(signed char) -1, -6, -5, // draw, y, x
	(signed char) -1, +6, +14, // draw, y, x
	(signed char) -1, +6, -14, // draw, y, x
	(signed char) -1, -6, +5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_right_2[]=
{	(signed char) +1, -1, -1, // sync and move to y, x
	(signed char) -1, -7, +1, // draw, y, x
	(signed char) -1, +14, +6, // draw, y, x
	(signed char) -1, -6, -14, // draw, y, x
	(signed char) -1, -1, +7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_2[]=
{	(signed char) +1, -1, +0, // sync and move to y, x
	(signed char) -1, -5, +6, // draw, y, x
	(signed char) -1, +14, -6, // draw, y, x
	(signed char) -1, -14, -6, // draw, y, x
	(signed char) -1, +5, +6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_left_2[]=
{	(signed char) +1, -1, +1, // sync and move to y, x
	(signed char) -1, +1, +7, // draw, y, x
	(signed char) -1, +6, -14, // draw, y, x
	(signed char) -1, -14, +6, // draw, y, x
	(signed char) -1, +7, +1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_left_2[]=
{	(signed char) +1, +0, +1, // sync and move to y, x
	(signed char) -1, +6, +5, // draw, y, x
	(signed char) -1, -6, -14, // draw, y, x
	(signed char) -1, -6, +14, // draw, y, x
	(signed char) -1, +6, -5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_left_2[]=
{	(signed char) +1, +1, +1, // sync and move to y, x
	(signed char) -1, +7, -1, // draw, y, x
	(signed char) -1, -14, -6, // draw, y, x
	(signed char) -1, +6, +14, // draw, y, x
	(signed char) -1, +1, -7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char* const mine[]=
{
	mine_down_1,
	mine_down_2,
	mine_down_right_1,
	mine_down_right_2,
	mine_right_1,
	mine_right_2,
	mine_up_right_1,
	mine_up_right_2,
	mine_up_1,
	mine_up_2,
	mine_up_left_1,
	mine_up_left_2,
	mine_left_1,
	mine_left_2,
	mine_down_left_1,
	mine_down_left_2
};

// ***************************************************************************
// end of file
// ***************************************************************************
