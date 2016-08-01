# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 11:09:08 by mmorel            #+#    #+#              #
#    Updated: 2016/07/25 11:09:48 by mmorel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

CC = gcc 

CFLAGS = -c -Wall -Wextra -Werror 

AR = ar rc 

IN = ranlib 

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c \
./srcs/ft_swap.c

H_DIR = includes/

all: $(NAME)

$(NAME):
	$(CC)$(CFLAGS)$(SRC) -I$(H_DIR)
	$(AR)$(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	$(IN)$(NAME)

clean:
	/bin/rm ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
