# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julian <julian@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/13 17:01:18 by julian            #+#    #+#              #
#    Updated: 2026/01/15 01:41:50 by julian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp Animal.cpp

NAME = FRAGTRAP

OBJ = $(SRC:.cpp=.o)

FLAGS = -I -std=c++98 -Wall -Werror -Wextra

CC = c++

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all	: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re	: fclean all

.PHONY: all clean fclean re