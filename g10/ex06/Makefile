# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/26 20:36:23 by mmorel            #+#    #+#              #
#    Updated: 2016/07/26 20:36:25 by mmorel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FLAGS = -Wall -Werror -Wextra

all:
	gcc $(FLAGS) -o $(NAME) ft_atoi.c operators.c print.c do_op.c

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
