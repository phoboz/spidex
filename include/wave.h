#ifndef _WAVE_H
#define _WAVE_H	

#include "enemy.h"
#include "wall.h"

#define MAX_WAVES		3

#define WAVE_OBJECT_TYPE_ENEMY	0
#define WAVE_OBJECT_TYPE_WALL	1

struct path_element
{
	unsigned int num_steps;
	const struct enemy_path *path;
};

struct wave_element
{
	unsigned int treshold;
	signed int y;
	signed int x;
	unsigned int object_type;
	unsigned int object_index;
	unsigned int value;
};

struct wave_def
{
	unsigned int num_elements;
	const struct wave_element *elements;
};

struct wave
{
	unsigned int wave_index;
	unsigned int counter;
	unsigned int element_index;
	unsigned int retry;
	unsigned int new_wave;
};

void init_wave(
	struct wave *wave
	);

unsigned int move_wave(
	struct wave *wave,
	unsigned int num_enemies,
	struct enemy *enemies,
	unsigned int num_walls,
	struct wall *walls,
	struct grid *grid
	);

extern const struct path_element enemy_paths[];
extern const struct wave_def waves[];

#endif
