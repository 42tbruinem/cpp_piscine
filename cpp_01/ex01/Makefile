# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tbruinem <tbruinem@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 16:25:13 by tbruinem      #+#    #+#                  #
#    Updated: 2020/09/30 12:50:45 by tbruinem      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = phonebook.cpp phonebook.class.cpp contact.class.cpp
OBJ = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.cpp
	@echo "Compiling $@"
	$(CXX) $(CFLAGS) -pedantic-errors -std=c++98 -c $< -o $@ 

$(NAME): $(OBJ)
	@echo "Compiling $@"
	$(CXX) $(CFLAGS) -std=c++98 $^ -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
