/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:53:20 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/21 12:05:57 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s0, int c, size_t n)
{
	unsigned char	*s;
	int				found;

	s = (unsigned char*)s0;
	found = 0;
	while (n)
	{
		if (*s == (unsigned char)c)
		{
			found = 1;
			break ;
		}
		s++;
		n--;
	}
	if (found)
		return ((void *)s);
	else
		return (NULL);
}
