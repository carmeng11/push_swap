#include "push_swap.h"

int ft_check_duplicates(int argc, char **argv)
{
	int i;
	int size;
	int	num;
	int	j;

	i = 1;
	size = 0;
	int *numbers = malloc((argc - 1) * sizeof(int)); 
	if (!numbers) 
		ft_error();
	while (i < argc) 
	{
		num = ft_atoi_push(argv[i]);
		j = 0;
		while (j < size)
		{
			if (num == numbers[j]) 
				ft_error();
			// {
			// 	printf("Error: El número %d se repite.\n", num);
			// 	free(numbers);
			// 	return (0);
			// }
			j++;
		}
		numbers[size] = num;
		size++;
		i++;
	}
    free(numbers);
    return (1);
}