# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 14:07:03 by dcastro-          #+#    #+#              #
#    Updated: 2018/01/09 19:44:27 by dcastro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = book

SRCS = main.cpp searchContact.cpp addContact.cpp

INC = addContact.hpp searchContact.hpp

CMP = g++ -Wall -Werror -Wextra

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CMP) -I $(INC) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

