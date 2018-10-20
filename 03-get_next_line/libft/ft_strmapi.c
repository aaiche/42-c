/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 12:18:52 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:11:59 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		p_out[i] = (*f)(i, s[i]);
		i++;
	}
	p_out[i] = '\0';
	return (p_out);
}
