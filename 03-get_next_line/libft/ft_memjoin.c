/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:10:14 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/30 17:18:25 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_memjoin(char const *s1, int s1_len, char const *s2, int s2_len)
{
	char	*p_out;
	int		i;
	int		j;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	if ((p_out = ft_memalloc(s1_len + 1 + s2_len + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		p_out[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		p_out[i + j] = s2[j];
		j++;
	}
	p_out[i + j] = '\0';
	return (p_out);
}
