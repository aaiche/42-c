/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:31:03 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 18:15:50 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_grid	*new_grid(t_u32 square)
{
	t_grid	*g;

	if ((g = (t_grid*)ft_memalloc(sizeof(*g))) == NULL)
		return (NULL);
	g->square = square;
	g->grid_size = g->square * (g->square + 1);
	if ((g->grid_tab = (char*)ft_memalloc(g->grid_size * sizeof(char))) == NULL)
	{
		free_g(g);
		return (NULL);
	}
	else
		ft_memset((void*)g->grid_tab, '.', g->grid_size * sizeof(char));
	initiliase_grid(g->grid_tab, g->square, g->grid_size);
	ft_memset(g->tetris_pos, 0, sizeof(g->tetris_pos));
	return (g);
}

void	free_g(t_grid *g)
{
	dispose(g->head_of_all_tetris);
	g->head_of_all_tetris = NULL;
	free(g->grid_tab);
	g->grid_tab = NULL;
	free((void*)g);
	g = NULL;
	return ;
}

t_node	*get_tetriminos(t_grid *g, t_u32 rank)
{
	t_node	*head;
	t_node	*node;

	node = NULL;
	head = g->head_of_all_tetris;
	node = search(head, rank);
	return (node);
}

t_grid	*enlarge_grid(t_grid *g)
{
	t_grid	*bigger_g;

	if ((bigger_g = new_grid(g->square + 1)) == NULL)
	{
		free_g(g);
		return (NULL);
	}
	bigger_g->head_of_all_tetris = g->head_of_all_tetris;
	bigger_g->num_tetris = g->num_tetris;
	free(g->grid_tab);
	g->grid_tab = NULL;
	free(g);
	g = NULL;
	reset_positon_of_tetriminos(bigger_g, bigger_g->head_of_all_tetris);
	return (bigger_g);
}

t_u32	solve(t_grid *g, t_u32 rank)
{
	int	flag;

	flag = 0;
	g->cur_rank = rank;
	flag = add_tetriminos_to_grid(g, rank);
	if (flag == 0)
		if (rank != 1)
			rank = rank - 1;
	if (flag == 1)
	{
		if (rank != g->num_tetris)
			flag = solve(g, rank + 1);
	}
	return (flag);
}
