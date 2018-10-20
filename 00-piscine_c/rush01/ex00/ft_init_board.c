/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 14:02:14 by hdussert          #+#    #+#             */
/*   Updated: 2017/09/10 16:01:15 by hdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbr_is_safe(char board[9][9], char nbr, int col, int row);
void	ft_print_sudoku(char bord[9][9]);

void	ft_pre_init_board(char board[9][9])
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < 9)
	{
		while (++j < 9)
			board[i][j] = '.';
		j = -1;
	}
}

int		ft_init_board(char board[9][9], char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	ft_pre_init_board(board);
	while (i <= 9)
	{
		while (j < 9)
		{
			if (argv[i][j] != '.')
				if (ft_nbr_is_safe(board, argv[i][j], j, i - 1))
					board[i - 1][j] = argv[i][j];
				else
					return (0);
			else
				board[i - 1][j] = '.';
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
