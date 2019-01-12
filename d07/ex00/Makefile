# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 16:58:06 by vfil              #+#    #+#              #
#    Updated: 2018/06/27 16:58:07 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	whatever
SRC		=	whatever.cpp
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