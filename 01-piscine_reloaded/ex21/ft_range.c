/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:42:35 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/09 18:57:43 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*dst;
	int		len;
	int		i;

	if (min >= max)
		return (NULL);
	len = max - min;
	dst = (int *)malloc(len * sizeof(*dst));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = min + i;
		i++;
	}
	return (dst);
}
