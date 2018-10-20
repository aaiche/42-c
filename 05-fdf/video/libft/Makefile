# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaiche <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 13:00:21 by aaiche            #+#    #+#              #
#    Updated: 2018/01/31 12:02:36 by aaiche           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DBG = 
SRCDIR = .
INCDIR = includes/
LIBDIR = .
OBJDIR = .
SRCS = $(SRCDIR)/ft_memset.c \
	   $(SRCDIR)/ft_bzero.c \
	   $(SRCDIR)/ft_memcpy.c \
	   $(SRCDIR)/ft_memccpy.c \
	   $(SRCDIR)/ft_memmove.c \
	   $(SRCDIR)/ft_memchr.c \
	   $(SRCDIR)/ft_memcmp.c \
	   $(SRCDIR)/ft_memdup.c \
	   $(SRCDIR)/ft_memjoin.c \
	   $(SRCDIR)/ft_strlen.c \
	   $(SRCDIR)/ft_strdup.c \
	   $(SRCDIR)/ft_strcpy.c \
	   $(SRCDIR)/ft_strncpy.c \
	   $(SRCDIR)/ft_strcat.c \
	   $(SRCDIR)/ft_strncat.c \
	   $(SRCDIR)/ft_strlcat.c \
	   $(SRCDIR)/ft_strchr.c \
	   $(SRCDIR)/ft_strrchr.c \
	   $(SRCDIR)/ft_strstr.c \
	   $(SRCDIR)/ft_strnstr.c \
	   $(SRCDIR)/ft_strcmp.c \
	   $(SRCDIR)/ft_strncmp.c \
	   $(SRCDIR)/ft_atoi.c \
	   $(SRCDIR)/ft_isalpha.c \
	   $(SRCDIR)/ft_isdigit.c \
	   $(SRCDIR)/ft_isalnum.c \
	   $(SRCDIR)/ft_isascii.c \
	   $(SRCDIR)/ft_isprint.c \
	   $(SRCDIR)/ft_toupper.c \
	   $(SRCDIR)/ft_tolower.c \
	   $(SRCDIR)/ft_iscntrl.c \
	   $(SRCDIR)/ft_islower.c \
	   $(SRCDIR)/ft_isspace.c \
	   $(SRCDIR)/ft_isblank.c \
	   $(SRCDIR)/ft_isupper.c \
	   $(SRCDIR)/ft_isxdigit.c \
	   $(SRCDIR)/ft_isgraph.c \
	   $(SRCDIR)/ft_memalloc.c \
	   $(SRCDIR)/ft_memdel.c \
	   $(SRCDIR)/ft_strnew.c \
	   $(SRCDIR)/ft_strdel.c \
	   $(SRCDIR)/ft_strclr.c \
	   $(SRCDIR)/ft_striter.c \
	   $(SRCDIR)/ft_striteri.c \
	   $(SRCDIR)/ft_strmap.c \
	   $(SRCDIR)/ft_strmapi.c \
	   $(SRCDIR)/ft_strequ.c \
	   $(SRCDIR)/ft_strnequ.c \
	   $(SRCDIR)/ft_strsub.c \
	   $(SRCDIR)/ft_strjoin.c \
	   $(SRCDIR)/ft_strtrim.c \
	   $(SRCDIR)/ft_strsplit.c \
	   $(SRCDIR)/ft_itoa.c \
	   $(SRCDIR)/ft_putchar.c \
	   $(SRCDIR)/ft_putstr.c \
	   $(SRCDIR)/ft_putendl.c \
	   $(SRCDIR)/ft_putnbr.c \
	   $(SRCDIR)/ft_putchar_fd.c \
	   $(SRCDIR)/ft_putstr_fd.c \
	   $(SRCDIR)/ft_putendl_fd.c \
	   $(SRCDIR)/ft_putnbr_fd.c \
	   $(SRCDIR)/ft_lstnew_copy.c \
	   $(SRCDIR)/ft_lstnew.c \
	   $(SRCDIR)/ft_lstdelone.c \
	   $(SRCDIR)/ft_lstdel.c \
	   $(SRCDIR)/ft_lstadd.c\
	   $(SRCDIR)/ft_lstiter.c \
	   $(SRCDIR)/ft_lstmap.c
OBJS = $(OBJDIR)/ft_memset.o \
	   $(SRCDIR)/ft_bzero.o \
	   $(OBJDIR)/ft_memcpy.o \
	   $(OBJDIR)/ft_memccpy.o \
	   $(SRCDIR)/ft_memmove.o \
	   $(SRCDIR)/ft_memchr.o \
	   $(SRCDIR)/ft_memcmp.o \
	   $(SRCDIR)/ft_memdup.o \
	   $(SRCDIR)/ft_memjoin.o \
	   $(OBJDIR)/ft_strlen.o \
	   $(OBJDIR)/ft_strdup.o \
	   $(SRCDIR)/ft_strcpy.o \
	   $(SRCDIR)/ft_strncpy.o \
	   $(SRCDIR)/ft_strcat.o \
	   $(SRCDIR)/ft_strncat.o \
	   $(SRCDIR)/ft_strlcat.o \
	   $(SRCDIR)/ft_strchr.o \
	   $(SRCDIR)/ft_strrchr.o \
	   $(SRCDIR)/ft_strstr.o \
	   $(SRCDIR)/ft_strnstr.o \
	   $(SRCDIR)/ft_strcmp.o \
	   $(SRCDIR)/ft_strncmp.o \
	   $(SRCDIR)/ft_atoi.o \
	   $(SRCDIR)/ft_isalpha.o \
	   $(SRCDIR)/ft_isdigit.o \
	   $(SRCDIR)/ft_isalnum.o \
	   $(SRCDIR)/ft_isascii.o \
	   $(SRCDIR)/ft_isprint.o \
	   $(SRCDIR)/ft_toupper.o \
	   $(SRCDIR)/ft_tolower.o \
	   $(SRCDIR)/ft_iscntrl.o \
	   $(SRCDIR)/ft_islower.o \
	   $(SRCDIR)/ft_isspace.o \
	   $(SRCDIR)/ft_isblank.o \
	   $(SRCDIR)/ft_isupper.o \
	   $(SRCDIR)/ft_isxdigit.o \
	   $(SRCDIR)/ft_isgraph.o \
	   $(SRCDIR)/ft_memalloc.o \
	   $(SRCDIR)/ft_memdel.o \
	   $(SRCDIR)/ft_strnew.o \
	   $(SRCDIR)/ft_strdel.o \
	   $(SRCDIR)/ft_strclr.o \
	   $(SRCDIR)/ft_striter.o \
	   $(SRCDIR)/ft_striteri.o \
	   $(SRCDIR)/ft_strmap.o \
	   $(SRCDIR)/ft_strmapi.o \
	   $(SRCDIR)/ft_strequ.o \
	   $(SRCDIR)/ft_strnequ.o \
	   $(SRCDIR)/ft_strsub.o \
	   $(SRCDIR)/ft_strjoin.o \
	   $(SRCDIR)/ft_strtrim.o \
	   $(SRCDIR)/ft_strsplit.o \
	   $(SRCDIR)/ft_itoa.o \
	   $(OBJDIR)/ft_putchar.o \
	   $(OBJDIR)/ft_putstr.o \
	   $(OBJDIR)/ft_putendl.o \
	   $(OBJDIR)/ft_putnbr.o \
	   $(OBJDIR)/ft_putchar_fd.o \
	   $(OBJDIR)/ft_putstr_fd.o \
	   $(OBJDIR)/ft_putendl_fd.o \
	   $(OBJDIR)/ft_putnbr_fd.o \
	   $(OBJDIR)/ft_lstnew_copy.o \
	   $(OBJDIR)/ft_lstnew.o \
	   $(OBJDIR)/ft_lstdelone.o \
	   $(OBJDIR)/ft_lstdel.o \
	   $(OBJDIR)/ft_lstadd.o \
	   $(OBJDIR)/ft_lstiter.o \
	   $(OBJDIR)/ft_lstmap.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)
AR = ar
ARFLAGS = rc
RM = /bin/rm -f

NAME = $(LIBDIR)/libft.a

all: $(NAME)

$(NAME): 
	$(CC) $(DBG) $(CFLAGS) -c $(SRCS) 
	#mv *.o $(OBJDIR)
	$(AR) $(ARFLAGS) $@ $(TARGET_LIB) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

