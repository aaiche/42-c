/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:28:30 by aaiche            #+#    #+#             */
/*   Updated: 2017/08/31 18:15:38 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	i;
	int	first_letter;
	int	last_letter;

	first_letter = 'a';
	last_letter = 'z';
	i = last_letter;
	while (i >= first_letter)
	{
		ft_putchar(i);
		i--;
	}
	return ;
}
