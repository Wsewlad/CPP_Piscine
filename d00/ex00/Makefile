# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 10:54:16 by vfil              #+#    #+#              #
#    Updated: 2018/06/18 10:54:25 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
SRC		=	megaphone.cpp
FLAGS	=	-Wall -Werror -Wextra

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
