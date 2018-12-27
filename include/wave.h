#ifndef _WAVE_H
#define _WAVE_H	

#include "enemy.h"

struct wave {
	signed int y;
	signed int x;
	unsigned int race_index;
	unsigned int path_index;
};

#endif
