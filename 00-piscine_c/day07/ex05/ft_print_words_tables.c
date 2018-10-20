/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:06:46 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/20 21:00:30 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str != 0)
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return ;
}

void		ft_print_words_tables(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
	return ;
}
