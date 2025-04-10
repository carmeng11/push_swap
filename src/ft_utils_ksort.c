/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_ksort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 16:46:13 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:17:09 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int num)
{
	int	i;

	if (num < 4)
		return (1);
	i = 2;
	while (i * i < num)
	{
		i++;
	}
	if (i * i > num)
	{
		if ((i * i - num) < ((i - 1) * (i - 1) + (-num)))
			return (i);
	}
	return (i - 1);
}

void	insert_to_b_range(t_stack **stack_a, t_stack **stack_b, int digits)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(digits) * 7 / 5;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_b, stack_a, true);
			if (ft_stacksize(*stack_b) > 1)
				rb(stack_b, true);
			i++;
		}
		else if ((*stack_a)->index <= i + range)
		{
			pb(stack_b, stack_a, true);
			i++;
		}
		else
			ra(stack_a, true);
	}
}

int	rb_counter(t_stack *stack_b, int max_index)
{
	int	i;

	i = 0;
	while (stack_b != NULL && stack_b->index != max_index)
	{
		stack_b = stack_b->next;
		i++;
	}
	return (i);
}

void	k_sort(t_stack **stack_a, t_stack **stack_b, int digits)
{
	int			rb_count;
	int			rrb_count;

	insert_to_b_range(stack_a, stack_b, digits);
	while ((digits - 1) >= 0)
	{
		rb_count = rb_counter((*stack_b), (digits - 1));
		rrb_count = digits - rb_count;
		if (rb_count <= rrb_count)
		{
			while ((*stack_b)->index != (digits - 1))
				rb(stack_b, true);
			pa(stack_a, stack_b, true);
			digits--;
		}
		else
		{
			while ((*stack_b)->index != (digits - 1))
				rrb(stack_b, true);
			pa(stack_a, stack_b, true);
			digits--;
		}
	}
}
