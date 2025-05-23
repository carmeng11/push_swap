/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:54:30 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:11:33 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(int n)
{
	t_stack	*elem;

	elem = malloc(sizeof(t_stack));
	if (!elem)
		return (NULL);
	elem->n = n;
	elem->next = NULL;
	return (elem);
}
