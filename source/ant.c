// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

#define BLOW_UP 18

const signed char ant_1_0[]=
{	(signed char) +1, -5*BLOW_UP, -7*BLOW_UP, // sync and move to y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +6*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_1[]=
{	(signed char) +1, -5*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -3*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, -5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_2[]=
{	(signed char) +1, -7*BLOW_UP, +5*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, -6*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_3[]=
{	(signed char) +1, -1*BLOW_UP, +5*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +3*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, -4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +1*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_4[]=
{	(signed char) +1, +5*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -6*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +1, +0*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_5[]=
{	(signed char) +1, +5*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +3*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, +5*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +0, +1*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_6[]=
{	(signed char) +1, +7*BLOW_UP, -5*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -1*BLOW_UP, +6*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +7*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +0*BLOW_UP, // sync and move to y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_1_7[]=
{	(signed char) +1, +1*BLOW_UP, -5*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -3*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, +4*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -1*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_0[]=
{	(signed char) +1, +6*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) -1, -5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, -3*BLOW_UP, +4*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, -7*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +1, +1*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_1[]=
{	(signed char) +1, +7*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) +0, +7*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, +2*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_2[]=
{	(signed char) +1, +7*BLOW_UP, -6*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +4*BLOW_UP, +3*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +1, +4*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_3[]=
{	(signed char) +1, +1*BLOW_UP, -7*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, -2*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +0, +5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, -2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -7*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +1, +2*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_4[]=
{	(signed char) +1, -6*BLOW_UP, -7*BLOW_UP, // sync and move to y, x
	(signed char) -1, +5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +0, +3*BLOW_UP, -4*BLOW_UP, // mode, y, x
	(signed char) -1, +2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, +7*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -5*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) +1, -1*BLOW_UP, -4*BLOW_UP, // sync and move to y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +4*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_5[]=
{	(signed char) +1, -7*BLOW_UP, -1*BLOW_UP, // sync and move to y, x
	(signed char) +0, -2*BLOW_UP, +0*BLOW_UP, // additional sync move to y, x
	(signed char) -1, +5*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, -5*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +2*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, +6*BLOW_UP, // draw, y, x
	(signed char) +0, -7*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, -2*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_6[]=
{	(signed char) +1, -7*BLOW_UP, +6*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -4*BLOW_UP, -3*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +7*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +5*BLOW_UP, // mode, y, x
	(signed char) -1, -2*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +5*BLOW_UP, // draw, y, x
	(signed char) +1, -4*BLOW_UP, +1*BLOW_UP, // sync and move to y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, -2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +4*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +2*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, -4*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char ant_2_7[]=
{	(signed char) +1, -1*BLOW_UP, +7*BLOW_UP, // sync and move to y, x
	(signed char) +0, +0*BLOW_UP, +2*BLOW_UP, // additional sync move to y, x
	(signed char) -1, -1*BLOW_UP, -5*BLOW_UP, // draw, y, x
	(signed char) +0, -5*BLOW_UP, +0*BLOW_UP, // mode, y, x
	(signed char) -1, +3*BLOW_UP, -6*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -1*BLOW_UP, -2*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, +0*BLOW_UP, // draw, y, x
	(signed char) -1, +0*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +2*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +0, +2*BLOW_UP, -2*BLOW_UP, // mode, y, x
	(signed char) -1, +6*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +0, +0*BLOW_UP, +7*BLOW_UP, // mode, y, x
	(signed char) -1, -3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +5*BLOW_UP, +1*BLOW_UP, // draw, y, x
	(signed char) +1, -2*BLOW_UP, +4*BLOW_UP, // sync and move to y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, +3*BLOW_UP, // draw, y, x
	(signed char) -1, +3*BLOW_UP, -1*BLOW_UP, // draw, y, x
	(signed char) -1, +1*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) -1, -3*BLOW_UP, -3*BLOW_UP, // draw, y, x
	(signed char) +2 // endmarker 
};
const signed char* const ant[]=
{	 ant_1_0, // list of all single vectorlists in this
	 ant_2_0,
	 ant_1_1,
	 ant_2_1,
	 ant_1_2,
	 ant_2_2,
	 ant_1_3,
	 ant_2_3,
	 ant_1_4,
	 ant_2_4,
	 ant_1_5,
	 ant_2_5,
	 ant_1_6,
	 ant_2_6,
	 ant_1_7,
	 ant_2_7
};

// ***************************************************************************
// end of file
// ***************************************************************************
