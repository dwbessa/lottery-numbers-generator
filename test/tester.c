#include <stdio.h>
#include "mega_sena.h"

int	main()
{
	int	*array = malloc(8 * sizeof(int));
	int i = 0;
	int j = 256;

	while (i < 8)
	{
		array[i] = j;
		i++;
		j = j - 15;
	}
	printf("Depois de ordenar:\n");
	i = 0;
	array = sort_bet(array, 8);
	while (i < 8)
	{
		printf("%d - ", array[i]);
		i++;
	}
	free(array);
	return (0);
}