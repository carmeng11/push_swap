/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:55:46 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/07 18:17:31 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a, int flag)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (!stack_a || *stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp2 = temp->next;
	temp->next = NULL;
	*stack_a = (*stack_a)->next;
	temp2->next = NULL;
	ft_stackadd_front(stack_a, temp);
	ft_stackadd_front(stack_a, temp2);
	if (flag == 1)
	{
		ft_printf("sa\n");
	}
}

void	sb(t_stack **stack_b, int flag)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (!stack_b || *stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp2 = temp->next;
	temp->next = NULL;
	*stack_b = (*stack_b)->next;
	temp2->next = NULL;
	ft_stackadd_front(stack_b, temp);
	ft_stackadd_front(stack_b, temp2);
	if (flag == 1)
	{
		ft_printf("sb\n");
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
