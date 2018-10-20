/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:34:53 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:40:04 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p_head;
	t_list	*p_cursor;
	t_list	*p_tmp;

	p_head = *alst;
	if (p_head != NULL)
	{
		p_cursor = p_head->next;
		ft_lstdelone(&p_head, del);
		while (p_cursor != NULL)
		{
			p_tmp = p_cursor->next;
			ft_lstdelone(&p_cursor, del);
			p_cursor = p_tmp;
		}
	}
	*alst = p_head;
	return ;
}
