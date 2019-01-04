// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#define AMPLIFIER_MUL 8 

// ---------------------------------------------------------------------------

const signed char mine_down_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*14, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*14, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*15, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*15, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_right_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*15, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*15, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*14, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*14, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_left_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*15, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*15, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*15, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*15, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*14, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*14, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*14, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_right_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*14, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*14, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*14, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_up_left_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*14, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_left_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char mine_down_left_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*14, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*14, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*7, // draw, y, x
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
