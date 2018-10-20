/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:22:46 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/04 12:17:47 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;
	int	first_letter;
	int	last_letter;

	first_letter = 'a';
	last_letter = 'z';
	i = first_letter;
	while (i <= last_letter)
	{
		ft_putchar(i);
		i++;
	}
	return ;
}
