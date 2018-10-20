/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:12:09 by hdussert          #+#    #+#             */
/*   Updated: 2017/09/10 17:34:53 by hdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_print_sudoku(char board[9][9])
{
	int c;
	int r;

	c = 0;
	r = 0;
	while (r < 9)
	{
		while (c < 9)
		{
			ft_putchar(board[r][c]);
			if (c == 8)
				ft_putchar('\n');
			else
				ft_putchar(' ');
			c++;
		}
		c = 0;
		r++;
	}
}
