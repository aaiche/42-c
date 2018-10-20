/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 17:28:46 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 15:53:08 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_node	*create(t_tetri *t, unsigned int rank, t_node *next)
{
	t_node	*new_node;

	if ((new_node = (t_node*)ft_memalloc(sizeof(t_node))) == NULL)
		return (NULL);
	new_node->rank = rank;
	new_node->t = t;
	new_node->grid_pos = 0;
	new_node->t_form = t->tetriminos_form;
	new_node->next = next;
	return (new_node);
}

t_node	*append(t_node *head, t_tetri *t, unsigned int rank)
{
	t_node	*new_node;
	t_node	*cursor;

	cursor = head;
	if (cursor == NULL)
	{
		new_node = create(t, rank, NULL);
		head = new_node;
	}
	else
	{
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		new_node = create(t, rank, NULL);
		cursor->next = new_node;
	}
	return (head);
}

t_node	*search(t_node *head, unsigned int rank)
{
	t_node	*cursor;

	cursor = head;
	while (cursor != NULL)
	{
		if (cursor->rank == rank)
			return (cursor);
		cursor = cursor->next;
	}
	return (NULL);
}

void	traverse(t_node *head, void (*f)(t_node *))
{
	t_node	*cursor;

	cursor = head;
	while (cursor != NULL)
	{
		f(cursor);
		cursor = cursor->next;
	}
	return ;
}

void	dispose(t_node *head)
{
	t_node *cursor;
	t_node *tmp;

	cursor = head;
	while (cursor != NULL)
	{
		tmp = cursor->next;
		cursor->rank = 0;
		cursor->grid_pos = 0;
		free_t(cursor->t);
		cursor->t = NULL;
		free(cursor);
		cursor = tmp;
	}
	return ;
}
