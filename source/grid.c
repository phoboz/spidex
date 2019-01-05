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

	unsigned int cell_x = (obj_x + 127) >> GRID_CELL_SHIFT;
	unsigned int cell_y = (obj_y + 127) >> GRID_CELL_SHIFT;

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

	unsigned int cell_x = (obj_x + 127) >> GRID_CELL_SHIFT;
	unsigned int cell_y = (obj_y + 127) >> GRID_CELL_SHIFT;

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

	unsigned int old_cell_x = (obj_x + 127) >> GRID_CELL_SHIFT;
	unsigned int old_cell_y = (obj_y + 127) >> GRID_CELL_SHIFT;

	unsigned int cell_x = (new_x + 127) >> GRID_CELL_SHIFT;
	unsigned int cell_y = (new_y + 127) >> GRID_CELL_SHIFT;

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

static void handle_cell_grid(
	struct object *obj
	)
{
	struct object *other;
	struct object *current = obj;

	while (current != 0)
	{
		other = current->next;
		while (other != 0)
		{
			if (hit_object(current, other))
			{
				handle_object_hit(current, other);
			}
			other = other->next;
		}

		current = current->next;
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
			handle_cell_grid(grid->cells[x][y]);
		}
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
