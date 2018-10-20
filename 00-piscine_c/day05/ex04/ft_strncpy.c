/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 13:38:59 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 16:52:39 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

static int		ft_strcpy_from_to(char *d, char *s, unsigned f, unsigned t)
{
	unsigned int	i;
	unsigned int	num;

	num = 0;
	i = f;
	while (i < t)
	{
		d[i] = s[i];
		i++;
		num++;
	}
	return (num);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	src_len = ft_strlen(src) + 1;
	if (src_len <= n)
	{
		ft_strcpy_from_to(dest, src, 0, src_len);
		i = src_len;
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		ft_strcpy_from_to(dest, src, 0, n);
	}
	return (dest);
}
