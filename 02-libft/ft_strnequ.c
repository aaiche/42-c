/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:55:06 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:21:52 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		s1_len;
	int		s2_len;
	int		len;
	int		i;

	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	if (!n)
		return (1);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len >= s2_len)
		len = s1_len;
	else
		len = s2_len;
	if ((int)n <= len)
		len = n;
	i = 0;
	while (i < len)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
