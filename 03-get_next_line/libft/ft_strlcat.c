/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:30:37 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:19:34 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	src_len;

	len = 0;
	src_len = ft_strlen(src);
	while (*dst && n > 0)
	{
		dst++;
		len++;
		n--;
	}
	while (*src && n > 1)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	if (n == 1 || *src == 0)
	{
		*dst = '\0';
	}
	return (src_len + len);
}
