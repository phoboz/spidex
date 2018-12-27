#ifndef _WAVE_H
#define _WAVE_H	

#include "enemy.h"

struct path_element
{
	unsigned int num_steps;
	const struct enemy_path *path;
};

struct wave_element
{
	signed int y;
	signed int x;
	unsigned int race_index;
	unsigned int path_index;
};

struct wave
{
	unsigned int num_elements;
	const struct wave_element *elements;
};

extern const struct path_element enemy_paths[];
extern const struct wave waves[];

#endif
