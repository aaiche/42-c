/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_sudoku.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 14:44:57 by hdussert          #+#    #+#             */
/*   Updated: 2017/09/10 17:41:14 by hdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbr_is_safe(char board[9][9], char nbr, int col, int row);
void	ft_print_sudoku(char board[9][9]);

void	ft_copy_board(char board[9][9], char solution[9][9])
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < 9)
	{
		while (++j < 9)
			solution[i][j] = board[i][j];
		j = -1;
	}
}

int		ft_resolve_sudoku2(char solution[9][9], char board[9][9], int nb)
{
	char	nbr;
	int		row;
	int		column;
	int		res;

	row = nb / 9;
	column = nb % 9;
	nbr = '0';
	res = 0;
	if (nb == 82)
	{
		ft_copy_board(board, solution);
		return (1);
	}
	else if (board[row][column] != '.')
		res += ft_resolve_sudoku2(solution, board, nb + 1);
	else
		while (++nbr <= '9')
			if (ft_nbr_is_safe(board, nbr, column, row))
			{
				board[row][column] = nbr;
				res += ft_resolve_sudoku2(solution, board, nb + 1);
				board[row][column] = '.';
			}
	return (res);
}
