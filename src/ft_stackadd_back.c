/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:56:45 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/21 16:57:22 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack *last;
	
	if (new == NULL)
		return;
	if (!*stack)
		*stack = new;
	else
	{
		last = ft_stacklast(*stack);
		last->next = new;
	}
}