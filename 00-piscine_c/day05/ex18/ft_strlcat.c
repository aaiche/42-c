/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 11:52:59 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 12:53:45 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int				ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

static int				ft_append(char *dest, char *src, unsigned int to_append)
{
	unsigned int	i;

	i = 0;
	while (i < to_append)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

unsigned int			ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	num_chars_to_append;
	unsigned int	rc;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
	{
		num_chars_to_append = 0;
		rc = src_len;
	}
	else
	{
		if ((int)size > 0)
			num_chars_to_append = size - dest_len - 1;
		else
			num_chars_to_append = src_len;
		rc = dest_len + src_len;
	}
	while (*dest != '\0')
		dest++;
	if (num_chars_to_append > 0)
		ft_append(dest, src, num_chars_to_append);
	return (rc);
}
