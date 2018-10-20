/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 17:56:48 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/05 10:48:26 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		nb_tenth;
	int		nb_modulo_ten;
	long	nb_in_long;

	nb_in_long = (long)nb;
	if (nb_in_long < 0)
	{
		ft_putchar('-');
		nb_in_long *= -1;
	}
	if (nb_in_long <= 9)
	{
		ft_putchar(nb_in_long + '0');
	}
	else
	{
		nb_tenth = nb_in_long / 10;
		nb_modulo_ten = nb_in_long % 10;
		ft_putnbr(nb_tenth);
		ft_putnbr(nb_modulo_ten);
	}
	return ;
}
