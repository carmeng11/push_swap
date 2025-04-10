/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:55:38 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:30:01 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_node(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	if (temp->index == 1 && temp->next->index == 2)
		return (rra(stack, 1));
	if (temp->index == 0 && temp->next->index == 2)
		return (sa(stack, 1), ra(stack, 1));
	if (temp->index == 1 && temp->next->index == 0)
		return (sa(stack, 1));
	if (temp->index == 2 && temp->next->index == 0)
		return (ra(stack, 1));
	else
		return (ra(stack, 1), sa(stack, 1));
}

void	sort_four_node(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_stacksize(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0)
		{
			if (detect_index_position(stack_a, 0) <= (ft_stacksize(*stack_a)
					/ 2))
				ra(stack_a, true);
			else
				rra(stack_a, true);
		}
		if ((*stack_a)->index == 0)
			pb(stack_b, stack_a, 1);
	}
	if (!is_sorted(stack_a))
	{
		assig_index(stack_a);
		sort_three_node(stack_a);
	}
	pa(stack_a, stack_b, 1);
}

void	sort_five_node(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_stacksize(*stack_a) > 3)
	{
		if ((*stack_a)->index != 0 && (*stack_a)->index != 1)
		{
			if ((detect_index_position(stack_a, 0) <= (ft_stacksize(*stack_a)
						/ 2)) || (detect_index_position(stack_a,
						1) <= (ft_stacksize(*stack_a) / 2)))
				ra(stack_a, 1);
			else
				rra(stack_a, 1);
		}
		if (((*stack_a)->index == 0 || (*stack_a)->index == 1))
			pb(stack_b, stack_a, 1);
	}
	if (!is_sorted(stack_a))
	{
		assig_index(stack_a);
		sort_three_node(stack_a);
	}
	if (is_sorted(stack_b))
		sb(stack_b, 1);
	pa(stack_a, stack_b, 1);
	pa(stack_a, stack_b, 1);
}
