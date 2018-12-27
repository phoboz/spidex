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
	{3,				DIR_DOWN},
	{3,				DIR_DOWN_RIGHT},
	{3,				DIR_RIGHT},
	{3,				DIR_UP_RIGHT},
	{3,				DIR_UP},
	{3,				DIR_UP_LEFT},
	{3,				DIR_LEFT},
	{3,				DIR_DOWN_LEFT}
};


const struct path_element enemy_paths[] =
{
	/* num_steps	reference */
	{4,			square_path},
	{8,			circular_path}
};


// ***************************************************************************
// end of file
// ***************************************************************************
