/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:09:26 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/24 17:44:33 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_memdel(void **p_ptr)
{
	void	*p_out;

	if (p_ptr == NULL)
		return ;
	p_out = *p_ptr;
	free(p_out);
	p_out = NULL;
	*p_ptr = p_out;
	return ;
}
