# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/26 13:22:09 by vfil              #+#    #+#              #
#    Updated: 2018/06/26 13:25:23 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	scalar_conversion
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
