/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:08:04 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/09 18:36:54 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	dst = (char*)malloc((src_len + 1) * sizeof(*src));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < src_len + 1)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
