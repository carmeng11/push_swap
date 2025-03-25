/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:56:45 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/25 18:03:03 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack *last;
	
	if (!stack || !new)
		return;
	if (!*stack)
	{
		*stack = new;
		//new->next = NULL;
	}
	else		
	{
		last = ft_stacklast(*stack);
		last->next = new;
		//new->next = NULL;
	}
}

