# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 15:23:27 by vfil              #+#    #+#              #
#    Updated: 2018/06/27 15:23:28 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	real_type
SRC		=	main.cpp
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
