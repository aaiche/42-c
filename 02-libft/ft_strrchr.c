/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:09:17 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:23:08 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s0, int c)
{
	char	*s;
	int		found;
	int		str_len;
	int		i;

	s = (char *)s0;
	found = 0;
	str_len = ft_strlen(s);
	i = str_len;
	while (*s != '\0')
		s++;
	while (i >= 0)
	{
		if (*s == (char)c)
		{
			found = 1;
			break ;
		}
		s--;
		i--;
	}
	if (found)
		return (s);
	else
		return (NULL);
}
