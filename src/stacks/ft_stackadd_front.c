#include "push_swap.h"

void  ft_stackadd_front(t_stack **stack, t_stack *new)
{
    if (!stack || !new)
        return ;
    new->next = *stack;
    *stack = new;
}


// t_stack   *ft_stackadd_front(t_stack **stack, t_stack *new)
// {
//     if (!stack || !new)
//         return (NULL);
//     new->next = *stack;
//     *stack = new;
//     return (new);
// }


// void ft_stackadd_back(t_stack **stack, t_stack *new)
// {
// 	t_stack *last;
	
// 	if (new == NULL)
// 		return;
// 	if (!*stack)
// 		*stack = new;
// 	else
// 	{
// 		last = ft_stacklast(*stack);
// 		last->next = new;
// 	}
// }