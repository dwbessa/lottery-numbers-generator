CC = gcc
CFLAGS = -Wall -Werror -Wextra -Iinclude
SRC = src/lotto_num.c src/make_bet.c src/lotto_num_utils.c src/lotto_num_messages.c
OBJ = $(SRC:.c=.o)
HEADER = include/lotto_num.h
OUT = lotto_num

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