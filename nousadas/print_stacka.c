#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	i = 1;
	while (i < argc)
	{
		n = atoi(argv[i]);
		printf("%d\n", n);
		i++;
	}
	printf("El número de nodos es%d:", i);
	return (0);
}								