
#include "push_swap.h"

/*void	ft_stackclear(t_stack **stack, void (*del)(void *))
{
	t_stack	*temp;

	if (!stack || !del)
		return ;
	while (*stack != NULL)
	{
		temp = (*stack)->next;
		del((*stack)->content);
		free(*stack);
		*stack = temp;
	}
}*/


void    ft_stackclear(t_stack **stack)
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