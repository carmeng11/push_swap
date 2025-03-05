#include "push_swap.h"

int ft_stacksize(t_stack *stack)  //Cuenta el número de nodos de una lista "LIBRERIA".
{
	/* I used a tmp variable so that we don't modify the 
	* existing list
	*/
	t_stack *tmp;
	int i;
	tmp = stack;
	
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}