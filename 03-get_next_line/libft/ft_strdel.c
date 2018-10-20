/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:42:42 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/24 18:08:33 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strdel(char **p_ptr)
{
	char	*p_out;

	if (p_ptr == NULL)
		return ;
	p_out = *p_ptr;
	free((void *)p_out);
	p_out = NULL;
	*p_ptr = p_out;
	return ;
}
