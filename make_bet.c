#include "mega_sena.h"

int	*sort_bet(int *total_bet, int total_numbers)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (total_numbers - 1))
	{
		if (total_bet[i] > total_bet[i + 1])
		{
			temp = total_bet[i];
			total_bet[i] = total_bet[i + 1];
			total_bet[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	return (total_bet);
}

int	*make_bet(int total_numbers)
{
	int	*total_bet;
	int	i;
	int	num;

	total_bet = malloc(sizeof(int) * total_numbers);
	if (total_bet == NULL)
		return (0);
	i = 0;
    while (i < total_numbers)
    {
        do {
            num = random_number();
        } while (check_number(num, total_bet, i));
        total_bet[i] = num;
        i++;
    }
	total_bet = sort_bet(total_bet, total_numbers);
	return (total_bet);
}
