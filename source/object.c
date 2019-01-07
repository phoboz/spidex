// ***************************************************************************
// Vectrex C programming file template
// ***************************************************************************

#include <vectrex.h>
#include "generic.h"
#include "grid.h"
#include "object.h"
#include "player.h"
#include "enemy.h"
#include "wall.h"
#include "draw.h"

// ---------------------------------------------------------------------------

void init_object(
	struct object *obj,
	unsigned int type,
	signed int y,
	signed int x,
	signed int h,
	signed int w,
	unsigned int scale,
	const signed char *shape,
	struct grid *grid
	)
{
	obj->active		= 1;
	obj->type			= type;
	obj->check_wall	= 0;

	obj->y = y;
	obj->x = x;
	obj->h = h;
	obj->w = w;
	obj->h_2 = h >> 1;
	obj->w_2 = w >> 1;

	obj->scale = scale;
	obj->shape = shape;

	obj->prev = 0;
	obj->next = 0;
	obj->grid = grid;

	if (obj->type == OBJECT_TYPE_WALL)
	{
		struct wall *wall = (struct wall *) obj;
		add_static_object_grid(grid, obj, wall->y1, wall->x1);
		add_static_object_grid(grid, obj, wall->y2, wall->x2);
	}
	else
	{
		add_object_grid(grid, obj);
	}
}

void deinit_object(
	struct object *obj
	)
{
	if (obj->active)
	{
		if (obj->type == OBJECT_TYPE_WALL)
		{
			struct wall *wall = (struct wall *) obj;
			remove_static_object_grid(obj->grid, obj, wall->y1, wall->x1);
			remove_static_object_grid(obj->grid, obj, wall->y2, wall->x2);
		}
		else
		{
			remove_object_grid(obj->grid, obj);
		}
	}

	obj->active = 0;
}

void move_object(
	struct object *obj,
	signed int y,
	signed int x
	)
{
	if (obj->active)
	{
		obj->check_wall = 0;
		move_object_grid(obj->grid, obj, y, x);
	}
}

unsigned int distance_object(
	struct object *obj1,
	struct object *obj2
	)
{
	signed int dy, dx;
	unsigned int result;

	dy = obj1->y - obj2->y;
	dx = obj1->x - obj2->x;
	result = (unsigned int) abs(dy) + (unsigned int) abs(dx);

	return result;
}

unsigned int hit_object(
	struct object *obj1,
	struct object *obj2
	)
{
	signed int y1, y2;
	signed int x1, x2;
	signed int h1, h2;
	signed int w1, w2;

	unsigned int result = 0;

	if (obj1->active && obj2->active)
	{
		if (obj1->type == OBJECT_TYPE_WALL)
		{
			obj2->check_wall = 1;
		}

		if (obj2->type == OBJECT_TYPE_WALL)
		{
			obj1->check_wall = 1;
		}

        	x1 = obj1->x - obj1->w_2;
        	w2 = obj2->w;
		w1 = obj1->w;
		x2 = obj2->x - obj2->w_2;
    		y1 = obj1->y - obj1->h_2;
    		y2 = obj2->y - obj2->h_2;
    		h2 = obj2->h;
    		h1 = obj1->h;

		if (x1 < x2 + w2 && x1 + w1 > x2 && y1 < y2 + h2 && h1 + y1 > y2)
		{
			result = 1;
		}
	}

	return result;
}

void handle_object_hit(
	struct object *obj1,
	struct object *obj2
	)
{
	if (obj1->type == OBJECT_TYPE_PLAYER)
	{
		struct player *player = (struct player *) obj1;

		if (obj2->type == OBJECT_TYPE_ENEMY)
		{
			struct enemy *enemy = (struct enemy *) obj2;

			if (player->state == PLAYER_STATE_NORMAL)
			{
				if (hit_object_enemy(enemy, &player->ch.obj))
				{
					set_state_player(player, PLAYER_STATE_DYING);
				}
			}
		}
		else if (obj2->type == OBJECT_TYPE_FOOD)
		{
			player->score++;
			deinit_object(obj2);
		}
	}
	else if (obj1->type == OBJECT_TYPE_ENEMY)
	{
		struct enemy *enemy = (struct enemy *) obj1;

		if (obj2->type == OBJECT_TYPE_PLAYER)
		{
			struct player *player = (struct player *) obj2;

			if (player->state == PLAYER_STATE_NORMAL)
			{
				if (hit_object_enemy(enemy, &player->ch.obj))
				{
					set_state_player(player, PLAYER_STATE_DYING);
				}
			}
		}
		else if (obj2->type == OBJECT_TYPE_BULLET)
		{
			if (hit_enemy(enemy))
			{
				deinit_object(obj2);
			}
		}
	}
	else if (obj1->type == OBJECT_TYPE_BULLET)
	{
		if (obj2->type == OBJECT_TYPE_ENEMY)
		{
			struct enemy *enemy = (struct enemy *) obj2;
			if (hit_enemy(enemy))
			{
				deinit_object(obj1);
			}
		}
	}
	else if (obj1->type == OBJECT_TYPE_FOOD)
	{
		if (obj2->type == OBJECT_TYPE_PLAYER)
		{
			struct player *player = (struct player *) obj2;
			player->score++;
			deinit_object(obj1);
		}
	}
}

void draw_object(
	struct object *obj
	)
{
	if (obj->active)
	{
		draw_synced_list_c(obj->shape, obj->y, obj->x, OBJECT_MOVE_SCALE, obj->scale);
	}
}

// ***************************************************************************
// end of file
// ***************************************************************************
