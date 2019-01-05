// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "object.h"
#include "grid.h"

// ---------------------------------------------------------------------------

void init_grid(
	struct grid *grid
	)
{
	unsigned int y, x;

	for (x = 0; x < GRID_NUM_CELLS; x++)
	{
		for (y = 0; y < GRID_NUM_CELLS; y++)
		{
			grid->cells[x][y] = 0;
		}
	}
}

void add_object_grid(
	struct grid *grid,
	struct object *obj
	)
{
	unsigned int obj_x = (unsigned int) obj->x;
	unsigned int obj_y = (unsigned int) obj->y;

	unsigned int cell_x = (obj_x + 127) >> GRID_CELL_SIZE_SHIFT;
	unsigned int cell_y = (obj_y + 127) >> GRID_CELL_SIZE_SHIFT;

	obj->prev = 0;
	obj->next = grid->cells[cell_x][cell_y];
	grid->cells[cell_x][cell_y] = obj;

	if (obj->next != 0)
	{
		obj->next->prev = obj;
	}
}

void remove_object_grid(
	struct grid *grid,
	struct object *obj
	)
{
	unsigned int obj_x = (unsigned int) obj->x;
	unsigned int obj_y = (unsigned int) obj->y;

	unsigned int cell_x = (obj_x + 127) >> GRID_CELL_SIZE_SHIFT;
	unsigned int cell_y = (obj_y + 127) >> GRID_CELL_SIZE_SHIFT;

	if (obj->prev != 0)
	{
		obj->prev->next = obj->next;
	}

	if (obj->next != 0)
	{
		obj->next->prev = obj->prev;
	}

	if (grid->cells[cell_x][cell_y] == obj)
	{
		grid->cells[cell_x][cell_y] = obj->next;
	}
}

void move_object_grid(
	struct grid *grid,
	struct object *obj,
	signed int y,
	signed int x
	)
{
	unsigned int obj_x = (unsigned int) obj->x;
	unsigned int obj_y = (unsigned int) obj->y;
	unsigned int new_x = (unsigned int) x;
	unsigned int new_y = (unsigned int) y;

	unsigned int old_cell_x = (obj_x + 127) >> GRID_CELL_SIZE_SHIFT;
	unsigned int old_cell_y = (obj_y + 127) >> GRID_CELL_SIZE_SHIFT;

	unsigned int cell_x = (new_x + 127) >> GRID_CELL_SIZE_SHIFT;
	unsigned int cell_y = (new_y + 127) >> GRID_CELL_SIZE_SHIFT;

	obj->x = x;
	obj->y = y;

	if (old_cell_x == cell_x && old_cell_y == cell_y)
	{
		return;
	}

	if (obj->prev != 0)
	{
		obj->prev->next = obj->next;
	}

	if (obj->next != 0)
	{
		obj->next->prev = obj->prev;
	}

	if (grid->cells[old_cell_x][old_cell_y] == obj)
	{
		grid->cells[old_cell_x][old_cell_y] = obj->next;
	}
	
	add_object_grid(grid, obj);
}

static void handle_object_grid(
	struct object *obj1,
	struct object *obj2
	)
{
	struct object *other = obj2;

	while (other != 0)
	{
		if (hit_object(obj1, other))
		{
			handle_object_hit(obj1, other);
		}

		other = other->next;
	}
}

static void handle_cell_grid(
	struct grid *grid,
	unsigned int x,
	unsigned int y
	)
{
	struct object *obj = grid->cells[x][y];

	while (obj != 0)
	{
		// Handle other objects in current cell
		handle_object_grid(obj, obj->next);

		// Handle neighboring cells
		if (x > 0 && y > 0)
		{
			handle_object_grid(obj, grid->cells[x - 1][y - 1]);
		}

		if (x > 0)
		{
			handle_object_grid(obj, grid->cells[x - 1][y]);
		}

		if (y > 0)
		{
			handle_object_grid(obj, grid->cells[x][y - 1]);
		}

		if (x > 0 && y < GRID_NUM_CELLS - 1)
		{
			handle_object_grid(obj, grid->cells[x - 1][y + 1]);
		}

		// Move on to next object in current cell
		obj = obj->next;
	}
}

void handle_grid(
	struct grid *grid
	)
{
	unsigned int y, x;

	for (x = 0; x < GRID_NUM_CELLS; x++)
	{
		for (y = 0; y < GRID_NUM_CELLS; y++)
		{
			handle_cell_grid(grid, x, y);
		}
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
