#ifndef MEGA_SENA_H
# define MEGA_SENA_H

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void			welcome(void);
int				random_number(void);
unsigned int	how_many_bets(void);
int				*make_bet(int total_numbers);
int				check_number(int bet, int *all_bet, int array_count);
void			display_numbers(int bet_count);
int				*sort_bet(int *total_bet, int total_numbers);

#endif