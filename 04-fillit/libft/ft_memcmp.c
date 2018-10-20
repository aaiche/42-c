/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:40:56 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/14 17:16:51 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s10, const void *s20, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				diff;

	s1 = (unsigned char*)s10;
	s2 = (unsigned char*)s20;
	if (!n)
		return (0);
	diff = 0;
	while (n)
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			break ;
		s1++;
		s2++;
		n--;
	}
	return (diff);
}
