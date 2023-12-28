#include "bessa_sena.h"

void	welcome(void)
{
	printf("\033[0;32m");
	printf("_______  ________  ______   ______   ______         ______  ________ __    __  ______   \n");
	printf("|       \\|        \\/      \\ /      \\ /      \\       /      \\|        |  \\  |  \\/      \\ \n");
	printf("| $$$$$$$| $$$$$$$|  $$$$$$|  $$$$$$|  $$$$$$\\     |  $$$$$$| $$$$$$$| $$\\ | $|  $$$$$$\"\n");
	printf("| $$__/ $| $$__   | $$___\\$| $$___\\$| $$__| $$_____| $$___\\$| $$__   | $$$\\| $| $$__| $$\n");
	printf("| $$    $| $$  \\   \\$$    \\ \\$$    \\| $$    $|      \\$$    \\| $$  \\  | $$$$\\ $| $$    $$\n");
	printf("| $$$$$$$| $$$$$   _\\$$$$$$\\_\\$$$$$$| $$$$$$$$\\$$$$$_\\$$$$$$| $$$$$  | $$\\$$ $| $$$$$$$$\n");
	printf("| $$__/ $| $$_____|  \\__| $|  \\__| $| $$  | $$     |  \\__| $| $$_____| $$ \\$$$| $$  | $$\n");
	printf("| $$    $| $$      \\$$    $ \\$$    $| $$  | $$      \\$$    $| $$     | $$  \\$$| $$  | $$\n");
	printf(" \\$$$$$$$ \\$$$$$$$$ \\$$$$$$  \\$$$$$$ \\$$   \\$$       \\$$$$$$ \\$$$$$$$$\\$$   \\$$\\$$   \\$$\n");
	printf("\033[0;30;47m\n\t\t\t\tBem-vindo ao Bessa-Sena!\n\n\033[0m");
}

void	choose_numbers(void)
{
	printf("Vamos criar sua aposta!\n");
	printf("Quantos números você deseja ter por jogo? \033[0;31m(máx.: 20)\033[0m\n");
	printf("\033[3mEx.: Mega-Sena 6 números por jogo, Quina são 5, Lotofácil são 15.\n\n\033[0m");
}

void	many_games(void)
{
	printf("Quantos jogos deseja fazer? \033[0;31m(máx.: 10)\033[0m\n\n");
}

void	redo_games(void)
{
	printf("Quer refazer suas apostas?\n\033[3mObs.: Essa ação apagará os jogos anteriores.\033[0m \033[0;32m(y/n)\033[0m\n");
}

void	goodbye_msg(void)
{
	printf("\033[0;30;42mBoa sorte nos jogos!\033[0m\n");
}