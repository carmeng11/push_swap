/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:24:24 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 20:39:00 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	pa(t_stack **stack_a, t_stack **stack_b, int flag)
// {
// 	t_stack	*temp;

// 	if (*stack_b == NULL)
// 		return ;

// 	temp = *stack_b;
// 	*stack_b = (*stack_b)->next;
// 	ft_stackadd_front(stack_a, temp);
// 	if (flag == 1)
// 	{
// 		ft_printf("pa\n");
// 		temp = *stack_a;
// 		print_stack(&temp);
// 	}
// }


void	pb(t_stack **stack_b, t_stack **stack_a, int flag)
{
	t_stack	*temp;
	//t_stack *temp2 = NULL;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_stackadd_front(stack_b, temp);
	if (flag == 1)
	{
		ft_printf("pb\n");
		// temp = *stack_a;
		// temp2 = *stack_b;
		// print_stack(&temp);
		// print_stack(&temp2);
		//con un numero solo, da segmentacion por estos print, acuerdate de quitarlos quien sea
	}
}
