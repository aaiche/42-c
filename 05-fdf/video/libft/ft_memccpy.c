/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:26:22 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/18 17:37:41 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *d0, const void *s0, int c, size_t n)
{
	unsigned char				*dst;
	const	unsigned	char	*src;
	int							found;

	found = 0;
	dst = (unsigned char*)d0;
	src = (unsigned char*)s0;
	while (n)
	{
		*dst = (unsigned char)*src;
		dst++;
		if ((unsigned char)c == *src)
		{
			found = 1;
			break ;
		}
		src++;
		n--;
	}
	if (found)
		return ((void *)dst);
	else
		return (NULL);
}
