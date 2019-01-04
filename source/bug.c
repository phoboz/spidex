// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10 

const signed char bug_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*12, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*10, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*12, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*8, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*8, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*9, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*9, // sync and move to y, x
	(signed char) +0, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*11, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*11, // sync and move to y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // additional sync move to y, x
	(signed char) +0, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) +0, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*11, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*11, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // additional sync move to y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*8, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*8, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*9, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*9, // sync and move to y, x
	(signed char) +0, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*11, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*11, // sync and move to y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // additional sync move to y, x
	(signed char) +0, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) +0, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_left_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*12, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*12, +AMPLIFIER_MUL*8, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*12, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_left_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*10, -AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*0, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) +1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*12, +AMPLIFIER_MUL*2, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*4, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*11, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*12, -AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*4, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_down_right_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*12, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*12, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*11, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*5, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) +1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*12, -AMPLIFIER_MUL*2, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*4, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*11, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*12, +AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*4, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bug_up_left_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*10, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char* const bug[]=
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
