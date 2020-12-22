# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rixt <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/12/22 09:12:48 by rixt          #+#    #+#                  #
#    Updated: 2020/12/22 09:14:21 by rixt          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = present
OBJ = boxie.o intro.o card.o
CC = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = boxies.hpp

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME)
