CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = mega_sena.c make_bet.c mega_sena_utils.c
OBJ = $(SRC:.c=.o)
HEADER = mega_sena.h
OUT = lottery-numbers-maker

all: $(OUT)
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

bet: all