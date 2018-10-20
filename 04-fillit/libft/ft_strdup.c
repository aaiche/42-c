/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 12:40:47 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:11:40 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*p_out;
	int		str_len;
	int		i;

	str_len = ft_strlen(str);
	if ((p_out = ft_strnew(str_len)) == NULL)
		return (NULL);
	i = 0;
	while (i < str_len + 1)
	{
		p_out[i] = str[i];
		i++;
	}
	return (p_out);
}
