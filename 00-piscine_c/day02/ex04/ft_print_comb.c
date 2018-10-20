/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 14:26:02 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/04 15:33:20 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		display_numbers(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = '0';
	while (first <= '9')
	{
		second = '1';
		while (second <= '9')
		{
			third = '2';
			while (third <= '9')
			{
				if ((first < second) && (second < third))
				{
					display_numbers(first, second, third);
				}
				third++;
			}
			second++;
		}
		first++;
	}
	return ;
}
