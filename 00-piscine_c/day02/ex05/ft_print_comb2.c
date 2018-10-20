/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 14:26:02 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/04 17:49:17 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		display_numbers(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (!((i == '9') && (j == '8') && (k == '9') && (l == '9')))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

int		cmp_and_display(char i, char j, char k, char l)
{
	if (k > i)
	{
		display_numbers(i, j, k, l);
	}
	if (k == i)
	{
		if (l > j)
		{
			display_numbers(i, j, k, l);
		}
	}
	return (0);
}

int		initialize_array(int *first, int *second)
{
	first[0] = '0';
	first[1] = '1';
	second[0] = '0';
	second[1] = '1';
	return (0);
}

void	ft_print_comb2(void)
{
	int	first[2];
	int	second[2];

	initialize_array(&first[0], &second[0]);
	while (first[0] <= '9')
	{
		first[1] = '0';
		while (first[1] <= '9')
		{
			second[0] = '0';
			while (second[0] <= '9')
			{
				second[1] = '0';
				while (second[1] <= '9')
				{
					cmp_and_display(first[0], first[1], second[0], second[1]);
					second[1]++;
				}
				second[0]++;
			}
			first[1]++;
		}
		first[0]++;
	}
	return ;
}
