/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahayat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 03:47:14 by ahayat            #+#    #+#             */
/*   Updated: 2017/09/02 04:14:32 by ahayat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_letrucnul(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		print_letrucnul();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	a = nb;
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((a % 10) + 48);
}
