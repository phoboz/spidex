// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "wave.h"

// ---------------------------------------------------------------------------

#define NUM_ELMTS(item)	(sizeof(item) / sizeof(item[0]))

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

const struct enemy_path l_path_1[] =
{
	/* treshold		dir */
	{40,				DIR_LEFT},
	{100,			DIR_UP},
	{100,			DIR_DOWN},
	{40,				DIR_RIGHT}
};

const struct enemy_path l_path_2[] =
{
	/* treshold		dir */
	{50,				DIR_DOWN},
	{100,			DIR_LEFT},
	{100,			DIR_RIGHT},
	{50,				DIR_UP}
};

const struct enemy_path l_path_3[] =
{
	/* treshold		dir */
	{40,				DIR_RIGHT},
	{100,			DIR_DOWN},
	{100,			DIR_UP},
	{40,				DIR_LEFT}
};

const struct enemy_path l_path_4[] =
{
	/* treshold		dir */
	{50,				DIR_UP},
	{100,			DIR_RIGHT},
	{100,			DIR_LEFT},
	{40,				DIR_DOWN}
};

const struct enemy_path square_stop_path[] =
{
	/* treshold		dir */
	{24,				DIR_RIGHT},
	{24,				DIR_NONE},
	{24,				DIR_DOWN},
	{24,				DIR_NONE},
	{24,				DIR_LEFT},
	{24,				DIR_NONE},
	{24,				DIR_UP},
	{24,				DIR_NONE}
};

const struct path_element enemy_paths[] =
{
	/*	num_steps						reference			*/
	{	NUM_ELMTS(square_path),		square_path		},
	{	NUM_ELMTS(circular_path),		circular_path		},
	{	NUM_ELMTS(l_path_1),			l_path_1			},
	{	NUM_ELMTS(l_path_2),			l_path_2			},
	{	NUM_ELMTS(l_path_3),			l_path_3			},
	{	NUM_ELMTS(l_path_4),			l_path_4			},
	{	NUM_ELMTS(square_stop_path),	square_stop_path	},
};

const struct wave_element wave_1[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	2	},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		0,	0	},
	{	80,			-40,		-20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	2	}
};

const struct wave_element wave_2[] =
{
	/*	treshold		y		x		object_type				object_index			path	param*/
	{	0,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		0,	0	},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		0,	0	},
	{	40,			0,		0,		WAVE_OBJECT_TYPE_WALL,		16,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		17,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		23,					0,	0	},
	{	80,			-40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		0,	0	},
	{	80,			-40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		0,	0	},
	{	80,			20,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BEE,		1,	0	},
	{	120,			-40,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	0	}
};

const struct wave_element wave_3[] =
{
	/*	treshold		y		x		object_type				object_index			path	param*/
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		19,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		20,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		21,					0,	0	},
	{	0,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	10,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	10,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	120,			80,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	0	},
	{	10,			-40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	3	},
	{	10,			-40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	3	},
	{	80,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	3	},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	3	}
};

const struct wave_element wave_4[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		16,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		18,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		20,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		22,					0,	0	},
	{	10,			80,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	1	},
	{	10,			80,		-80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	1	},
	{	10,			-80,		-80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	1	},
	{	10,			-80,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	1	},
	{	0,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	80,			0,		0,		WAVE_OBJECT_TYPE_DEWALL,	16,					0,	0	},
	{	10,			60,		60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	2	},
	{	10,			60,		-60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	2	},
	{	10,			-60,		-60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	2	},
	{	10,			-60,		60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	2	},
	{	0,			100,		100,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		3,	0	},
	{	90,			0,		0,		WAVE_OBJECT_TYPE_DEWALL,	18,					0,	0	},
	{	10,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	3	},
	{	10,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	3	},
	{	10,			-40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	3	},
	{	10,			-40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	3	},
	{	0,			100,		-80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		4,	0	},
	{	80,			0,		0,		WAVE_OBJECT_TYPE_DEWALL,	20,					0,	0	},
	{	10,			20,		20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	10,			20,		-20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	10,			-20,		-20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	10,			-20,		20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	0,			-100,	-100,	WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		5,	0	},
	{	90,			0,		0,		WAVE_OBJECT_TYPE_DEWALL,	22,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	0	},
	{	10,			10,		10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			10,		-10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			-10,		-10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			-10,		10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	0,			12,		-36,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BEE,		1,	0	}
};

const struct wave_element wave_5[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		24,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		25,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		26,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		27,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		28,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		29,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		30,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		31,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_DRAGONFLY,	0,	8	}
};

const struct wave_def waves[] =
{
	/*	num_elmts				wave_elmts	*/
	{	NUM_ELMTS(wave_1),		wave_1	},
	{	NUM_ELMTS(wave_2),		wave_2	},
	{	NUM_ELMTS(wave_3),		wave_3	},
	{	NUM_ELMTS(wave_4),		wave_4	},
	{	NUM_ELMTS(wave_5),		wave_5	},
};

static unsigned int max_waves = 4;

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
	struct wall *walls
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
							i,
							waves[wave->wave_index].elements[wave->element_index].y,
							waves[wave->wave_index].elements[wave->element_index].x,
							&enemy_races[waves[wave->wave_index].elements[wave->element_index].object_index],
							enemy_paths[waves[wave->wave_index].elements[wave->element_index].path_index].num_steps,
							enemy_paths[waves[wave->wave_index].elements[wave->element_index].path_index].path,
							waves[wave->wave_index].elements[wave->element_index].param
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
					if (!walls[i].obj.active)
					{
						init_wall(
							&walls[i],
							waves[wave->wave_index].elements[wave->element_index].object_index
							);
						wave->retry = 0;
						break;
					}
				}
			}
			else if (waves[wave->wave_index].elements[wave->element_index].object_type == WAVE_OBJECT_TYPE_DEWALL)
			{
				for (i = 0; i < num_walls; i++)
				{
					if (walls[i].obj.active)
					{
						if (walls[i].index == waves[wave->wave_index].elements[wave->element_index].object_index)
						{
							deinit_wall(&walls[i]);
							wave->retry = 0;
							break;
						}
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
			deinit_enemy(&enemies[i]);
		}

		for (i = 0; i < num_walls; i++)
		{
			deinit_wall(&walls[i]);
		}

		if (++wave->wave_index > max_waves)
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
