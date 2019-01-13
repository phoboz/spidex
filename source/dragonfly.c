// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define BLOW_UP 10

const signed char dragonfly_1_0[]=
{	(signed char) +1, -3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -8*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_1[]=
{	(signed char) +1, -1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) -1, +6*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_2[]=
{	(signed char) +1, +1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) -1, +12*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_3[]=
{	(signed char) +1, +3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +10*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_4[]=
{	(signed char) +1, +3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +8*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_5[]=
{	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) -1, -6*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_6[]=
{	(signed char) +1, -1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) -1, -12*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_1_7[]=
{	(signed char) +1, -3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -10*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -6*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +6*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_0[]=
{	(signed char) +1, -3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) +0, -8*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_1[]=
{	(signed char) +1, -1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) -1, +8*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -10*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_2[]=
{	(signed char) +1, +1*BLOW_UP, +3*BLOW_UP, // sync and move to y, x
	(signed char) -1, +12*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -11*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +8*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_3[]=
{	(signed char) +1, +3*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +8*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -10*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +8*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_4[]=
{	(signed char) +1, +3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +0*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) +0, +8*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_5[]=
{	(signed char) +1, +1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) -1, -8*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +10*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +10*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -9*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, -8*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_6[]=
{	(signed char) +1, -1*BLOW_UP, -3*BLOW_UP, // sync and move to y, x
	(signed char) -1, -12*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +11*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -8*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +11*BLOW_UP, // draw, y, x
	(signed char) -1, -12*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +11*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +12*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -12*BLOW_UP, // draw, y, x
	(signed char) -1, +12*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char dragonfly_2_7[]=
{	(signed char) +1, -3*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -8*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +10*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, -10*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +8*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, +9*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, -11*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -9*BLOW_UP, // draw, y, x
	(signed char) -1, +9*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -11*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, -8*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const dragonfly[]=
{	 dragonfly_1_0, // list of all single vectorlists in this
	 dragonfly_2_0,
	 dragonfly_1_1,
	 dragonfly_2_1,
	 dragonfly_1_2,
	 dragonfly_2_2,
	 dragonfly_1_3,
	 dragonfly_2_3,
	 dragonfly_1_4,
	 dragonfly_2_4,
	 dragonfly_1_5,
	 dragonfly_2_5,
	 dragonfly_1_6,
	 dragonfly_2_6,
	 dragonfly_1_7,
	 dragonfly_2_7
};

// ***************************************************************************
// end of file
// ***************************************************************************
