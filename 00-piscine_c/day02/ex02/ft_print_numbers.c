/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:02:11 by aaiche            #+#    #+#             */
/*   Updated: 2017/08/31 18:13:17 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;
	int	first_number;
	int	last_number;

	first_number = '0';
	last_number = '9';
	i = first_number;
	while (i <= last_number)
	{
		ft_putchar(i);
		i++;
	}
	return ;
}
