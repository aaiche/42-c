# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaiche <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 13:00:21 by aaiche            #+#    #+#              #
#    Updated: 2017/11/10 19:07:02 by aaiche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDEDIR = .
LIBDIR = .
SOURCEDIR = .
SRCS = $(SOURCEDIR)/ft_display_file.c $(SOURCEDIR)/ft_putchar_fd.c $(SOURCEDIR)/ft_putstr_fd.c
OBJS = ft_display_file.o ft_putchar_fd.o ft_putstr_fd.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDEDIR)
RM = /bin/rm -f

NAME = ft_display_file

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
