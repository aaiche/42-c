/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:13:59 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/31 11:24:38 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 20
# include "libft.h"

typedef struct		s_file
{
	int				fd;
	char			*buffer;
	int				len;
}					t_file;

int					get_next_line(const int fd, char **p_line);
#endif
