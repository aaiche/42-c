/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 13:13:26 by hdussert          #+#    #+#             */
/*   Updated: 2017/09/10 21:12:08 by hdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int		ft_check_arg(int argc, char *argv[]);
int		ft_init_board(char board[9][9], char *argv[]);
int		ft_resolve_sudoku2(char solution[9][9], char board[9][9], int nb);
void	ft_print_sudoku(char board[9][9]);

int		main(int argc, char *argv[])
{
	char board[9][9];
	char solution[9][9];

	if (!ft_check_arg(argc, argv) || !ft_init_board(board, argv))
		ft_putstr("Error\n");
	else
	{
		if (ft_resolve_sudoku2(solution, board, 0) != 1)
			ft_putstr("Error\n");
		else
			ft_print_sudoku(solution);
	}
	return (0);
}
