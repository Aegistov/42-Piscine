# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmorel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 11:21:24 by mmorel            #+#    #+#              #
#    Updated: 2016/07/28 11:21:25 by mmorel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

.PHONY: clean fclean re all

all:
	gcc -Wall -Wextra -Werror ft_cat.c print.c main.c -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean all
