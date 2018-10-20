/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:18:35 by aaiche            #+#    #+#             */
/*   Updated: 2018/01/31 11:59:52 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "get_next_line.h"

t_file	*add(t_list **p_head, const int fd)
{
	t_list	*new_node;
	t_list	*cursor;
	t_file	*f;

	cursor = *p_head;
	while (cursor != NULL)
	{
		f = (t_file *)cursor->content;
		if (f->fd == fd)
			return (f);
		cursor = cursor->next;
	}
	if ((f = (t_file *)ft_memalloc(sizeof(*f))) != NULL)
	{
		f->fd = fd;
		f->buffer = NULL;
		f->len = 0;
		new_node = ft_lstnew((void const *)f, sizeof(&f));
		ft_lstadd(p_head, new_node);
		return (f);
	}
	return (NULL);
}

int		fill_output_line(char **p_l, t_file *f)
{
	char	*p;
	char	*b;
	int		rc;

	rc = 0;
	if ((p = ft_memchr(f->buffer, '\n', f->len)) != NULL)
	{
		if ((*p_l = ft_memdup(f->buffer, p - f->buffer)) == NULL)
			return (-1);
		b = f->buffer;
		f->len = f->len - (p - b) - 1;
		f->buffer = ft_memdup(p + 1, f->len);
		rc = 1;
	}
	else
	{
		if (f->len != 0)
			if ((*p_l = ft_memdup(f->buffer, f->len)) == NULL)
				return (-1);
		f->len = 0;
		rc = 1;
	}
	ft_memdel((void**)&b);
	return (rc);
}

int		fill_file_buffer(t_file *f, char **p_in_buf, int n)
{
	char	*b;
	int		rc;

	rc = 1;
	if (f->len == 0)
	{
		f->buffer = ft_memalloc(sizeof(char) * n);
		if ((f->buffer = ft_memmove(f->buffer, *p_in_buf, n)) == NULL)
			rc = -1;
	}
	else
	{
		b = f->buffer;
		if ((f->buffer = ft_memjoin(f->buffer, f->len, *p_in_buf, n)) == NULL)
			rc = -1;
		ft_memdel((void**)&b);
	}
	f->len += n;
	return (rc);
}

int		get_next_line(const int fd, char **p_l)
{
	static	t_list	*h;
	char			*buf;
	int				num;
	int				rc;
	t_file			*f;

	if ((p_l == NULL) || fd < 0 || BUFF_SIZE <= 0 || (f = add(&h, fd)) == NULL)
		return (-1);
	if ((buf = ft_memalloc(BUFF_SIZE + 1)) == NULL)
		return (-1);
	while ((num = read(f->fd, buf, BUFF_SIZE)))
	{
		if ((num == -1) || (fill_file_buffer(f, &buf, num) == -1))
			return (-1);
		if (ft_memchr(f->buffer, '\n', f->len) != NULL)
			break ;
	}
	ft_memdel((void**)&buf);
	if ((f->len != 0))
		rc = fill_output_line(p_l, f);
	else
		rc = 0;
	return (rc);
}
