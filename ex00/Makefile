# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 16:25:13 by tbruinem      #+#    #+#                  #
#    Updated: 2020/07/27 16:36:58 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror
CC = g++

all: $(NAME)

%.o: %.cpp
	@echo "Compiling $@"
	$(CC) $(CFLAGS) -pedantic -ansi -c $< -o $@ 

$(NAME): $(OBJ)
	@echo "Compiling $@"
	$(CC) $(CFLAGS) $^ -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
