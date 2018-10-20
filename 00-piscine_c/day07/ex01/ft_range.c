/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 11:24:56 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 11:41:57 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p_out;
	int	i;
	int	tab_size;

	if (min >= max)
		return (NULL);
	tab_size = max - min;
	p_out = (int *)malloc(tab_size * sizeof(p_out));
	if (p_out == NULL)
		return (NULL);
	i = 0;
	while (i < tab_size)
	{
		p_out[i] = min + i;
		i++;
	}
	return (p_out);
}
