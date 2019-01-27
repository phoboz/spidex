#ifndef _INPUT_H
#define _INPUT_H

#define INPUT_JOY_SENSE		10

void init_single_input(void);
void init_dual_input(void);

unsigned int get_dir_input_1(
	unsigned int *dir
	);

unsigned int get_dir_input_2(
	unsigned int *dir
	);

unsigned int pressed_left_input_1(void);
unsigned int pressed_right_input_1(void);
unsigned int pressed_up_input_1(void);
unsigned int pressed_down_input_1(void);

#endif
