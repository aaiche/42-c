/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 11:18:15 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 16:56:04 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

int			ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	s1_len;
	unsigned int	s2_len;
	unsigned int	min_len;
	unsigned int	i;
	unsigned int	diff;

	s1_len = ft_strlen(s1) + 1;
	s2_len = ft_strlen(s2) + 1;
	if (s1_len <= s2_len)
		min_len = s1_len;
	else
		min_len = s2_len;
	if (n >= min_len)
		n = min_len;
	diff = 0;
	i = 0;
	while (i < n)
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}
