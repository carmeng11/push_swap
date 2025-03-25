/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:11:20 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/25 17:51:31 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void    rra(t_stack **stack_a, int flag)
{
    t_stack *last;
    t_stack *first;

    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return ;
    last = ft_stacklast(*stack_a);
    first = ft_stackadd_front(stack_a, last);
	//last->next = NULL;
    *stack_a = first;
    if (flag == 1)
	{
		ft_printf("ra\n");
		ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
		while ((*stack_a)->next)
		{
			(*stack_a) = (*stack_a)->next;
			ft_printf("Siguientes nodos: \n%d\n", (*stack_a)->n);
		}
	}
}