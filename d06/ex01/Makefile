# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/26 18:22:52 by vfil              #+#    #+#              #
#    Updated: 2018/06/26 18:22:53 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	serialization
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
