#include "push_swap.h"

void	ft_error()
{
	ft_putstr_fd("Error de mi funcion yuju", STDERR_FILENO);
	exit(EXIT_FAILURE);
	//exit(1) como lo tiene Mac
	//return (1);
}
int	ft_check_vacio(char **nums)
{
	
	if (*nums == (void *)0)
			return (ft_error(), 1);
	return (0);
}
// int	ft_check_void(char **argv)
// {
// 	int	j;

// 	j = 0;
// 	if (nums[j] == (void *)0)
// 			return (ft_error(), 1);
// 	return (0);
// }

