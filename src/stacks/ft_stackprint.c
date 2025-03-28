/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:09:54 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/25 20:11:29 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *list)
{
	t_stack	*now;

	now = list;
	while (now)
	{
		ft_printf("%d / %d \n", now->n, now->index);
		now = now->next;
	}
	ft_printf("NULL\n");
}