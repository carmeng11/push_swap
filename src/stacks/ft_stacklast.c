/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:54:52 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 16:54:53 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *ft_stacklast(t_stack *stack)  //devuelve el último nodo de la lista
{
	t_stack *tmp;

	if (!stack)
		return (NULL);
	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}