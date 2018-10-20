/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 13:47:21 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:12:19 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p_out;
	unsigned long	i;
	unsigned long	j;

	if (s == NULL)
		return (NULL);
	if ((p_out = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (i < len)
	{
		p_out[i] = s[start + i];
		i++;
	}
	p_out[i] = '\0';
	return (p_out);
}
