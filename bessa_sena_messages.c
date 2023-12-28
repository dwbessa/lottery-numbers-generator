#include "bessa_sena.h"

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
	printf("\n\t\t\t\tBem-vindo ao Bessa-Sena!\n\n");
}

void	choose_numbers(void)
{
	printf("Vamos criar sua aposta! :-)\n");
	printf("Quantos números você deseja ter por jogo? (máx.: 20)\n");
	printf("Ex.: Mega-Sena 6 números por jogo, Quina são 5, Lotofácil são 15.\n\n");
}

void	many_games(void)
{
	printf("Quantos jogos deseja fazer? (máx.: 10)\n\n");
}

void	redo_games(void)
{
	printf("Quer refazer suas apostas?\nObs.: Essa ação apagará os jogos anteriores. (y/n)\n");
}

void	goodbye_msg(void)
{
	printf("Boa sorte nos jogos!");
}