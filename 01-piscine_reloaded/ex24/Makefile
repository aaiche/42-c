# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaiche <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 13:00:21 by aaiche            #+#    #+#              #
#    Updated: 2017/11/10 14:29:27 by aaiche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDEDIR = ./includes
LIBDIR = .
SOURCEDIR = ./srcs
SRCS = $(SOURCEDIR)/ft_putchar.c $(SOURCEDIR)/ft_putstr.c $(SOURCEDIR)/ft_strcmp.c $(SOURCEDIR)/ft_strlen.c $(SOURCEDIR)/ft_swap.c
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDEDIR)
AR = ar
ARFLAGS = rc
RM = /bin/rm -f

NAME = $(LIBDIR)/libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(AR) $(ARFLAGS) $(NAME) $(TARGET_LIB) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
