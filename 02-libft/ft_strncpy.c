/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:05:54 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:21:19 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcpy_f_t(char *d, const char *s, unsigned f, unsigned t)
{
	unsigned int	i;
	unsigned int	num;

	num = 0;
	i = f;
	while (i < t)
	{
		d[i] = s[i];
		i++;
		num++;
	}
	return (num);
}

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = ft_strlen(src) + 1;
	if (src_len <= n)
	{
		ft_strcpy_f_t(dst, src, 0, src_len);
		i = src_len;
		while (i < n)
		{
			dst[i] = '\0';
			i++;
		}
	}
	else
	{
		ft_strcpy_f_t(dst, src, 0, n);
	}
	return (dst);
}
