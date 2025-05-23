/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:40:07 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/07 18:19:29 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **stack)
{
	ft_printf("Primer nodo del stack:\n%d\n", (*stack)->n);
	while ((*stack)->next)
	{
		(*stack) = (*stack)->next;
		ft_printf("Siguientes nodos: \n%d\n", (*stack)->n);
	}
}
