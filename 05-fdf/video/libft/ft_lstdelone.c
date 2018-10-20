/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 17:32:20 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:40:58 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*p_elt;

	p_elt = *alst;
	(*del)(p_elt->content, p_elt->content_size);
	p_elt->next = NULL;
	free((void *)p_elt);
	p_elt = NULL;
	*alst = p_elt;
	return ;
}
