/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:12:14 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:35:30 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	long	nb_long;
	int		nb_tenth;
	int		nb_modulo_ten;

	nb_long = (long)nb;
	if (nb_long < 0)
	{
		nb_long *= -1;
		ft_putchar('-');
	}
	if (nb_long <= 9)
	{
		ft_putchar(nb_long + '0');
	}
	else
	{
		nb_tenth = nb_long / 10;
		nb_modulo_ten = nb_long % 10;
		ft_putnbr(nb_tenth);
		ft_putchar(nb_modulo_ten + '0');
	}
	return ;
}
