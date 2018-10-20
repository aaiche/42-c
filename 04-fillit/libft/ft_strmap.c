/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:47:11 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:11:30 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p_out;
	int		str_len;
	int		i;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if ((p_out = ft_strnew(str_len)) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p_out[i] = (*f)(s[i]);
		i++;
	}
	p_out[i] = '\0';
	return (p_out);
}
