/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicates.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:56:35 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/28 18:18:19 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_duplicates(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*temp;

	current = *stack_a;
	while (current != NULL)
	{
		temp = current->next;
		while (temp != NULL)
		{
			if (current->n == temp->n)
			{
				//return (ft_error(), 1);
				ft_error_stack(stack_a);
			}
	
			temp = temp->next;
		}
		current = current->next;
	}
    return (0);
}
// void	comprove_dup_argv(t_stack **stack_a) //comprueba duplicados
// {
// 	t_stack	*current;
// 	t_stack	*temp;

// 	current = *stack_a;
// 	while (current != NULL)
// 	{
// 		temp = current->next;
// 		while (temp != NULL)
// 		{
// 			if (current->value == temp->value)
// 				fun_error(stack_a);
// 			temp = temp->next;
// 		}
// 		current = current->next;
// 	}
// }