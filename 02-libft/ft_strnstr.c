/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:57:46 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:22:34 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str0, const char *to_find0, size_t len)
{
	int		i;
	char	*str;
	char	*to_find;
	int		to_find_len;
	int		str_len;

	str = (char *)str0;
	to_find = (char *)to_find0;
	to_find_len = ft_strlen(to_find);
	str_len = ft_strlen(str);
	i = 0;
	if (!str[i] && !to_find[i])
		return (str);
	if (str_len >= (int)len)
		str_len = len;
	while (str_len >= to_find_len)
	{
		if (!ft_memcmp(str, to_find, to_find_len))
			return (char *)str;
		str++;
		str_len--;
	}
	return (NULL);
}
