/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackdelete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:53:58 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 16:53:59 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//recorremos lista y buscamos el nodo que contenga ese entero compare

void    ft_stackdelete(t_stack **stack, int compare)
{
    t_stack *now;
    t_stack *prev;

    if (*stack == NULL)
        return;
    now = *stack;
    prev = NULL;
    while (now && now->n != compare)
    {
        prev = now;
        now = now->next;
    }
    if (!now)
        return;
    if (prev == NULL)
        *stack = now->next;
    else
        prev->next = now->next;
    free(now);
}

