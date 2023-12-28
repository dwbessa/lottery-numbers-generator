#include "bessa_sena.h"

int	main(void)
{
	int				bet_count;
	unsigned int	total_numbers;
	unsigned int	bets_num;
	char			redo;

	redo = 'y';
	while (redo == 'y' || redo == 'Y')
	{
		system("clear");
		bet_count = 1;
		srand(time(NULL));
		welcome(); //all functions without parameters is for program message or scanning from input
		choose_numbers();
		total_numbers = how_many_numbers();
		many_games();
		bets_num = how_many_bets();
		while (bets_num > 0)
		{
			display_numbers(bet_count, total_numbers);
			bet_count++;
			bets_num--;
		}
		redo_games();
		scanf(" %c", &redo);
		if (redo != 'y' || redo != 'Y')
			goodbye_msg();
	}
	return (0);
}
