/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:05:12 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 15:19:56 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_u32	store_tetris_from_file(t_grid *g, char *file, char *buf)
{
	int		num_bytes_read;
	t_tetri	*t;
	int		fd;
	t_u32	rank;
	t_u32	last_one;

	rank = 1;
	last_one = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	ft_memset((void*)buf, '\0', 20);
	while ((num_bytes_read = read(fd, buf, 20)))
	{
		buf[20] = '\0';
		if (((t = new_t(buf, rank)) == NULL) || (!store_tetri(g, t, rank++)))
			return (0);
		ft_memset((void*)buf, '\0', 20);
		num_bytes_read = read(fd, buf, 1);
		if ((!num_bytes_read && (last_one = 1)) ||
			((num_bytes_read == 1) && (buf[0] != '\n') && (last_one = 0)))
			break ;
		(num_bytes_read == 1) && (buf[0] == '\n') && (last_one = 0);
	}
	close(fd);
	return (last_one);
}

t_u32	map_all_tetriminos(t_grid **p_g, t_u32 rank)
{
	t_grid	*g;
	t_u32	flag;

	g = *p_g;
	g->square = ft_ceil_sqrt(g->num_tetris * 4) - 1;
	if ((g = enlarge_grid(g)) == NULL)
		error_msg("");
	flag = solve(g, rank);
	while (flag == 0)
	{
		if (g->cur_rank == 1)
		{
			if ((g = enlarge_grid(g)) == NULL)
				error_msg("");
		}
		else
		{
			if ((g->cur_rank - 1 == 0) || !remove_tetri(g, g->cur_rank - 1))
				return (0);
			rank = g->cur_rank - 1;
		}
		flag = solve(g, rank);
	}
	*p_g = g;
	return (1);
}

int		main(int argc, char **argv)
{
	t_grid	*g;
	char	buf[BUF_SIZE];

	check_args(argv[0], argc);
	if ((g = new_grid(2)) == NULL)
		error_msg("");
	if (!store_tetris_from_file(g, argv[1], buf) || !check_num_tetris(g))
	{
		free_g(g);
		error_msg("");
	}
	if (!check_tetriminos_validity(g))
	{
		free_g(g);
		error_msg("");
	}
	if (!map_all_tetriminos(&g, 1))
	{
		free_g(g);
		error_msg("");
	}
	pretty_display_grid(g->grid_tab, g->square);
	free_g(g);
	return (1);
}
