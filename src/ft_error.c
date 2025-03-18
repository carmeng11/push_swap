#include "push_swap.h"

void	ft_error()
{
	ft_putstr_fd("Error de mi funcion yuju", STDERR_FILENO);
	exit(EXIT_FAILURE);
	//exit(1) como lo tiene Mac
	//return (1);
}
