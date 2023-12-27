#include "mega_sena.h"

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

void	display_numbers(int bet_count)
{
	int	i;
	int	*the_bet;

	i = 0;
	the_bet = make_bet(6);
	printf("Aposta %u:\t", bet_count);
	while (i < 6)
	{
		printf("[%d]", the_bet[i]);
		if (i != 5)
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
	while (result == 0 || bets_num < 1)
	{
		printf("Erro! Tente um número válido.\n");
		result = scanf("%u", &bets_num);
		while (getchar() != '\n');
	}
	if (bets_num == 1)
		printf("\nFazendo %u aposta para você!\n\n", bets_num);
	if (bets_num > 1)
		printf("\nFazendo %u apostas para você!\n\n", bets_num);
	return (bets_num);
}

void	welcome(void)
{
	printf("_______  ________  ______   ______   ______         ______  ________ __    __  ______   \n");
	printf("|       \\|        \\/      \\ /      \\ /      \\       /      \\|        |  \\  |  \\/      \\ \n");
	printf("| $$$$$$$| $$$$$$$|  $$$$$$|  $$$$$$|  $$$$$$\\     |  $$$$$$| $$$$$$$| $$\\ | $|  $$$$$$\"\n");
	printf("| $$__/ $| $$__   | $$___\\$| $$___\\$| $$__| $$_____| $$___\\$| $$__   | $$$\\| $| $$__| $$\n");
	printf("| $$    $| $$  \\   \\$$    \\ \\$$    \\| $$    $|      \\$$    \\| $$  \\  | $$$$\\ $| $$    $$\n");
	printf("| $$$$$$$| $$$$$   _\\$$$$$$\\_\\$$$$$$| $$$$$$$$\\$$$$$_\\$$$$$$| $$$$$  | $$\\$$ $| $$$$$$$$\n");
	printf("| $$__/ $| $$_____|  \\__| $|  \\__| $| $$  | $$     |  \\__| $| $$_____| $$ \\$$$| $$  | $$\n");
	printf("| $$    $| $$      \\$$    $ \\$$    $| $$  | $$      \\$$    $| $$     | $$  \\$$| $$  | $$\n");
	printf(" \\$$$$$$$ \\$$$$$$$$ \\$$$$$$  \\$$$$$$ \\$$   \\$$       \\$$$$$$ \\$$$$$$$$\\$$   \\$$\\$$   \\$$\n");
	printf("\nBem-vindo ao Bessa-Sena!\n");
	printf("Quantos jogos deseja fazer?\n\n");
}
