CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = bessa_sena.c make_bet.c bessa_sena_utils.c bessa_sena_messages.c
OBJ = $(SRC:.c=.o)
HEADER = bessa_sena.h
OUT = lottery-numbers-maker

default:

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

re: fclean all