/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:36:33 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 15:19:02 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*new_t(char *s, t_u32 rank)
{
	t_tetri	*t;

	if ((s == NULL) || (*s == '\0'))
		return (NULL);
	if ((t = (t_tetri*)ft_memalloc(sizeof(*t))) == NULL)
		return (NULL);
	t->id = 'A' - 1 + rank;
	t->rank = rank;
	t->is_valid = 1;
	t->sn = ft_strdup(s);
	t->bitmap = set_bitmap(t->sn);
	t->bitmap = get_ordered_bitmap(t->bitmap);
	if (!bitmap_to_str(&(t->sn), t->bitmap))
		t->is_valid = 0;
	else
		t->is_valid = is_tetriminos_valid(&(t->sn), t->bitmap);
	if (t->is_valid)
	{
		set_position(&(t->pos[0]), t->bitmap);
		set_highest_position(&(t->h_pos), &(t->pos[0]));
		t->tetriminos_form = get_tetriminos_form(t->bitmap);
	}
	return (t);
}

void	free_t(t_tetri *t)
{
	free((void*)t->sn);
	t->sn = NULL;
	free((void*)t);
	t = NULL;
	return ;
}

void	set_position(t_position *pos, t_u32 bitmap)
{
	t_u32	n;
	t_u32	i;

	i = 0;
	n = 0;
	while (i < 16)
	{
		if (bitmap & (0x8000 >> i))
		{
			pos[n].x = i / 4;
			pos[n].y = i - 4 * (i / 4);
			n++;
		}
		i++;
	}
	return ;
}

void	set_highest_position(t_position *h_pos, t_position *pos)
{
	t_u32	sum1;
	t_u32	sum2;
	t_u32	j;

	j = 0;
	while (j < 4)
	{
		sum1 = pos[j].x * 5 + pos[j].y;
		sum2 = h_pos->x * 5 + h_pos->y;
		if (sum2 < sum1)
		{
			h_pos->x = pos[j].x;
			h_pos->y = pos[j].y;
		}
		j++;
	}
	return ;
}
