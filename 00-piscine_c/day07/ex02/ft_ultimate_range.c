/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 12:12:38 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 12:22:08 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p_out;
	int	i;
	int	tab_size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab_size = max - min;
	p_out = (int *)malloc(tab_size * sizeof(p_out));
	if (p_out == NULL)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (i < tab_size)
	{
		p_out[i] = min + i;
		i++;
	}
	*range = p_out;
	return (tab_size);
}
