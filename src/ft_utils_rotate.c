/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:11:20 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/21 20:21:39 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack **stack_a, bool flag)
{
	t_stack	*temp;

	if (*stack_a == NULL)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_stackadd_back(stack_a, temp);
	if (flag == true)
		ft_printf("pa\n");
}
//funcion konrad
void	ra(t_stack **a, int flag)
{
	t_stack	*temp;
	t_stack	*move_node;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = NULL;
	move_node = *a;
	while (move_node->next != NULL)
		move_node = move_node->next;
	move_node->next = temp;
	if (flag == 1)
		ft_putstr_fd("ra\n", 1);
}
//funcion Pablo
void	ra(t_stack **stack_a, bool flag)
{
	t_stack	*temp_first;
	t_stack	*temp_last;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp_first = *stack_a;
	temp_last = *stack_a;
	while (temp_last->next != NULL)
	{
		temp_last = temp_last->next;
	}
	*stack_a = temp_first->next;
	temp_last->next = temp_first;
	temp_first->next = NULL;
	if (flag == true)
		ft_printf("ra\n");
}