#include "push_swap.h"


void	ft_stackdelone(t_stack *stack, void (*del)(void *))
{
	if (!stack || !del)
		return ;
	del(stack->n);
	free(stack);
}