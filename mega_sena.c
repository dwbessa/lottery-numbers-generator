#include "mega_sena.h"

int	main(void)
{
	int				bet_count;
	unsigned int	bets_num;
	char			redo;

	redo = 'y';
	while (redo == 'y' || redo == 'Y')
	{
		bet_count = 1;
		srand(time(NULL));
		welcome();
		bets_num = how_many_bets();
		while (bets_num > 0)
		{
			display_numbers(bet_count);
			bet_count++;
			bets_num--;
		}
		printf("Quer refazer suas apostas? (y/n): ");
		scanf(" %c", &redo);
		if (redo == 'y' || redo == 'Y')
			system("clear");
		else
			printf("Boa sorte nos jogos!");
	}
	return (0);
}
