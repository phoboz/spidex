// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "wave.h"

// ---------------------------------------------------------------------------

#define NUM_ELMTS(item)	(sizeof(item) / sizeof(item[0]))

const struct enemy_path still_path[] =
{
	/*	treshold		dir				action			*/
	{	100,			DIR_NONE,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path circular_path_6[] =
{
	/*	treshold		dir				action			*/
	{	6,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	6,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	6,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	6,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	6,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	6,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	6,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	6,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path l_path_1[] =
{
	/*	treshold		dir				action			*/
	{	40,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	100,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	100,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	40,			DIR_RIGHT,		ENEMY_ACTION_MOVE	}
};

const struct enemy_path l_path_2[] =
{
	/*	treshold		dir				action			*/
	{	50,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	100,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	100,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	50,			DIR_UP,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path l_path_3[] =
{
	/*	treshold		dir				action			*/
	{	40,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	100,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	100,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	40,			DIR_LEFT,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path l_path_4[] =
{
	/*	treshold		dir				action			*/
	{	50,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	100,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	100,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	40,			DIR_DOWN,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path circular_sdl_path[] =
{
	/*	treshold		dir				action			*/
	{	12,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	12,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	12,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	12,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	12,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	12,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path circular_sdia_path[] =
{
	/*	treshold		dir				action			*/
	{	12,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	12,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	12,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	12,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},
	{	12,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	12,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path circular_path_12[] =
{
	/*	treshold		dir				action			*/
	{	12,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	12,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	12,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	12,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	12,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	12,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path circular_path_18[] =
{
	/*	treshold		dir				action			*/
	{	18,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	18,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	18,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	18,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	18,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	18,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	18,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	18,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path circular_path_24[] =
{
	/*	treshold		dir				action			*/
	{	24,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	24,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	24,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	24,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	24,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	24,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	24,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	24,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path down_path[] =
{
	/*	treshold		dir				action			*/
	{	38,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	38,			DIR_UP,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path down_right_path[] =
{
	/*	treshold		dir				action			*/
	{	34,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	},
	{	34,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	}
};

const struct enemy_path right_path[] =
{
	/*	treshold		dir				action			*/
	{	34,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	34,			DIR_LEFT,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path up_right_path[] =
{
	/*	treshold		dir				action			*/
	{	34,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	34,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path up_path[] =
{
	/*	treshold		dir				action			*/
	{	38,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	38,			DIR_DOWN,			ENEMY_ACTION_MOVE	}
};

const struct enemy_path up_left_path[] =
{
	/*	treshold		dir				action			*/
	{	34,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	34,			DIR_DOWN_RIGHT,	ENEMY_ACTION_MOVE	}
};

const struct enemy_path left_path[] =
{
	/*	treshold		dir				action			*/
	{	34,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	34,			DIR_RIGHT,		ENEMY_ACTION_MOVE	}
};

const struct enemy_path down_left_path[] =
{
	/*	treshold		dir				action			*/
	{	34,			DIR_DOWN_LEFT,	ENEMY_ACTION_MOVE	},
	{	34,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	}
};

const struct enemy_path stump_path[] =
{
	/*	treshold		dir				action			*/
	{	60,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	/* fire cluster of 3 projectiles in 4 directions  ccw */
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},
	{	60,			DIR_NONE,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},
	{	0,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	60,			DIR_NONE,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	60,			DIR_NONE,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	30,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	/* move to 4 corners and fire cluster of 3 projectiles 2 inwards, and 1 outward in each corner */
	{	50,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	40,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	{	100,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	40,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	{	100,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},
	{	40,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	{	100,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	40,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	/* Move back to the center */
	{	50,			DIR_UP_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	20,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	/* Fire rapidly in all directions ccw */
	{	10,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	10,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},
	{	10,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	10,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	10,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	10,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	10,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	10,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	20,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	/* move to 4 far corners and fire cluster of 3 projectiles inwards in each stop point */
	{	100,			DIR_UP_LEFT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},
	{	0,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},

	/* middle point */
	{	100,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},

	/* corner */
	{	100,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},

	/* middle point */
	{	100,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},

	/* corner */
	{	100,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},

	/* middle point */
	{	100,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},

	/* corner */
	{	100,			DIR_LEFT,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},

	/* middle point */
	{	100,			DIR_UP,			ENEMY_ACTION_MOVE	},
	{	0,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	0,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	},

	/* move back to middle */
	{	100,			DIR_RIGHT,		ENEMY_ACTION_MOVE	},
	{	0,			DIR_DOWN,			ENEMY_ACTION_MOVE	},
	{	20,			DIR_NONE,			ENEMY_ACTION_MOVE	},

	/* Fire rapidly in all directions cw */
	{	10,			DIR_DOWN,			ENEMY_ACTION_SHOOT	},
	{	10,			DIR_DOWN_LEFT,	ENEMY_ACTION_SHOOT	},
	{	10,			DIR_LEFT,			ENEMY_ACTION_SHOOT	},
	{	10,			DIR_UP_LEFT,		ENEMY_ACTION_SHOOT	},
	{	10,			DIR_UP,			ENEMY_ACTION_SHOOT	},
	{	10,			DIR_UP_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	10,			DIR_RIGHT,		ENEMY_ACTION_SHOOT	},
	{	10,			DIR_DOWN_RIGHT,	ENEMY_ACTION_SHOOT	}
};

const struct path_element enemy_paths[] =
{
	/*	id		num_steps						reference			*/
	{	/*0 */	NUM_ELMTS(still_path),			still_path		},
	{	/*1 */	NUM_ELMTS(circular_path_6),		circular_path_6	},
	{	/*2 */	NUM_ELMTS(l_path_1),			l_path_1			},
	{	/*3 */	NUM_ELMTS(l_path_2),			l_path_2			},
	{	/*4 */	NUM_ELMTS(l_path_3),			l_path_3			},
	{	/*5 */	NUM_ELMTS(l_path_4),			l_path_4			},
	{	/*6 */	NUM_ELMTS(circular_sdl_path),	circular_sdl_path	},
	{	/*7 */	NUM_ELMTS(circular_sdia_path),	circular_sdia_path	},
	{	/*8 */	NUM_ELMTS(circular_path_12),	circular_path_12	},
	{	/*9 */	NUM_ELMTS(circular_path_18),	circular_path_18	},
	{	/*10*/	NUM_ELMTS(circular_path_24),	circular_path_24	},
	{	/*11*/	NUM_ELMTS(down_path),			down_path			},
	{	/*12*/	NUM_ELMTS(down_right_path),		down_right_path	},
	{	/*13*/	NUM_ELMTS(right_path),			right_path		},
	{	/*14 */	NUM_ELMTS(up_right_path),		up_right_path		},
	{	/*15 */	NUM_ELMTS(up_path),			up_path			},
	{	/*16 */	NUM_ELMTS(up_left_path),		up_left_path		},
	{	/*17*/	NUM_ELMTS(left_path),			left_path			},
	{	/*18*/	NUM_ELMTS(down_left_path),		down_left_path	},
	{	/*19*/	NUM_ELMTS(stump_path),			stump_path		}
};

const struct wave_element wave_1[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	2	},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		1,	0	},
	{	80,			-40,		-20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	2	}
};

const struct wave_element wave_2[] =
{
	/*	treshold		y		x		object_type				object_index			path	param*/
	{	0,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		1,	0	},
	{	80,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		1,	0	},
	{	40,			0,		0,		WAVE_OBJECT_TYPE_WALL,		16,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		17,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		23,					0,	0	},
	{	80,			-40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		1,	0	},
	{	80,			-40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_FLY,		1,	0	},
	{	80,			20,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BEE,		6,	2	},
	{	120,			-40,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	14	}
};

const struct wave_element wave_3[] =
{
	/*	treshold		y		x		object_type				object_index			path	param*/
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		19,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		20,					0,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_WALL,		21,					0,	0	},
	{	30,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	10,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	10,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	120,			80,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	14	},
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
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	14	},
	{	10,			10,		10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			10,		-10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			-10,		-10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			-10,		10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	0,			12,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BEE,		7,	2	}
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
	{	60,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_DRAGONFLY,	0,	8	}
};

const struct wave_element wave_6[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	14	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	4	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	4	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	5	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	5	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	6	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	6	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	7	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	7	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	8	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUTTERFLY,	0,	8	}
};

const struct wave_element wave_7[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			80,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			80,		-80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-80,		-80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-80,		80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	0,			-100,	80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		2,	0	},
	{	100,			60,		60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			60,		-60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-60,		-60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-60,		60,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	0,			100,		100,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		3,	0	},
	{	100,			40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-40,		-40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-40,		40,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	0,			100,		-80,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		4,	0	},
	{	100,			20,		20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			20,		-20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-20,		-20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-20,		20,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	0,			-100,	-100,	WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MINE,		5,	0	},
	{	100,			10,		10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			10,		-10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-10,		-10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	},
	{	100,			-10,		10,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_ANT,		0,	14	}
};

const struct wave_element wave_8[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	18,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	17,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	16,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	15,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	14,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	13,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	12,	0	},
	{	0,			6,		-28,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	1,	0	},
	{	40,			12,		-56,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	8,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	9,	0	},
	{	40,			18,		-84,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	10,	0	},
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_SWALLOW,	11,	0	}

};

const struct wave_element wave_9[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_BUG,		0,	14	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	4	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	5	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	6	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	6	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	6	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	7	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	7	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	7	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	8	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	8	},
	{	10,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_MOSQUITO,	0,	8	}
};

const struct wave_element wave_10[] =
{
	/*	treshold		y		x		object_type				object_index			path	param */
	{	0,			0,		0,		WAVE_OBJECT_TYPE_ENEMY,	ENEMY_RACE_STUMP,		19,	6	}
};

const struct wave_def waves[] =
{
	/*	num_elmts				wave_elmts	*/
	{	NUM_ELMTS(wave_1),		wave_1	},
	{	NUM_ELMTS(wave_2),		wave_2	},
	{	NUM_ELMTS(wave_3),		wave_3	},
	{	NUM_ELMTS(wave_4),		wave_4	},
	{	NUM_ELMTS(wave_5),		wave_5	},
	{	NUM_ELMTS(wave_6),		wave_6	},
	{	NUM_ELMTS(wave_7),		wave_7	},
	{	NUM_ELMTS(wave_8),		wave_8	},
	{	NUM_ELMTS(wave_9),		wave_9	},
	{	NUM_ELMTS(wave_10),	wave_10	}
};

static const unsigned int max_waves = 10;/*NUM_ELMTS(waves) + 1;*/

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

void close_wave(
	struct wave *wave
	)
{
	struct enemy *enemy;
	struct wall *wall;
	struct wall *rem_wall;

	enemy = (struct enemy *) enemy_list;
	while (enemy != 0)
	{
		enemy->state = ENEMY_STATE_DYING;
		enemy->state_counter = 0;
		enemy = (struct enemy *) enemy->ch.obj.next;
	}

	wall = (struct wall *) wall_list;
	while (wall != 0)
	{
		rem_wall = wall;
		wall = (struct wall *) wall->obj.next;
		deinit_wall(rem_wall);
	}

	wave->new_wave = 0;
}
	
unsigned int move_wave(
	struct wave *wave
	)
{
	struct enemy *enemy;
	struct wall *wall;
	unsigned int result = 0;

	if (!wave->new_wave)
	{
		if (wave->retry || ++wave->counter >= waves[wave->wave_index].elements[wave->element_index].treshold)
		{
			wave->counter = 0;

			wave->retry = 1;
			if (waves[wave->wave_index].elements[wave->element_index].object_type == WAVE_OBJECT_TYPE_ENEMY)
			{
				if (enemy_free_list != 0)
				{
					init_enemy(
						(struct enemy *) enemy_free_list,
						waves[wave->wave_index].elements[wave->element_index].y,
						waves[wave->wave_index].elements[wave->element_index].x,
						&enemy_races[waves[wave->wave_index].elements[wave->element_index].object_index],
						enemy_paths[waves[wave->wave_index].elements[wave->element_index].path_index].num_steps,
						enemy_paths[waves[wave->wave_index].elements[wave->element_index].path_index].path,
						waves[wave->wave_index].elements[wave->element_index].param
						);
					wave->retry = 0;
				}
			}
			else if (waves[wave->wave_index].elements[wave->element_index].object_type == WAVE_OBJECT_TYPE_WALL)
			{
				if (wall_free_list != 0)
				{
					init_wall(
						(struct wall *) wall_free_list,
						waves[wave->wave_index].elements[wave->element_index].object_index
						);
					wave->retry = 0;
				}
			}
			else if (waves[wave->wave_index].elements[wave->element_index].object_type == WAVE_OBJECT_TYPE_DEWALL)
			{
				wall = (struct wall *) wall_list;
				while (wall != 0)
				{
					if (wall->index == waves[wave->wave_index].elements[wave->element_index].object_index)
					{
						deinit_wall(wall);
						wave->retry = 0;
						break;
					}

					wall = (struct wall *) wall->obj.next;
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
		result = wave->wave_index + 1;
		enemy = (struct enemy *) enemy_list;
		while (enemy != 0)
		{
			if (enemy->num_hits > 0)
			{
				result = 0;
				break;
			}

			enemy = (struct enemy *) enemy->ch.obj.next;
		}

		if (result)
		{
			close_wave(wave);

			if (++wave->wave_index >= max_waves)
			{
				wave->wave_index = 0;
			}
		}
	}

	return result;
}

// ***************************************************************************
// end of file
// ***************************************************************************
