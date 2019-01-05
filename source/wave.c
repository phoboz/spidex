// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "wave.h"

// ---------------------------------------------------------------------------

const struct enemy_path square_path[] =
{
	/* treshold		dir */
	{12,				DIR_RIGHT},
	{12,				DIR_DOWN},
	{12,				DIR_LEFT},
	{12,				DIR_UP}
};

const struct enemy_path circular_path[] =
{
	/* treshold		dir */
	{12,				DIR_DOWN},
	{12,				DIR_DOWN_RIGHT},
	{12,				DIR_RIGHT},
	{12,				DIR_UP_RIGHT},
	{12,				DIR_UP},
	{12,				DIR_UP_LEFT},
	{12,				DIR_LEFT},
	{12,				DIR_DOWN_LEFT}
};

const struct enemy_path l_path[] =
{
	/* treshold		dir */
	{40,				DIR_LEFT},
	{90,				DIR_UP},
	{90,				DIR_DOWN},
	{40,				DIR_RIGHT}
};

const struct path_element enemy_paths[] =
{
	/* num_steps	reference */
	{4,			square_path},
	{8,			circular_path},
	{4,			l_path}
};

const struct wave_element wave_1[] =
{
	/*	treshold		y		x		object_type				object_index		value */
	{	0,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,	0		},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,	0		}
};

const struct wave_element wave_2[] =
{
	/*	treshold		y		x		object_type				object_index		value */
	{	0,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,	0		},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,	0		},
	{	40,			0,		0,		WAVE_OBJECT_TYPE_WALL,		16,				32		},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		17,				32		},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		23,				32		},
	{	80,			-40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,	0		},
	{	80,			-40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,	0		},
	{	80,			40,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BEE,	1		},
	{	120,			-40,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,	0		}
};

const struct wave_element wave_3[] =
{
	/*	treshold		y		x		object_type				object_index		value */
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		19,				32		},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		20,				32		},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		21,				32		},
	{	0,			-80,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,	2		},
	{	0,			-90,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,	2		},
	{	0,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,	2		}
};

const struct wave_def waves[] =
{
	/*	num_elmts		wave_elmts	*/
	{	2,			wave_1		},
	{	9,			wave_2		},
	{	6,			wave_3		}
};

void init_wave(
	struct wave *wave
	)
{
	wave->wave_index =		0;
	wave->counter =		0;
	wave->element_index =	0;
	wave->retry =			0;
	wave->new_wave =		0;
}

unsigned int move_wave(
	struct wave *wave,
	unsigned int num_enemies,
	struct enemy *enemies,
	unsigned int num_walls,
	struct wall *walls,
	struct grid *grid
	)
{
	unsigned int i;

	if (!wave->new_wave)
	{
		if (wave->retry || ++wave->counter >= waves[wave->wave_index].elements[wave->element_index].treshold)
		{
			wave->counter = 0;

			wave->retry = 1;
			if (waves[wave->wave_index].elements[wave->element_index].object_type == WAVE_OBJECT_TYPE_ENEMY)
			{
				for (i = 0; i < num_enemies; i++)
				{
					if (!enemies[i].ch.obj.active)
					{
						init_enemy(
							&enemies[i],
							waves[wave->wave_index].elements[wave->element_index].y,
							waves[wave->wave_index].elements[wave->element_index].x,
							&enemy_races[waves[wave->wave_index].elements[wave->element_index].object_index],
							enemy_paths[waves[wave->wave_index].elements[wave->element_index].value].num_steps,
							enemy_paths[waves[wave->wave_index].elements[wave->element_index].value].path,
							grid
							);
						wave->retry = 0;
						break;
					}
				}
			}
			else if (waves[wave->wave_index].elements[wave->element_index].object_type == WAVE_OBJECT_TYPE_WALL)
			{
				for (i = 0; i < num_walls; i++)
				{
					if (!walls[i].active)
					{
						init_wall(
							&walls[i],
							waves[wave->wave_index].elements[wave->element_index].object_index,
							waves[wave->wave_index].elements[wave->element_index].value
							);
						wave->retry = 0;
						break;
					}
				}
			}

			if (wave->retry)
			{
				return 0;
			}

			if (++wave->element_index >= waves[wave->wave_index].num_elements)
			{
				wave->element_index = 0;
				wave->new_wave = 1;
			}
		}
	}

	if (wave->new_wave)
	{
		for (i = 0; i < num_enemies; i++)
		{
			if (enemies[i].ch.obj.active && enemies[i].num_hits > 0)
			{
				return 0;
			}
		}

		for (i = 0; i < num_enemies; i++)
		{
			enemies[i].ch.obj.active = 0;
		}

		if (++wave->wave_index >= MAX_WAVES)
		{
			wave->wave_index = 0;
		}

		wave->new_wave = 0;

		return wave->wave_index + 1;
	}

	return 0;
}

// ***************************************************************************
// end of file
// ***************************************************************************
