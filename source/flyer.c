// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "flyer.h"

// ---------------------------------------------------------------------------


void init_flyer(
	struct flyer *flyer,
	signed int y,
	signed int x,
	unsigned int scale,
	signed int speed,
	unsigned int num_steps,
	const struct flyer_path *path,
	unsigned int max_frames,
	unsigned int treshold,
	const signed char **shapes
	)
{
	static unsigned int start_step = 0;

	if (++start_step >= num_steps)
	{
		start_step = 0;
	}

	init_character(&flyer->ch, y, x, scale, speed, treshold, max_frames, shapes);

	flyer->counter		= 0;
	flyer->step_counter	= start_step;
	flyer->num_steps		= num_steps;
	flyer->path			= path;

	set_dir_flyer(flyer, flyer->path[flyer->step_counter].dir);
}

void set_dir_flyer(
	struct flyer *flyer,
	unsigned int dir
	)
{
	if (dir > DIR_DOWN_LEFT) {
         dir = DIR_DOWN;
    }

	set_dir_character(&flyer->ch, dir);

	flyer->ch.base_frame = dir << 1;
}

void move_flyer(
	struct flyer *flyer
	)
{
	if (flyer->ch.obj.active)
	{
		animate_character(&flyer->ch);

		if (++flyer->counter >= flyer->path[flyer->step_counter].treshold)
		{
			flyer->counter = 0;
			set_dir_flyer(flyer, flyer->path[flyer->step_counter].dir);
			if (++flyer->step_counter >= flyer->num_steps)
			{
				flyer->step_counter = 0;
			}
		}

		if (move_character(&flyer->ch))
		{
			if (++flyer->step_counter >= flyer->num_steps)
			{
				flyer->step_counter = 0;
			}
			set_dir_flyer(flyer, flyer->path[flyer->step_counter].dir);
		}
	}
}

void draw_flyer(
	struct flyer *flyer
	)
{
	draw_character(&flyer->ch);
}

// ***************************************************************************
// end of file
// ***************************************************************************
