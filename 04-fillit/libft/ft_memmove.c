/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:39:42 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/29 18:02:02 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst0, const void *src0, size_t len)
{
	char			*dst;
	const	char	*src;

	dst = dst0;
	src = src0;
	if (!len)
		return (dst0);
	if (src < dst)
	{
		while (len)
		{
			dst[len - 1] = src[len - 1];
			len--;
		}
		dst[len] = src[len];
	}
	if (src > dst)
		while (len)
		{
			*dst = *src;
			dst++;
			src++;
			len--;
		}
	return (dst0);
}
