NAME = main
CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = 	Data.cpp  deserialize.cpp  main.cpp  serialize.cpp

OBJ = $(SRC:.cpp=.o)

.PHONY: clean fclean re

BLACK = \033[30m
RED = \033[31;1m
GREEN = \033[32;1m
YELLOW = \033[33;1m
BLUE = \033[34;1m
MAGENTAMAGENTA = \033[35;1m
CYAN = \033[36;1m
WHITE = \033[37;1m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rfd $(NAME)

fclean: clean
	rm -rfd $(OBJ)

re: fclean all