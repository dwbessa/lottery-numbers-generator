#ifndef BESSA_SENA_H
# define BESSA_SENA_H

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void			welcome(void);
void			choose_numbers(void);
void			many_games(void);
void			redo_games(void);
void			goodbye_msg(void);
int				random_number(void);
unsigned int	how_many_bets(void);
int				*make_bet(int total_numbers);
int				check_number(int bet, int *all_bet, int array_count);
void			display_numbers(int bet_count, unsigned int total_numbers);
int				*sort_bet(int *total_bet, int total_numbers);
unsigned int	how_many_numbers(void);

#endif