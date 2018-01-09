NAME = megaphone

SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)

CMP = clang++ -Wall -Werror -Wextra

.PHONY: clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CMP) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
