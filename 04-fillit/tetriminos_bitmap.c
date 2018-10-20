/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos_bitmap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 17:37:50 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 15:19:22 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_u32	str_to_bitmap(char *s)
{
	t_u32 bitmap;
	t_u32 i;
	t_u32 num;

	num = 0;
	bitmap = 0;
	if (!((s[4] == '\n') && (s[9] == '\n') &&
		(s[14] == '\n') && (s[19] = '\n')))
		return (bitmap);
	i = 0;
	while (i < ft_strlen(s))
	{
		if (!((s[i] == '#') || (s[i] == '.') || (s[i] == '\n')))
			return (0);
		if (s[i] != '\n')
			bitmap <<= 1;
		if (s[i] == '#')
			bitmap |= 1;
		if (s[i] == '\n')
			num++;
		i++;
	}
	if (num != 4)
		return (0);
	return (bitmap);
}

t_u32	bitmap_to_str(char **p_out_s, t_u32 bitmap)
{
	char	*out_s;
	t_u32	i;
	t_u32	j;

	out_s = *p_out_s;
	if (ft_strlen(out_s) != TETRIMINOS_LEN)
		return (0);
	j = 0;
	i = 0;
	while (i < 20)
	{
		if (i == 4 || i == 9 || i == 14 || i == 19)
			out_s[i] = '\n';
		else
		{
			if (bitmap & (0x8000 >> j))
				out_s[i] = '#';
			else
				out_s[i] = '.';
			j++;
		}
		i++;
	}
	*p_out_s = out_s;
	return (1);
}

t_u32	is_bitmap_valid(t_u32 bitmap)
{
	t_u32	i;
	t_u32	valid_tetriminos[TETRIMINOS_MAX_NUM];

	ft_memcpy(valid_tetriminos, (t_u32[])
		{57856, 17600, 36352, 51328, 59392,
		50240, 11776, 35008, 58368, 19520,
		19968, 35968, 27648, 35904, 50688,
		19584, 61440, 34952, 52224
		}, sizeof(valid_tetriminos));
	i = 0;
	while (i < TETRIMINOS_MAX_NUM)
	{
		if (bitmap == valid_tetriminos[i])
			return (1);
		i++;
	}
	return (0);
}

t_u32	get_tetriminos_form(t_u32 bitmap)
{
	t_u32	type;
	t_u32	valid_tetriminos[TETRIMINOS_MAX_NUM];

	ft_memcpy(valid_tetriminos, (t_u32[])
		{57856, 17600, 36352, 51328, 59392,
		50240, 11776, 35008, 58368, 19520,
		19968, 35968, 27648, 35904, 50688,
		19584, 61440, 34952, 52224
		}, sizeof(valid_tetriminos));
	type = 0;
	while (type < TETRIMINOS_MAX_NUM)
	{
		if (bitmap == valid_tetriminos[type])
			break ;
		type++;
	}
	return (type);
}
