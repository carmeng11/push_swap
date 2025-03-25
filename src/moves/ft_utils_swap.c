#include "push_swap.h"

// void	sa(t_stack **stack_a, int flag)
// {
// 	t_stack	*temp; 
// 	t_stack *temp2;
 
// 	if (!stack_a || *stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp = *stack_a; //temp = 1
// 	*stack_a = (*stack_a)->next; //es muy importante el orden 
// 	temp2 = temp->next;
// 	temp->next = NULL;
// 	*stack_a = (*stack_a)->next;
// 	temp2->next = NULL;
// 	ft_stackadd_front(stack_a, temp);
// 	ft_stackadd_front(stack_a, temp2);

// 	if (flag == 1)
//     {
// 		ft_printf("sa\n");
//     	ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
// 		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
// 		while ((*stack_a)->next)
//         {
// 			(*stack_a) = (*stack_a)->next;
// 			ft_printf("Siguientes nodos: \n%d\n", (*stack_a)->n);
// 		}
//         (*stack_a)->next = NULL;
//     }
// }
void	sa(t_stack **stack_a, int flag)
{
	t_stack	*temp; 
	t_stack *temp2;
 
	if (!stack_a || *stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a; //temp = 1
	temp2 = temp->next;
	temp->next = temp2->next;
	temp2->next = temp;
	*stack_a = temp2;

	if (flag == 1)
    {
		ft_printf("sa\n");
    	ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
		while ((*stack_a)->next)
        {
			(*stack_a) = (*stack_a)->next;
			ft_printf("Siguientes nodos: \n%d\n", (*stack_a)->n);
		}
        (*stack_a)->next = NULL;
    }
}

void	sb(t_stack **stack_b, int flag)
{
	t_stack	*temp; 
	t_stack *temp2;
 
	if (!stack_b || *stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b; //temp = 1
	*stack_b = (*stack_b)->next; //es muy importante el orden 
	temp2 = temp->next;
	temp->next = NULL;
	*stack_b = (*stack_b)->next;
	temp2->next = NULL;
	ft_stackadd_front(stack_b, temp);
	ft_stackadd_front(stack_b,temp2);

	if (flag == 1)
    {
		ft_printf("sb\n");
    	ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_b)->n);
		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
		while ((*stack_b)->next)
        {
			(*stack_b) = (*stack_b)->next;
			ft_printf("Siguientes nodos: \n%d\n", (*stack_b)->n);
		}
        (*stack_b)->next = NULL;
    }
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	sa(stack_a, 1);
	sb(stack_b, 1);
}

