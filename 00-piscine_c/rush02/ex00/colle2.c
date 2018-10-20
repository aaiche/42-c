/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahayat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 17:12:53 by ahayat            #+#    #+#             */
/*   Updated: 2017/09/16 17:12:54 by ahayat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rush2.h"

int		get_len(char *res, int *c_cols, int *c_rows)
{
	int		index;
	char	line_check[1000000];
	int		col;
	int		row;

	index = 0;
	col = *c_cols;
	row = *c_rows;
	read(0, line_check, 1000000);
	while (line_check[index] != '\0')
	{
		res[index] = line_check[index];
		col++;
		if (line_check[index] == '\n')
		{
			row++;
			if (line_check[index + 1])
				col = 0;
		}
		index++;
	}
	*c_cols = col;
	*c_rows = row;
	return (index);
}

int		get_project(char *src, int c_cols, int c_rows)
{
	int index;
	int index2;
	int project;

	index = 0;
	project = -1;
	while (index < (c_cols * c_rows))
	{
		index2 = 0;
		while (index2 < c_cols)
		{
			project = to_project(src[index2], src[c_cols - 1],
				src[index2 + ((c_rows - 1) * c_cols)], project);
			index2++;
		}
		index++;
	}
	if ((c_rows == 1) && (project >= 2))
	{
		if (c_cols == 1)
			project = 234;
		else if (src[0] == 'A' && src[c_cols - 1] == 'C')
			project = 34;
	}
	return (project);
}

int		main(int argc, char *argv[])
{
	int		project;
	char	res[1000000];
	int		c_rows;
	int		c_cols;
	int		len;

	project = -1;
	c_cols = 0;
	c_rows = 0;
	len = get_len(res, &c_cols, &c_rows);
	project = get_project(res, c_cols, c_rows);
	print(project, c_cols, c_rows);
	return (0);
}
