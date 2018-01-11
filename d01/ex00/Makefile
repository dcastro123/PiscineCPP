NAME = pony

CMP = g++
CMPFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Pony.cpp
HDR = Pony.hpp

OBJ = $(SRCS:.cpp=.o)

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CMP) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
