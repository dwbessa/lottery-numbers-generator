#include "bessa_sena.h"

int	random_number(void)
{
	int	c;

	c = rand() % 60 + 1;
	return (c);
}

int	check_number(int bet, int *all_bet, int array_count)
{
	int	i;

	i = 0;
	while (i < array_count)
	{
		if (bet == all_bet[i])
			return (1);
		else
			i++;
	}
	return (0);
}

void	display_numbers(int bet_count, unsigned int total_numbers)
{
	unsigned int	i;
	int	*the_bet;

	i = 0;
	the_bet = make_bet(total_numbers);
	printf("\033[33mJogo %u:\033[0m\t", bet_count);
	while (i < total_numbers)
	{
		printf("[%d]", the_bet[i]);
		if (i != (total_numbers - 1))
			printf(" - ");
		i++;
	}
	free(the_bet);
	printf("\n\n");
}

unsigned int	how_many_bets(void)
{
	unsigned int	bets_num;
	int				result;

	result = scanf("%u", &bets_num);
	while (getchar() != '\n');
	while (result == 0 || bets_num < 1 || bets_num > 10)
	{
		printf("\033[31mErro!\033[0m Tente um número válido. \033[31m(máx.: 20)\033[0m\n");
		result = scanf("%u", &bets_num);
		while (getchar() != '\n');
	}
	if (bets_num == 1)
		printf("\nFazendo \033[32m%u\033[0m aposta para você!\n\n", bets_num);
	if (bets_num > 1)
		printf("\nFazendo \033[32m%u\033[0m apostas para você!\n\n", bets_num);
	return (bets_num);
}

unsigned int	how_many_numbers(void)
{
	unsigned int	total_numbers;
	int				result;

	result = scanf("%u", &total_numbers);
	while (getchar() != '\n');
	while (result == 0 || (total_numbers < 1 || total_numbers > 20))
	{
		printf("\033[31mErro!\033[0m Tente um número válido. \033[31m(máx.: 10)\033[0m\n");
		result = scanf("%u", &total_numbers);
		while (getchar() != '\n');
	}
	if (total_numbers == 1)
		printf("\nOk! Cada aposta terá \033[32m%u\033[0m número.\n\n", total_numbers);
	if (total_numbers > 1)
		printf("\nOk! Cada aposta terá \033[32m%u\033[0m números.\n\n", total_numbers);
	return (total_numbers);
}
