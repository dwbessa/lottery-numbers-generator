#include "lotto_num.h"

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
	printf("\033[33mGame %u:\033[0m\t", bet_count);
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
		printf("\033[31mError!\033[0m Try a valid number. \033[31m(max: 20)\033[0m\n");
		result = scanf("%u", &bets_num);
		while (getchar() != '\n');
	}
	if (bets_num == 1)
		printf("\nGenerating \033[32m%u\033[0m bet for you!\n\n", bets_num);
	if (bets_num > 1)
		printf("\nGenerating \033[32m%u\033[0m bets for you!\n\n", bets_num);
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
		printf("\033[31mError!\033[0m Try a valid number. \033[31m(max: 10)\033[0m\n");
		result = scanf("%u", &total_numbers);
		while (getchar() != '\n');
	}
	if (total_numbers == 1)
		printf("\nOk! Each bet will have \033[32m%u\033[0m number.\n\n", total_numbers);
	if (total_numbers > 1)
		printf("\nOk! Each bet will have \033[32m%u\033[0m numbers.\n\n", total_numbers);
	return (total_numbers);
}
