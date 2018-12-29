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


const struct path_element enemy_paths[] =
{
	/* num_steps	reference */
	{4,			square_path},
	{8,			circular_path}
};

const struct wave_element wave_1[] =
{
	/*	treshold		y		x		race_index		path_index	*/
	{	0,			40,		40,		ENEMY_RACE_FLY,	0		},
	{	80,			40,		-40,		ENEMY_RACE_FLY,	0		}
};

const struct wave_element wave_2[] =
{
	/*	treshold		y		x		race_index		path_index	*/
	{	0,			40,		40,		ENEMY_RACE_FLY,	0		},
	{	80,			40,		-40,		ENEMY_RACE_FLY,	0		},
	{	80,			-40,		-40,		ENEMY_RACE_FLY,	0		},
	{	80,			-40,		40,		ENEMY_RACE_FLY,	0		},
	{	80,			40,		80,		ENEMY_RACE_BEE,	1		},
	{	120,			-40,		0,		ENEMY_RACE_BUG,	0		}
};

const struct wave_def waves[] =
{
	/*	num_elmts		wave_elmts	*/
	{	2,			wave_1		},
	{	6,			wave_2		}
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
	struct enemy *enemies
	)
{
	unsigned int i;

	if (!wave->new_wave)
	{
		if (wave->retry || ++wave->counter >= waves[wave->wave_index].elements[wave->element_index].treshold)
		{
			wave->counter = 0;

			wave->retry = 1;
			for (i = 0; i < num_enemies; i++)
			{
				if (!enemies[i].ch.obj.active)
				{
					init_enemy(
						&enemies[i],
						waves[wave->wave_index].elements[wave->element_index].y,
						waves[wave->wave_index].elements[wave->element_index].x,
						&enemy_races[waves[wave->wave_index].elements[wave->element_index].race_index],
						enemy_paths[waves[wave->wave_index].elements[wave->element_index].path_index].num_steps,
						enemy_paths[waves[wave->wave_index].elements[wave->element_index].path_index].path
						);
					wave->retry = 0;
					break;
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
