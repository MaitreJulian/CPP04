# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/13 17:01:18 by julian            #+#    #+#              #
#    Updated: 2026/03/12 16:00:28 by jvenkata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

NAME = AbstractZoo

OBJ = $(SRC:.cpp=.o)

FLAGS = -I -std=c++98 -Wall -Werror -Wextra -g

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