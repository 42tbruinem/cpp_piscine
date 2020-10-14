# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 16:25:13 by tbruinem      #+#    #+#                  #
#    Updated: 2020/10/14 10:51:29 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = span
SRC = span.cpp main.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c++98
CXX = clang++

ifeq ($(DEBUG), 1)
	CFLAGS += -g -fsanitize=address
endif

all: $(NAME)

%.o: %.cpp
	@echo "Compiling $@"
	$(CXX) $(CFLAGS) -pedantic -ansi -c $< -o $@

$(NAME): $(OBJ)
	@echo "Compiling $@"
	$(CXX) $(CFLAGS) $^ -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
