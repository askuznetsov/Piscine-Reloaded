#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okuznets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 06:17:27 by okuznets          #+#    #+#              #
#    Updated: 2017/11/01 06:26:52 by okuznets         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ./srcs/*.c

HDR = ./includes/

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I$(HDR)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all