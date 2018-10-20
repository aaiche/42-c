/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_is_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdussert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 16:49:49 by hdussert          #+#    #+#             */
/*   Updated: 2017/09/09 21:59:43 by hdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nbr_is_safe(char board[9][9], char nbr, int col, int row)
{
	int c;
	int r;

	c = -1;
	r = -1;
	while (++r < 9)
		if (board[r][col] == nbr)
			return (0);
	while (++c < 9)
		if (board[row][c] == nbr)
			return (0);
	c = col - (col % 3) - 1;
	r = row - (row % 3) - 1;
	while (++r <= row + (2 - row % 3))
	{
		while (++c <= col + (2 - col % 3))
			if (board[r][c] == nbr)
				return (0);
		c = col - (col % 3) - 1;
	}
	return (1);
}
