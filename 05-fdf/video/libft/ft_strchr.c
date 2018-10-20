/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:56:37 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:15:39 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s0, int c)
{
	char	*s;
	int		found;
	int		str_len;
	int		i;

	s = (char *)s0;
	found = 0;
	str_len = ft_strlen(s);
	i = 0;
	while (i <= str_len)
	{
		if (*s == (char)c)
		{
			found = 1;
			break ;
		}
		s++;
		i++;
	}
	if (found)
		return (s);
	else
		return (NULL);
}
