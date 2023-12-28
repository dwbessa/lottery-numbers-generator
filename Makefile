CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iinclude
SRC = src/bessa_sena.c src/make_bet.c src/bessa_sena_utils.c src/bessa_sena_messages.c
OBJ = $(SRC:.c=.o)
HEADER = include/bessa_sena.h
OUT = bessa_sena

default:
	@echo "\033[0;31mError: \033[0mTry '\033[0;32mmake bet\033[0m' in command line."

bet: $(OUT)
	@rm -f $(OBJ) > /dev/null
	@./$(OUT)

$(OUT): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) > /dev/null

fclean: clean
	@rm -f $(OUT) > /dev/null

re: fclean bet

%:
	@echo "\033[0;31mError: \033[0mUnknown target. Try '\033[0;32mmake bet\033[0m'."