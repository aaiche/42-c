/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:07:07 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/29 17:50:41 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst0, const void *src0, size_t n)
{
	char			*dst;
	const	char	*src;

	dst = dst0;
	src = src0;
	if ((dst == NULL) || (src == NULL))
		return (NULL);
	while (n)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	return (dst0);
}
