/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 15:56:31 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 18:17:26 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	pretty_display_grid(char *grid_tab, int square)
{
	t_u32	i;
	t_u32	grid_size;

	if (grid_tab == NULL)
		return ;
	grid_size = (square + 1) * square;
	i = 0;
	while (i < grid_size)
	{
		ft_putchar(grid_tab[i]);
		i++;
	}
	return ;
}

t_u32	reset_positon_of_tetriminos(t_grid *g, t_node *start_node)
{
	t_node	*cursor;

	cursor = start_node;
	while (cursor != NULL)
	{
		cursor->grid_pos = 0;
		g->tetris_pos[cursor->t_form] = 0;
		cursor = cursor->next;
	}
	return (1);
}

t_u32	initiliase_grid(char *grid_tab, t_u32 square, t_u32 grid_size)
{
	t_u32	i;

	i = square;
	while (i < grid_size)
	{
		grid_tab[i] = '\n';
		i += square + 1;
	}
	return (0);
}

t_u32	check_tetriminos_validity(t_grid *g)
{
	t_node	*head;
	t_node	*cursor;

	head = g->head_of_all_tetris;
	cursor = head;
	while (cursor != NULL)
	{
		if (!cursor->t->is_valid)
			return (0);
		cursor = cursor->next;
	}
	return (1);
}
