/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahayat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 17:30:12 by ahayat            #+#    #+#             */
/*   Updated: 2017/09/17 17:30:13 by ahayat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush2.h"

void	print(int project, int c_cols, int c_rows)
{
	if (project == -1)
		write(1, "aucune\n", 7);
	else if ((project >= 0) && (project <= 4))
	{
		write(1, "[colle-0", 8);
		ft_putnbr(project);
		write(1, "] [", 3);
		ft_putnbr(c_cols);
		write(1, "] [", 3);
		ft_putnbr(c_rows);
		write(1, "]\n", 2);
	}
	else if (project == 34)
		print_proj34(c_cols, c_rows);
	else if (project == 234)
		print_proj234(c_cols, c_rows);
}

void	print_proj34(int c_cols, int c_rows)
{
	write(1, "[colle-03] [", 12);
	ft_putnbr(c_cols);
	write(1, "] [", 3);
	ft_putnbr(c_rows);
	write(1, "] || [colle-04] [", 18);
	ft_putnbr(c_cols);
	write(1, "] [", 3);
	ft_putnbr(c_rows);
	write(1, "]\n", 2);
}

void	print_proj234(int c_cols, int c_rows)
{
	write(1, "[colle-02] [", 12);
	ft_putnbr(c_cols);
	write(1, "] [", 3);
	ft_putnbr(c_rows);
	write(1, "] || [colle-03] [", 18);
	ft_putnbr(c_cols);
	write(1, "] [", 3);
	ft_putnbr(c_rows);
	write(1, "] || [colle-03] [", 18);
	ft_putnbr(c_cols);
	write(1, "] [", 3);
	ft_putnbr(c_rows);
	write(1, "]\n", 2);
}
