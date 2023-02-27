NAME = main
CC = c++

CFLAGS = -Wall -Wextra -Werror -Wconversion -std=c++98 -g3

SRC = 	main.cpp printAsChar.cpp countOccurrences.cpp isSpecial.cpp strToDouble.cpp

OBJ = $(SRC:.cpp=.o)

BLACK = \033[30m
RED = \033[31;1m
GREEN = \033[32;1m
YELLOW = \033[33;1m
BLUE = \033[34;1m
MAGENTAMAGENTA = \033[35;1m
CYAN = \033[36;1m
WHITE = \033[37;1m
RESET = \033[0m

.PHONY: clean fclean re test

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

test: all
	@clear
	@echo "$(GREEN)########## Teste com zeros ##########\n\n$(RESET)"
	./$(NAME) 0
	./$(NAME) -0
	./$(NAME) +0
	@echo "$(GREEN)\n\n########## Teste com limites de integer ##########\n\n$(RESET)"
	./$(NAME) 2147483647
	./$(NAME) -2147483648
	@echo "$(GREEN)\n\n########## Teste com overflows########## \n\n$(RESET)"
	./$(NAME) 2147483648
	./$(NAME) -2147483649
	./$(NAME) 2147483647.987654321
	./$(NAME) -2147483648.987654321
	@echo "$(GREEN)\n\n########## Teste com especiais ##########\n\n$(RESET)"
	./$(NAME) nan
	./$(NAME) +nan
	./$(NAME) -nan
	./$(NAME) nanf
	./$(NAME) +nanf
	./$(NAME) -nanf
	./$(NAME) inf
	./$(NAME) +inf
	./$(NAME) -inf
	./$(NAME) inff
	./$(NAME) +inff
	./$(NAME) -inff
	@echo "$(GREEN)\n\n########## Numeros diversos ##########\n\n$(RESET)"
	./$(NAME) 123.123
	./$(NAME) 123.123f
	./$(NAME) 123.222f
	./$(NAME) 123.333f
	./$(NAME) 123.444f
	./$(NAME) 123.555f
	./$(NAME) 123.666f
	./$(NAME) 123.777f
	./$(NAME) 123.888f
	./$(NAME) 123.999f
	@echo "$(GREEN)\n\n########## Teste com erros diversos ##########\n\n$(RESET)"
	./$(NAME) nana
	./$(NAME) anan
	./$(NAME) ++nan
	./$(NAME) -+nan
	./$(NAME) ananf
	./$(NAME) nanfa
	./$(NAME) ++nanf
	./$(NAME) --nanf
	./$(NAME) infa
	./$(NAME) ainf
	./$(NAME) ++inf
	./$(NAME) --inf
	./$(NAME) inffa
	./$(NAME) ainff
	./$(NAME) ++inff
	./$(NAME) --inff
	./$(NAME) sdfsdf
	./$(NAME) kjnldkjnfgl