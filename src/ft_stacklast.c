#include "push_swap.h"

t_stack *ft_stacklast(t_stack *stack)  //devuelve el último nodo de la lista
{
	t_stack *tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}