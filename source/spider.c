// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------
#define SPIDER_MUL 10

const signed char spider_down_1[]=
{	(signed char) +1*SPIDER_MUL, +6*SPIDER_MUL, +12*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +1*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, -9*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -12*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -8*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +12*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -5*SPIDER_MUL, -3*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, -9*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_right_1[]=
{	(signed char) +1*SPIDER_MUL, +11*SPIDER_MUL, +5*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -11*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -10*SPIDER_MUL, +7*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +7*SPIDER_MUL, -10*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -6*SPIDER_MUL, +1*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -11*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_right_1[]=
{	(signed char) +1*SPIDER_MUL, +12*SPIDER_MUL, -6*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -9*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +12*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -8*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, -12*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -4*SPIDER_MUL, +5*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -9*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_right_1[]=
{	(signed char) +1*SPIDER_MUL, +5*SPIDER_MUL, -11*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -2*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +11*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +7*SPIDER_MUL, +10*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -10*SPIDER_MUL, -7*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +1*SPIDER_MUL, +6*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -11*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char spider_up_1[]=
{	(signed char) +1*SPIDER_MUL, -6*SPIDER_MUL, -12*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -1*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +9*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +12*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +8*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -12*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +5*SPIDER_MUL, +4*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +9*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_left_1[]=
{	(signed char) +1*SPIDER_MUL, -11*SPIDER_MUL, -5*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +11*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +10*SPIDER_MUL, -7*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -7*SPIDER_MUL, +10*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +6*SPIDER_MUL, -1*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +11*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_left_1[]=
{	(signed char) +1*SPIDER_MUL, -12*SPIDER_MUL, +6*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +9*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, -12*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +8*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +12*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +4*SPIDER_MUL, -5*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +9*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_left_1[]=
{	(signed char) +1*SPIDER_MUL, -5*SPIDER_MUL, +11*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +2*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -11*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -7*SPIDER_MUL, -10*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +10*SPIDER_MUL, +7*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -1*SPIDER_MUL, -6*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +11*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_2[]=
{	(signed char) +1*SPIDER_MUL, -10*SPIDER_MUL, +10*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -4*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +9*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +10*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +10*SPIDER_MUL, +3*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +4*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +10*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_down_right_2[]=
{	(signed char) +1*SPIDER_MUL, -3*SPIDER_MUL, +9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +8*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +4*SPIDER_MUL, -9*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +9*SPIDER_MUL, -8*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +4*SPIDER_MUL, -5*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_right_2[]=
{	(signed char) +1*SPIDER_MUL, +9*SPIDER_MUL, +9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +5*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, -9*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +9*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +3*SPIDER_MUL, -9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -5*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +9*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_right_2[]=
{	(signed char) +1*SPIDER_MUL, +9*SPIDER_MUL, +3*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +8*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -9*SPIDER_MUL, -4*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -8*SPIDER_MUL, -9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -3*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +7*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -5*SPIDER_MUL, -4*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_2[]=
{	(signed char) +1*SPIDER_MUL, +9*SPIDER_MUL, -9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +5*SPIDER_MUL, -1*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -9*SPIDER_MUL, +3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -9*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -3*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -9*SPIDER_MUL, -3*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -5*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -2*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -9*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_up_left_2[]=
{	(signed char) +1*SPIDER_MUL, +3*SPIDER_MUL, -9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -8*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -4*SPIDER_MUL, +9*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -9*SPIDER_MUL, +8*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, -7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -4*SPIDER_MUL, +5*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};

const signed char spider_left_2[]=
{	(signed char) +1*SPIDER_MUL, -9*SPIDER_MUL, -9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, -5*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +3*SPIDER_MUL, +9*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -9*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -6*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, -3*SPIDER_MUL, +9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +5*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -9*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +6*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, +1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +2 // endmarker 
};


const signed char spider_down_left_2[]=
{	(signed char) +1*SPIDER_MUL, -9*SPIDER_MUL, -3*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, -8*SPIDER_MUL, +0*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +9*SPIDER_MUL, +4*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -3*SPIDER_MUL, +0*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +6*SPIDER_MUL, +2*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +1*SPIDER_MUL, +1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +4*SPIDER_MUL, +5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +0*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -4*SPIDER_MUL, +4*SPIDER_MUL, // draw, y, x
	(signed char) +1*SPIDER_MUL, +8*SPIDER_MUL, +9*SPIDER_MUL, // sync and move to y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +3*SPIDER_MUL, // additional sync move to y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +0*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, -5*SPIDER_MUL, -4*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, -1*SPIDER_MUL, -1*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -2*SPIDER_MUL, -6*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +0*SPIDER_MUL, +3*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, -7*SPIDER_MUL, +7*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +5*SPIDER_MUL, +4*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -5*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +2*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -1*SPIDER_MUL, // draw, y, x
	(signed char) +0*SPIDER_MUL, +2*SPIDER_MUL, -2*SPIDER_MUL, // mode, y, x
	(signed char) -1*SPIDER_MUL, +1*SPIDER_MUL, -3*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +3*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
	(signed char) -1*SPIDER_MUL, +5*SPIDER_MUL, -2*SPIDER_MUL, // draw, y, x
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
