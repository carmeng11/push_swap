/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:24:24 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/07 18:14:46 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_stackadd_front(stack_a, temp);
	if (flag == 1)
	{
		ft_printf("pa\n");
	}
}

void	pb(t_stack **stack_b, t_stack **stack_a, int flag)
{
	t_stack	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_stackadd_front(stack_b, temp);
	if (flag == 1)
	{
		ft_printf("pb\n");
	}
}
