/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:50:43 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/10 19:02:08 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_putchar_fd.h"
#include "ft_putstr_fd.h"

#define BUF_SIZE 4096

int		check_args(int argc)
{
	int	rc;

	rc = 0;
	if (argc > 2)
	{
		ft_putstr_fd(STDERR_FILENO, "Too many arguments.\n");
		rc = -1;
	}
	else
	{
		if (argc == 1)
		{
			ft_putstr_fd(STDERR_FILENO, "File name missing.\n");
			rc = -1;
		}
	}
	return (rc);
}

int		ft_display(char *file)
{
	int		fd;
	int		num_bytes_read;
	char	buf[BUF_SIZE];

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr_fd(STDERR_FILENO, "open() failed.\n");
		return (-1);
	}
	else
	{
		while ((num_bytes_read = read(fd, buf, BUF_SIZE)))
		{
			buf[num_bytes_read] = '\0';
			ft_putstr_fd(STDOUT_FILENO, buf);
		}
		if (close(fd) == -1)
		{
			ft_putstr_fd(STDERR_FILENO, "close() failed.\n");
			return (-1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;
	int	rc;

	if ((rc = check_args(argc)) != 0)
		return (rc);
	i = 1;
	while (i < argc)
	{
		if ((rc = ft_display(argv[i])) == -1)
			return (rc);
		i++;
	}
	return (0);
}
