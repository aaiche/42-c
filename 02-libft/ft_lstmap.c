/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 13:14:56 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 15:54:01 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_lstappend(t_list *p_head, t_list *p_new)
{
	t_list	*p_cursor;

	p_cursor = p_head;
	while (p_cursor->next != NULL)
		p_cursor = p_cursor->next;
	p_cursor->next = p_new;
	return (p_head);
}

static void		ft_dispose(t_list *p_head)
{
	t_list	*p_cursor;
	t_list	*p_tmp;

	if (p_head != NULL)
	{
		p_cursor = p_head->next;
		p_head->next = NULL;
		while (p_cursor != NULL)
		{
			p_tmp = p_cursor->next;
			free(p_cursor->content);
			free(p_cursor);
			p_cursor = p_tmp;
		}
	}
}

t_list			*ft_lstmap(t_list *p_head, t_list *(*f)(t_list *elem))
{
	t_list	*p_cursor;
	t_list	*p_f;
	t_list	*p_new;
	t_list	*p_new_head;

	p_new_head = NULL;
	p_cursor = p_head;
	while (p_cursor != NULL)
	{
		p_f = f(p_cursor);
		if ((p_new = ft_lstnew(p_f->content, p_f->content_size)) == NULL)
		{
			ft_dispose(p_new_head);
			break ;
		}
		else
		{
			if (p_cursor == p_head)
				p_new_head = p_new;
			else
				p_new_head = ft_lstappend(p_new_head, p_new);
		}
		p_cursor = p_cursor->next;
	}
	return (p_new_head);
}
