/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:11:20 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/28 18:55:08 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    ra(t_stack **stack_a, int flag)
{
    t_stack *temp;

    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return ;
    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = NULL;
    ft_stackadd_back(stack_a, temp);

    if (flag == 1)
	{
		ft_printf("ra\n");
		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
		temp = *stack_a;
		while ((temp)->next)
		{
			(temp) = (temp)->next;
			ft_printf("Siguientes nodos: \n%d\n", (temp)->n);
		}
	}
}

void    rb(t_stack **stack_b, int flag)
{
    t_stack *temp;

    if (*stack_b == NULL || (*stack_b)->next == NULL)
        return ;
    temp = *stack_b;
    *stack_b = (*stack_b)->next;
    temp->next = NULL;
    ft_stackadd_back(stack_b, temp);

    if (flag == 1)
	{
		ft_printf("rb\n");
		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_b)->n);
		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
		while ((*stack_b)->next)
		{
			(*stack_b) = (*stack_b)->next;
			ft_printf("Siguientes nodos: \n%d\n", (*stack_b)->n);
		}
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	ra(stack_a, 1);
	rb(stack_b, 1);
}
//funcion konrad
// void	rotate_a(t_stack **stack_a, int flag)
// {
// 	t_stack	*temp;
// 	t_stack	*move_node;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp = *stack_a;
// 	*stack_a = (*stack_a)->next;
// 	temp->next = NULL;
// 	move_node = *stack_a;
// 	while (move_node->next != NULL)
// 		move_node = move_node->next;
// 	move_node->next = temp;
// 	if (flag == 1)
// 	{
// 		ft_printf("rotate_a\n");
// 		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
// 		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
// 		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->next->n);
// 		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->next->next->n);
// 		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->next->next->next->n);
// 	}
// }
//funcion Pablo
// void	ra(t_stack **stack_a, bool flag)
// {
// 	t_stack	*temp_first;
// 	t_stack	*temp_last;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp_first = *stack_a;
// 	temp_last = *stack_a;
// 	while (temp_last->next != NULL)
// 	{
// 		temp_last = temp_last->next;
// 	}
// 	*stack_a = temp_first->next;
// 	temp_last->next = temp_first;
// 	temp_first->next = NULL;
// 	if (flag == true)
// 		ft_printf("ra\n");
// }