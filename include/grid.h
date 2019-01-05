#ifndef _GRID_H
#define _GRID_H

#define GRID_NUM_CELLS		8
#define GRID_CELL_SIZE		32

#define GRID_NUM_CELLS_SHIFT	3
#define GRID_CELL_SIZE_SHIFT	5

struct grid
{
	struct object *cells[GRID_NUM_CELLS][GRID_NUM_CELLS];
};

void init_grid(
	struct grid *grid
	);

void add_object_grid(
	struct grid *grid,
	struct object *obj
	);

void remove_object_grid(
	struct grid *grid,
	struct object *obj
	);

void move_object_grid(
	struct grid *grid,
	struct object *obj,
	signed int y,
	signed int x
	);

void handle_grid(
	struct grid *grid
	);

#endif
