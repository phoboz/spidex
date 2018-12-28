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
	{6,				DIR_DOWN},
	{6,				DIR_DOWN_RIGHT},
	{6,				DIR_RIGHT},
	{6,				DIR_UP_RIGHT},
	{6,				DIR_UP},
	{6,				DIR_UP_LEFT},
	{6,				DIR_LEFT},
	{6,				DIR_DOWN_LEFT}
};


const struct path_element enemy_paths[] =
{
	/* num_steps	reference */
	{4,			square_path},
	{8,			circular_path}
};

const struct wave_element wave_1[] =
{
	/*	y		x		race_index		path_index	*/
	{	40,		40,		ENEMY_RACE_FLY,	0		},
	{	40,		80,		ENEMY_RACE_BEE,	1		},
	{	-40,		0,		ENEMY_RACE_BUG,	0		}
};

const struct wave waves[] =
{
	/*	num_elmts		wave_elmts	*/
	{	3,			wave_1		}
};

// ***************************************************************************
// end of file
// ***************************************************************************
