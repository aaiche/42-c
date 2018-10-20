/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:33:14 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:36:00 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	nb_long;
	int		nb_tenth;
	int		nb_modulo_ten;

	nb_long = (long)nb;
	if (nb_long < 0)
	{
		nb_long *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb_long <= 9)
	{
		ft_putchar_fd(nb_long + '0', fd);
	}
	else
	{
		nb_tenth = nb_long / 10;
		nb_modulo_ten = nb_long % 10;
		ft_putnbr_fd(nb_tenth, fd);
		ft_putchar_fd(nb_modulo_ten + '0', fd);
	}
	return ;
}
