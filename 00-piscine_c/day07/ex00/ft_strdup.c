/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:55:49 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 20:29:22 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

char			*ft_strdup(char *src)
{
	char	*p_out;
	int		str_len;
	int		i;

	str_len = ft_strlen(src);
	p_out = (char *)malloc((str_len + 1) * sizeof(p_out));
	if (p_out == NULL)
		return (NULL);
	i = 0;
	while (i < str_len + 1)
	{
		p_out[i] = src[i];
		i++;
	}
	return (p_out);
}
