/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 13:10:17 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/19 17:02:51 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		p++;
	}
	return (p - str);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	num_chars_to_copy;
	unsigned int	rc;

	if (size == 0)
	{
		rc = ft_strlen(src);
		num_chars_to_copy = 0;
	}
	else
	{
		num_chars_to_copy = size - 1;
		if (num_chars_to_copy > ft_strlen(src))
			num_chars_to_copy = ft_strlen(src);
		rc = ft_strlen(src);
	}
	i = 0;
	while (i < num_chars_to_copy)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (rc);
}
