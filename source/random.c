// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>

// ---------------------------------------------------------------------------

static unsigned int _x;
static unsigned int _a;
static unsigned int _b; 
static unsigned int _c;
 
void init_random(
	unsigned int s1,
	unsigned int s2,
	unsigned int s3,
	unsigned int x0
	)
{
	_x = x0;
	_a = s1;
	_b = s2;
	_c = s3;
	_x++;
	_a = (_a^_c^_x);
	_b = (_b+_a);
	_c = ((_c+(_b>>1))^_a);
}

unsigned int random(void)
{
	_x++;
	_a = (_a^_c^_x);
	_b = (_b+_a);
	_c = ((_c+(_b>>1))^_a);
	return _c;
}

// ***************************************************************************
// end of file
// ***************************************************************************
