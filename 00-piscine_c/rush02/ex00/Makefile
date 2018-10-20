#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahayat <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/17 19:19:21 by ahayat            #+#    #+#              #
#    Updated: 2017/09/17 19:19:22 by ahayat           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = colle-2

SRC1 = colle2.c
SRC2 = print.c
SRC3 = ft_putnbr.c
SRC4 = is_valid.c


all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC1) $(SRC2) $(SRC3) $(SRC4)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all