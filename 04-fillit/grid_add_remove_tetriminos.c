/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_add_remove_tetriminos.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 16:58:49 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 18:17:07 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_u32	fill_g_slot(char *grid_tab, t_u32 i, t_u32 square, t_tetri *t)
{
	struct s_position	*pos0;
	struct s_position	*pos1;
	struct s_position	*pos2;
	struct s_position	*pos3;
	struct s_position	*h_pos;

	pos0 = &t->pos[0];
	pos1 = &t->pos[1];
	pos2 = &t->pos[2];
	pos3 = &t->pos[3];
	h_pos = &t->h_pos;
	if ((grid_tab[i + pos0->x * (square + 1) + pos0->y] == '.') &&
		(grid_tab[i + pos1->x * (square + 1) + pos1->y] == '.') &&
		(grid_tab[i + pos2->x * (square + 1) + pos2->y] == '.') &&
		(grid_tab[i + pos3->x * (square + 1) + pos3->y] == '.'))
	{
		grid_tab[i + pos0->x * (square + 1) + pos0->y] = t->id;
		grid_tab[i + pos1->x * (square + 1) + pos1->y] = t->id;
		grid_tab[i + pos2->x * (square + 1) + pos2->y] = t->id;
		grid_tab[i + pos3->x * (square + 1) + pos3->y] = t->id;
		return (1);
	}
	return (0);
}

t_u32	add_tetriminos_to_grid(t_grid *g, t_u32 rank)
{
	t_node	*n;
	t_u32	i;

	n = get_tetriminos(g, rank);
	if (g->tetris_pos[n->t->tetriminos_form] != 0)
		n->grid_pos = g->tetris_pos[n->t->tetriminos_form];
	i = n->grid_pos;
	if (i != 0)
		i = i - (n->t->pos[0].x * (g->square + 1) + n->t->pos[0].y);
	if (((n->t->h_pos.x) && (n->t->h_pos.x > g->square - 1)) ||
		((n->t->h_pos.y) && (n->t->h_pos.y > g->square - 1)) ||
		(i + (n->t->h_pos.x * (g->square + 1) + n->t->h_pos.y) > g->grid_size))
		return (0);
	while (i < g->grid_size - (n->t->h_pos.x * (g->square + 1) + n->t->h_pos.y))
	{
		if (fill_g_slot(g->grid_tab, i, g->square, n->t))
		{
			n->grid_pos = i + n->t->pos[0].x * (g->square + 1) + n->t->pos[0].y;
			g->tetris_pos[n->t->tetriminos_form] = n->grid_pos;
			return (1);
		}
		i++;
	}
	return (0);
}

t_u32	reset_g_slot(char *grid_tab, t_u32 i, t_u32 square, t_tetri *t)
{
	struct s_position	*pos0;
	struct s_position	*pos1;
	struct s_position	*pos2;
	struct s_position	*pos3;
	struct s_position	*h_pos;

	pos0 = &t->pos[0];
	pos1 = &t->pos[1];
	pos2 = &t->pos[2];
	pos3 = &t->pos[3];
	h_pos = &t->h_pos;
	if ((grid_tab[i + pos0->x * (square + 1) + pos0->y] == t->id) &&
		(grid_tab[i + pos1->x * (square + 1) + pos1->y] == t->id) &&
		(grid_tab[i + pos2->x * (square + 1) + pos2->y] == t->id) &&
		(grid_tab[i + pos3->x * (square + 1) + pos3->y] == t->id))
	{
		grid_tab[i + pos0->x * (square + 1) + pos0->y] = '.';
		grid_tab[i + pos1->x * (square + 1) + pos1->y] = '.';
		grid_tab[i + pos2->x * (square + 1) + pos2->y] = '.';
		grid_tab[i + pos3->x * (square + 1) + pos3->y] = '.';
		return (1);
	}
	else
		return (0);
}

t_u32	remove_tetri(t_grid *g, t_u32 rank)
{
	t_node	*node;
	t_tetri	*t;
	t_u32	i;

	node = get_tetriminos(g, rank);
	if (node != NULL)
	{
		t = node->t;
		i = node->grid_pos - (t->pos[0].x * (g->square + 1) + t->pos[0].y);
		if (i >= g->grid_size)
			return (0);
		if (reset_g_slot(g->grid_tab, i, g->square, t))
		{
			node->grid_pos++;
			g->tetris_pos[t->tetriminos_form] = node->grid_pos;
			reset_positon_of_tetriminos(g, node->next);
		}
		else
			return (0);
	}
	else
		return (0);
	return (1);
}

t_u32	store_tetri(t_grid *g, t_tetri *t, t_u32 rank)
{
	t_node	*head;

	if (rank == 0)
		return (0);
	g->num_tetris++;
	head = g->head_of_all_tetris;
	if ((head = append(head, t, rank)) == NULL)
	{
		return (0);
		free_g(g);
	}
	g->head_of_all_tetris = head;
	return (1);
}
