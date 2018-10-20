/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 16:07:10 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:12:57 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_get_first_non_white(char const *s)
{
	char	*p_start;

	p_start = (char *)s;
	while ((*p_start == ' ') || (*p_start == '\n') || (*p_start == '\t'))
		p_start++;
	return (p_start);
}

static char	*ft_get_last_non_white(char const *s)
{
	char	*p_end;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s_len)
		return (NULL);
	p_end = (char *)&(s[s_len - 1]);
	while ((*p_end == ' ') || (*p_end == '\n') || (*p_end == '\t'))
		p_end--;
	return (p_end);
}

static char	*ft_alloc_and_fill_output(char **pp_start, char **pp_end)
{
	char	*p_start;
	char	*p_end;
	size_t	out_len;
	size_t	i;
	char	*p_out;

	p_start = *pp_start;
	p_end = *pp_end;
	out_len = p_end - p_start;
	out_len += 1;
	if ((p_out = ft_strnew(out_len)) == NULL)
		return (NULL);
	i = 0;
	while (i < out_len)
	{
		p_out[i] = *p_start;
		p_start++;
		i++;
	}
	p_out[i] = '\0';
	return (p_out);
}

char		*ft_strtrim(char const *s)
{
	size_t	s_len;
	char	*p_out;
	char	*p_start;
	char	*p_end;

	if (s == NULL)
		return (NULL);
	p_start = ft_get_first_non_white(s);
	s_len = ft_strlen(s);
	if (*p_start == '\0' || !s_len)
	{
		if ((p_out = ft_strnew(0)) == NULL)
			return (NULL);
		*p_out = '\0';
		return (p_out);
	}
	p_end = ft_get_last_non_white(s);
	p_out = ft_alloc_and_fill_output(&p_start, &p_end);
	return (p_out);
}
