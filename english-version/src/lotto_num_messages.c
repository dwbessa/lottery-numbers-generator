#include "lotto_num.h"

void	welcome(void)
{
	printf("\033[0;32m");
	printf("__       ______ ________ ________   ______           __    __  __    __  __       __ \n");
	printf("|  \\     /      \\        \\        \\ /      \\         |  \\  |  \\|  \\  |  \\|  \\     /  \\\n");
	printf("| $$    |  $$$$$$\\$$$$$$$$\\$$$$$$$$|  $$$$$$\\        | $$\\ | $$| $$  | $$| $$\\   /  $$\n");
	printf("| $$    | $$  | $$ | $$     | $$   | $$  | $$ ______ | $$$\\| $$| $$  | $$| $$$\\ /  $$$\n");
	printf("| $$    | $$  | $$ | $$     | $$   | $$  | $$|      \\| $$$$\\ $$| $$  | $$| $$$$\\  $$$$\n");
	printf("| $$    | $$  | $$ | $$     | $$   | $$  | $$ \\$$$$$$| $$\\$$ $$| $$  | $$| $$\\$$ $$ $$\n");
	printf("| $$____| $$__/ $$ | $$     | $$   | $$__/ $$        | $$ \\$$$$| $$__/ $$| $$ \\$$$| $$\n");
	printf("| $$     \\$$    $$ | $$     | $$    \\$$    $$        | $$  \\$$$ \\$$    $$| $$  \\$ | $$\n");
	printf(" \\$$$$$$$$\\$$$$$$   \\$$      \\$$     \\$$$$$$          \\$$   \\$$  \\$$$$$$  \\$$      \\$$\n");
	printf("\033[0;30;47m\n\t\t\t\tWelcome to Lotto-Num!\n\n\033[0m");

}

void	choose_numbers(void)
{
	printf("Let's create your bet for lotto!\n");
	printf("How many numbers you want in each game? \033[0;31m(max: 20)\033[0m\n");
}

void	many_games(void)
{
	printf("Now, how many games do you want? \033[0;31m(max: 10)\033[0m\n\n");
}

void	redo_games(void)
{
	printf("You want to redo your bet?\n\033[3mObs: This action will erase previous bets.\033[0m \033[0;32m(y/n)\033[0m\n");
}

void	goodbye_msg(void)
{
	printf("\033[0;30;42mGood luck, have a nice day!\033[0m\n");
}