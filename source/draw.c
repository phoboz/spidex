// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

void reset0ref(void)
{
	dp_VIA_cntl = (unsigned int)0xcc;			// enable zero, enable all blank

	// reset integrators	
	dp_VIA_port_a = 0;// dac = 0
	dp_VIA_port_b = 3;// mux=1, disable mux
	dp_VIA_port_b = 2;// mux=1, enable mux
	dp_VIA_port_b = 2;// delay
	dp_VIA_port_b = 1;// disable mux
}

void moveto(
	signed int y,
	signed int x
	)
{
	dp_VIA_port_a = y;			// y pos to dac
	dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
	dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
	dp_VIA_shift_reg = 0;		// all output is BLANK
	dp_VIA_port_b++;			// mux disable, dac only to x
	dp_VIA_port_a = x;			// dac -> x
	dp_VIA_t1_cnt_hi=0;		// start timer
	while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
}

void draw_vlist_c(
	const signed char *vList
	)
{
	register int count = *(vList++);// count in list
	do 
	{
		dp_VIA_port_a = *(vList++);	// first y coordinate to dac
		dp_VIA_port_b = 0;				// mux enable, dac to -> integrator y (and x)
		dp_VIA_port_b++;				// mux disable, dac only to x
		dp_VIA_port_a = *(vList++);	// dac -> x
		dp_VIA_shift_reg =  (unsigned int)0xff; // full "unblank" output
		dp_VIA_t1_cnt_hi = 0;			// start timer
		while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
		dp_VIA_shift_reg = 0;			// output full blank
	} while (--count >=0);			// loop thru all vectors
}

// #define DRAW_SCALE 0x0c // smallest scale printSync can cope with!

// this is quite a "C" optimized version of print_sync
// (-O3 and no_frame_pointer)
#define ZERO_DELAY 5

void draw_synced_list_c(
	const signed char *u,
	signed int y,
	signed int x,
	unsigned int scaleMove,
	unsigned int scaleList
	)
{
	
	do
	{
		// resnyc / startsync
		dp_VIA_shift_reg = 0;		// all output is BLANK
		
		// move to zero
		dp_VIA_cntl = (unsigned int)0xcc;	// zero the integrators
		dp_VIA_port_a = 0;			// reset integrator offset
		dp_VIA_port_b = (int)0b10000010;
		
		dp_VIA_t1_cnt_lo = scaleMove;
		// delay, till beam is at zero
		// volatile - otherwise delay loop does not work with -O
		for (volatile signed int b=ZERO_DELAY; b>0; b--);
		dp_VIA_port_b= (int)0b10000011;
		
		// move to "location"
		dp_VIA_port_a = y;			// y pos to dac
		dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
		dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
		dp_VIA_port_b = 1;			// mux disable, dac only to x
		dp_VIA_port_a = x;			// dac -> x
		dp_VIA_t1_cnt_hi=0;		// start timer
		
		// this can be done before the wait loop
		// since it only fills the latch, not the actual timer!
		dp_VIA_t1_cnt_lo = scaleList;
		u+=3;
		
		// moveing test for yx== 0 into the move delay
		if ((*(u-2)!=0) || (*(u-1)!=0))
		{
			while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
			
			// internal moveTo
			dp_VIA_port_a = *(u-2);	// y pos to dac
			dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
			dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
			dp_VIA_port_b = 1;			// mux disable, dac only to x
			dp_VIA_port_a = *(u-1);	// dac -> x
			dp_VIA_t1_cnt_hi=0;		// start timer
			while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
		}
		else
		{
			while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
		}
		
		while (1)
		{
			if (*u<0) // draw line
			{
				// draw a vector
				dp_VIA_port_a = *(1+u);		// y pos to dac
				dp_VIA_port_b = 0;				// mux enable, dac to -> integrator y (and x)
				dp_VIA_port_b=1;				// mux disable, dac only to x
				dp_VIA_port_a = *(2+u);		// dac -> x
				dp_VIA_t1_cnt_hi=0;			// start timer
				dp_VIA_shift_reg = (unsigned int)0xff;	// draw complete line

				if (scaleList>10)
				{
					while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
				}
				dp_VIA_shift_reg = 0;			// all output is BLANK
			}
			else if (*u == 0) // moveTo
			{
				if ((*(u+1)!=0) || (*(u+2)!=0))
				{
					// internal moveTo
					dp_VIA_port_a = *(1+u);	// y pos to dac
					dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
					dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
					dp_VIA_port_b =1;			// mux disable, dac only to x
					dp_VIA_port_a = *(2+u);	// dac -> x
					dp_VIA_t1_cnt_hi=0;		// start timer
					while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
				}
			}
			else
			{
				break;
			}
			u+=3;
		}
	} while (*u != 2);
}

// does not position
// meaning - everything is placed from center (middle)
void draw_synced_list_c_nm(
	const signed char *u,
	unsigned int scaleList
	)
{
	
	do
	{
		// resnyc / startsync
		dp_VIA_shift_reg = 0;		// all output is BLANK
		
		// move to zero
		dp_VIA_cntl = (unsigned int)0xcc;	// zero the integrators
		dp_VIA_port_a = 0;			// reset integrator offset
		dp_VIA_port_b = (int)0b10000010;
		
		// delay, till beam is at zero
		// volatile - otherwise delay loop does not work with -O
		for (volatile signed int b=ZERO_DELAY; b>0; b--);
		dp_VIA_port_b= (int)0b10000011;
		
		// this can be done before the wait loop
		// since it only fills the latch, not the actual timer!
		dp_VIA_t1_cnt_lo = scaleList;
		u+=3;
		
		// moveing test for yx== 0 into the move delay
		if ((*(u-2)!=0) || (*(u-1)!=0))
		{
			// internal moveTo
			dp_VIA_port_a = *(u-2);	// y pos to dac
			dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
			dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
			dp_VIA_port_b = 1;			// mux disable, dac only to x
			dp_VIA_port_a = *(u-1);	// dac -> x
			dp_VIA_t1_cnt_hi=0;		// start timer
			while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
		}
		
		while (1)
		{
			if (*u<0) // draw line
			{
				// draw a vector
				dp_VIA_port_a = *(1+u);		// y pos to dac
				dp_VIA_port_b = 0;				// mux enable, dac to -> integrator y (and x)
				dp_VIA_port_b=1;				// mux disable, dac only to x
				dp_VIA_port_a = *(2+u);		// dac -> x
				dp_VIA_t1_cnt_hi=0;			// start timer
				dp_VIA_shift_reg = (unsigned int)0xff;	// draw complete line

				if (scaleList>10)
				{
					while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
				}
				dp_VIA_shift_reg = 0;			// all output is BLANK
			}
			else if (*u == 0) // moveTo
			{
				if ((*(u+1)!=0) || (*(u+2)!=0))
				{
					// internal moveTo
					dp_VIA_port_a = *(1+u);	// y pos to dac
					dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
					dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
					dp_VIA_port_b =1;			// mux disable, dac only to x
					dp_VIA_port_a = *(2+u);	// dac -> x
					dp_VIA_t1_cnt_hi=0;		// start timer
					while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
				}
			}
			else
			{
				break;
			}
			u+=3;
		}
	} while (*u != 2);
}

// does not position
// meaning - everything is placed from center (middle)
// 
// but each MOVE encountered is done with the special MOVE SCALE
void draw_synced_list_c_nm1(
	const signed char *u,
	unsigned int scaleMove,
	unsigned int scaleList
	)
{
	
	do
	{
		// resnyc / startsync
		dp_VIA_shift_reg = 0;		// all output is BLANK
		
		// move to zero
		dp_VIA_cntl = (unsigned int)0xcc;	// zero the integrators
		dp_VIA_port_a = 0;			// reset integrator offset
		dp_VIA_port_b = (int)0b10000010;
		
		// delay, till beam is at zero
		// volatile - otherwise delay loop does not work with -O
		for (volatile signed int b=ZERO_DELAY; b>0; b--);
		dp_VIA_port_b= (int)0b10000011;
		
		// this can be done before the wait loop
		// since it only fills the latch, not the actual timer!
		dp_VIA_t1_cnt_lo = scaleMove;
		u+=3;
		
		// moveing test for yx== 0 into the move delay
		if ((*(u-2)!=0) || (*(u-1)!=0))
		{
			// internal moveTo
			dp_VIA_port_a = *(u-2);	// y pos to dac
			dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
			dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
			dp_VIA_port_b = 1;			// mux disable, dac only to x
			dp_VIA_port_a = *(u-1);	// dac -> x
			dp_VIA_t1_cnt_hi=0;		// start timer
			while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
		}
		
		while (1)
		{
			if (*u<0) // draw line
			{
				// draw a vector
				dp_VIA_port_a = *(1+u);		// y pos to dac
				dp_VIA_port_b = 0;				// mux enable, dac to -> integrator y (and x)
				dp_VIA_port_b=1;				// mux disable, dac only to x
				dp_VIA_port_a = *(2+u);		// dac -> x
				dp_VIA_t1_cnt_lo = scaleList;
				dp_VIA_t1_cnt_hi=0;			// start timer
				dp_VIA_shift_reg = (unsigned int)0xff;	// draw complete line

				if (scaleList>10)
				{
					while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
				}
				dp_VIA_shift_reg = 0;			// all output is BLANK
			}
			else if (*u == 0) // moveTo
			{
				if ((*(u+1)!=0) || (*(u+2)!=0))
				{
					// internal moveTo
					dp_VIA_port_a = *(1+u);	// y pos to dac
					dp_VIA_cntl = (unsigned int)0xce;	// disable zero, disable all blank
					dp_VIA_port_b = 0;			// mux enable, dac to -> integrator y (and x)
					dp_VIA_port_b =1;			// mux disable, dac only to x
					dp_VIA_port_a = *(2+u);	// dac -> x
					dp_VIA_t1_cnt_lo = scaleMove;
					dp_VIA_t1_cnt_hi=0;		// start timer
					while ((dp_VIA_int_flags & 0x40) == 0); // wait till timer finishes
				}
			}
			else
			{
				break;
			}
			u+=3;
		}
	} while (*u != 2);
}



// ***************************************************************************
// end of file
// ***************************************************************************
