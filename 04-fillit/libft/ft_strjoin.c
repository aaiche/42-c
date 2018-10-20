/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:30:25 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:18:51 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p_out;
	size_t	i;
	size_t	j;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	if ((p_out = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		p_out[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		p_out[i + j] = s2[j];
		j++;
	}
	p_out[i + j] = '\0';
	return (p_out);
}
