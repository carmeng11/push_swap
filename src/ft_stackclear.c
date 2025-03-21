
#include "push_swap.h"

void	ft_stackclear(t_stack **stack)
{
	t_stack *temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}