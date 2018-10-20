/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:02:57 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/30 17:06:51 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*p_new;

	if ((p_new = (t_list *)malloc(sizeof(*p_new))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		p_new->content = (void*)NULL;
		p_new->content_size = 0;
	}
	else
	{
		p_new->content = (void*)content;
		p_new->content_size = content_size;
	}
	p_new->next = NULL;
	return (p_new);
}
