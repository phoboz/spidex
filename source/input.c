// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "object.h"
#include "controller.h"
#include "input.h"

// ---------------------------------------------------------------------------

void init_single_input(void)
{
	enable_controller_1_x();
	enable_controller_1_y();
	disable_controller_2_x();
	disable_controller_2_y();
}

void init_dual_input(void)
{
	enable_controller_1_x();
	enable_controller_1_y();
	enable_controller_2_x();
	enable_controller_2_y();
}

unsigned int get_dir_input_1(
	unsigned int *dir
	)
{
	unsigned int trigger = 0;

	if (Vec_Joy_1_Y > INPUT_JOY_SENSE)
	{
		if (Vec_Joy_1_X > INPUT_JOY_SENSE)
		{
			*dir = DIR_UP_RIGHT;
			trigger = 1;
		}
		else if (Vec_Joy_1_X < -INPUT_JOY_SENSE)
		{
			*dir = DIR_UP_LEFT;
			trigger = 1;
		}
		else
		{
			*dir = DIR_UP;
			trigger = 1;
		}
	}
	else if (Vec_Joy_1_Y < -INPUT_JOY_SENSE)
	{
		if (Vec_Joy_1_X > INPUT_JOY_SENSE)
		{
			*dir =  DIR_DOWN_RIGHT;
			trigger = 1;
		}
		else if (Vec_Joy_1_X < -INPUT_JOY_SENSE)
		{
			*dir = DIR_DOWN_LEFT;
			trigger = 1;
		}
		else
		{
			*dir = DIR_DOWN;
			trigger = 1;
		}
	}
	else
	{
		if (Vec_Joy_1_X > INPUT_JOY_SENSE)
		{
			*dir = DIR_RIGHT;
			trigger = 1;
		}
		else if (Vec_Joy_1_X < -INPUT_JOY_SENSE)
		{
			*dir = DIR_LEFT;
			trigger = 1;
		}
	}

	return trigger;
}

unsigned int get_dir_input_2(
	unsigned int *dir
	)
{
	unsigned int trigger = 0;

	if (Vec_Joy_2_Y > INPUT_JOY_SENSE)
	{
		if (Vec_Joy_2_X > INPUT_JOY_SENSE)
		{
			*dir = DIR_UP_RIGHT;
			trigger = 1;
		}
		else if (Vec_Joy_2_X < -INPUT_JOY_SENSE)
		{
			*dir = DIR_UP_LEFT;
			trigger = 1;
		}
		else
		{
			*dir = DIR_UP;
			trigger = 1;
		}
	}
	else if (Vec_Joy_2_Y < -INPUT_JOY_SENSE)
	{
		if (Vec_Joy_2_X > INPUT_JOY_SENSE)
		{
			*dir =  DIR_DOWN_RIGHT;
			trigger = 1;
		}
		else if (Vec_Joy_2_X < -INPUT_JOY_SENSE)
		{
			*dir = DIR_DOWN_LEFT;
			trigger = 1;
		}
		else
		{
			*dir = DIR_DOWN;
			trigger = 1;
		}
	}
	else
	{
		if (Vec_Joy_2_X > INPUT_JOY_SENSE)
		{
			*dir = DIR_RIGHT;
			trigger = 1;
		}
		else if (Vec_Joy_2_X < -INPUT_JOY_SENSE)
		{
			*dir = DIR_LEFT;
			trigger = 1;
		}
	}

	return trigger;
}

static unsigned int input_status = 0;
#define INPUT_1_LEFT	0x01
#define INPUT_1_RIGHT	0x02
#define INPUT_1_UP		0x04
#define INPUT_1_DOWN	0x08

unsigned int pressed_left_input_1(void)
{
	unsigned int result = 0;

	if (joystick_1_left())
	{
		if ((input_status & INPUT_1_LEFT) == 0x00)
		{
			result = 1;
		}

		input_status |= INPUT_1_LEFT;
	}
	else
	{
		input_status &= ~INPUT_1_LEFT;
	}

	return result;
}

unsigned int pressed_right_input_1(void)
{
	unsigned int result = 0;

	if (joystick_1_right())
	{
		if ((input_status & INPUT_1_RIGHT) == 0x00)
		{
			result = 1;
		}

		input_status |= INPUT_1_RIGHT;
	}
	else
	{
		input_status &= ~INPUT_1_RIGHT;
	}

	return result;
}

unsigned int pressed_up_input_1(void)
{
	unsigned int result = 0;

	if (joystick_1_up())
	{
		if ((input_status & INPUT_1_UP) == 0x00)
		{
			result = 1;
		}

		input_status |= INPUT_1_UP;
	}
	else
	{
		input_status &= ~INPUT_1_UP;
	}

	return result;
}

unsigned int pressed_down_input_1(void)
{
	unsigned int result = 0;

	if (joystick_1_down())
	{
		if ((input_status & INPUT_1_DOWN) == 0x00)
		{
			result = 1;
		}

		input_status |= INPUT_1_DOWN;
	}
	else
	{
		input_status &= ~INPUT_1_DOWN;
	}

	return result;
}

// ***************************************************************************
// end of file
// ***************************************************************************
