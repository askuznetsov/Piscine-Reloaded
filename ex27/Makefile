#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okuznets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 07:16:16 by okuznets          #+#    #+#              #
#    Updated: 2017/11/01 07:18:07 by okuznets         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

all:
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all