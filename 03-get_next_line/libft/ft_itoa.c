/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:20:56 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:13:18 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_digits(int nb)
{
	long	n;
	int		num_digits;

	n = (long)nb;
	num_digits = 0;
	if (!n)
		num_digits = 1;
	if (n < 0)
	{
		num_digits++;
		n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		num_digits++;
	}
	return (num_digits);
}

char		*ft_itoa(int nb)
{
	int		num_digits;
	char	*p_out;
	long	n;
	long	n_tenth;

	n = (long)nb;
	num_digits = ft_get_num_digits(n);
	if ((p_out = ft_strnew(num_digits)) == NULL)
		return (NULL);
	p_out[num_digits] = '\0';
	if (!n)
		p_out[0] = '0';
	if (n < 0)
	{
		p_out[0] = '-';
		n *= -1;
	}
	n_tenth = n;
	while (n_tenth > 0)
	{
		p_out[--num_digits] = '0' + n_tenth % 10;
		n_tenth /= 10;
	}
	return (p_out);
}
