# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaiche <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/21 18:21:02 by aaiche            #+#    #+#              #
#    Updated: 2018/01/05 12:27:03 by aaiche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
NAME			=	fillit
#DBG			=	-g -O0 -fsanitize=address
FLAGS			=	-Wall -Wextra -Werror $(DBG)

LIB_PATH		=	libft
LIB				=	$(LIB_PATH)/libft.a
LIB_LINK		=	-L $(LIB_PATH) -lft

INC_DIR			=	.
INCS			=	-I $(LIB_PATH)/$(INC_DIR) -I $(INC_DIR)

SRC_DIR			=	.
SRC_BASE		=	main.c							\
					main_utils.c					\
					grid.c							\
					grid_add_remove_tetriminos.c	\
					grid_utils.c					\
					tetriminos.c					\
					tetriminos_utils.c				\
					tetriminos_bitmap.c				\
					linked_list_utils.c	

OBJ_DIR			=	.

SRCS			=	$(addprefix $(SRC_DIR)/, $(SRC_BASE))
OBJS			=	$(addprefix $(OBJ_DIR)/, $(SRC_BASE:.c=.o))

all: $(NAME)

$(NAME): $(LIB) $(OBJS)
	$(CC) $(FLAGS) -o $@ $^ $(LIB_LINK)

$(LIB):
	@make -C $(LIB_PATH)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/*.h
	@$(CC) $(FLAGS) $(INCS) -c -o $@ $<

clean:
	@rm -f $(OBJS)
	@make -C $(LIB_PATH) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIB_PATH) fclean

re: fclean all

.PHONY: clean all re fclean
