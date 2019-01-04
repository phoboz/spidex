// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------
#define AMPLIFIER_MUL 10 

const signed char bee_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_left_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*10, -AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_right_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*6, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*9, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*10, -AMPLIFIER_MUL*9, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_right_1[]=
{	(signed char) +1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*10, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*10, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_right_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*6, +AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*1, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*10, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*6, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*6, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*6, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*10, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_left_1[]=
{	(signed char) +1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*6, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*7, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*9, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_left_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*9, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*7, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_left_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*12, -AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*2, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) +0, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_down_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*8, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*7, -AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*12, +AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_right_2[]=
{	(signed char) +1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*9, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*10, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*7, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*10, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_right_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*8, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, -AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*7, -AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*12, +AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char bee_up_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*2, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*10, +AMPLIFIER_MUL*0, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*7, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) +0, +AMPLIFIER_MUL*10, +AMPLIFIER_MUL*0, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*9, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*0, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*0, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char bee_up_left_2[]=
{	(signed char) +1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*5, // sync and move to y, x
	(signed char) -1, -AMPLIFIER_MUL*3, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*4, -AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, +AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*5, +AMPLIFIER_MUL*8, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*3, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*5, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*3, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, -AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*8, +AMPLIFIER_MUL*5, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, +AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +1, -AMPLIFIER_MUL*7, +AMPLIFIER_MUL*7, // sync and move to y, x
	(signed char) -1, +AMPLIFIER_MUL*2, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*12, -AMPLIFIER_MUL*12, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*4, +AMPLIFIER_MUL*9, // draw, y, x
	(signed char) -1, -AMPLIFIER_MUL*1, +AMPLIFIER_MUL*1, // draw, y, x
	(signed char) +0, -AMPLIFIER_MUL*3, +AMPLIFIER_MUL*2, // mode, y, x
	(signed char) -1, -AMPLIFIER_MUL*2, -AMPLIFIER_MUL*2, // draw, y, x
	(signed char) +0, +AMPLIFIER_MUL*2, -AMPLIFIER_MUL*3, // mode, y, x
	(signed char) -1, +AMPLIFIER_MUL*1, -AMPLIFIER_MUL*1, // draw, y, x
	(signed char) -1, +AMPLIFIER_MUL*9, -AMPLIFIER_MUL*4, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char* const bee[]=
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
