/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:56:26 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:39:40 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *p_new)
{
	t_list	*p_head;

	p_head = *alst;
	if (p_new == NULL)
	{
		return ;
	}
	p_new->next = p_head;
	*alst = p_new;
	return ;
}
