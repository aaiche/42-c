/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 18:00:55 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 15:18:14 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_u32	ft_ceil_sqrt(t_u32 nb)
{
	t_u32	i;

	i = 1;
	while ((i <= 46340) && (i * i < nb))
	{
		i++;
	}
	return (i);
}

void	error_msg(char *msg)
{
	ft_putstr_fd("error\n", STDOUT_FILENO);
	if ((msg != NULL) && (*msg != '\0'))
		ft_putstr_fd(msg, STDOUT_FILENO);
	exit(-1);
}

void	check_args(char *argv0, int argc)
{
	if (argc != 2)
	{
		ft_putstr_fd("usage: ", STDOUT_FILENO);
		ft_putstr_fd(argv0, STDOUT_FILENO);
		ft_putstr_fd(" file\n", STDOUT_FILENO);
		exit(-1);
	}
	return ;
}

t_u32	check_num_tetris(t_grid *g)
{
	if (!((g->num_tetris >= 1) && (g->num_tetris <= 26)))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
