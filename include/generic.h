#ifndef _GENERIC_H
#define _GENERIC_H

#define abs(a)	((a) < 0 ? (-a) : (a))

void init_random(
	unsigned int s1,
	unsigned int s2,
	unsigned int s3,
	unsigned int x0
	);

unsigned int random(void);

#endif
