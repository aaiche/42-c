/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:07:07 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/18 17:37:15 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst0, const void *src0, size_t n)
{
	char			*dst;
	const	char	*src;

	dst = dst0;
	src = src0;
	while (n)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return (dst0);
}
