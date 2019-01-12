# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 18:07:54 by vfil              #+#    #+#              #
#    Updated: 2018/06/27 18:07:55 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	iter
SRC		=	iter.cpp
F		=	-Wall -Werror -Wextra
C		=	clang++

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(SRC)
	$(C) $(F) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all