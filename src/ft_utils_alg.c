/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_alg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:55:16 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:21:46 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assig_index(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*temp2;
	int		index;

	temp = *stack_a;
	while (temp != NULL)
	{
		index = 0;
		temp2 = *stack_a;
		while (temp2 != NULL)
		{
			if (temp->n > temp2->n)
				index++;
			temp2 = temp2->next;
		}
		temp->index = index;
		temp = temp->next;
	}
}

bool	is_sorted(t_stack **stack_a)
{
	t_stack	*temp;

	temp = *stack_a;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->index < temp->next->index)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

t_stack	*biggest_stack(t_stack **stack_a)
{
	t_stack	*biggest_stack;
	t_stack	*current;

	current = *stack_a;
	biggest_stack = *stack_a;
	while (current != NULL)
	{
		if (current->index > biggest_stack->index)
			biggest_stack = current;
		current = current->next;
	}
	return (biggest_stack);
}

int	detect_index_position(t_stack **stack_a, int index)
{
	int		count;
	t_stack	*current;

	count = 1;
	current = *stack_a;
	while (current != NULL && current->index != index)
	{
		count++;
		current = current->next;
	}
	return (count);
}
