/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:07:22 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:39:16 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*p_head;
	t_list	*p_cursor;

	p_head = lst;
	if (p_head == NULL || f == NULL)
		return ;
	p_cursor = p_head;
	while (p_cursor != NULL)
	{
		(*f)(p_cursor);
		p_cursor = p_cursor->next;
	}
	return ;
}
