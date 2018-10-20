/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:08:09 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/30 17:17:59 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_memdup(const char *str, int n)
{
	char	*p_out;
	int		i;

	if ((p_out = ft_memalloc(n + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p_out[i] = str[i];
		i++;
	}
	p_out[i] = '\0';
	return (p_out);
}
