# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfil <vfil@student.unit.ua>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 11:00:29 by vfil              #+#    #+#              #
#    Updated: 2018/06/18 19:09:33 by vfil             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook
SRC		=	Contact.class.cpp main.cpp
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
