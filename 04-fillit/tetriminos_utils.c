/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 13:44:19 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/23 15:19:32 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_u32	set_string(char *s_out, char *s_in)
{
	if ((s_in == NULL) || (*s_in == '\0'))
		return (0);
	if (ft_strlen(s_in) == 21)
	{
		if (s_in[20] != '\n')
			return (0);
		else
			s_in[20] = '\0';
	}
	s_out = ft_strdup(s_in);
	return (1);
}

t_u32	set_bitmap(char *s)
{
	t_u32 bitmap;

	bitmap = 0;
	if ((s == NULL) || (*s == '\0') || (ft_strlen(s) != TETRIMINOS_LEN))
		return (bitmap);
	return (str_to_bitmap(s));
}

t_u32	get_ordered_bitmap(t_u32 bitmap)
{
	if (bitmap == 0)
		return (0);
	while (!(bitmap & 0x8888))
		bitmap <<= 1;
	while (!(bitmap & 0xF000))
		bitmap <<= 4;
	return (bitmap);
}

t_u32	is_tetriminos_valid(char **p_s, t_u32 bitmap)
{
	t_u32	rc;
	char	*s;

	rc = 0;
	if (p_s == NULL)
		return (0);
	s = *p_s;
	if (ft_strlen(s) != TETRIMINOS_LEN)
		return (0);
	while (*s)
	{
		if (!((*s == '#') || (*s == '.') || (*s == '\n')))
			return (0);
		s++;
	}
	return (is_bitmap_valid(bitmap));
}
