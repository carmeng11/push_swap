/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:11:20 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 16:51:37 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//funcion Pablo
// void	rra(t_stack **stack_a, int flag)
// {
// 	t_stack	*temp_last;
// 	t_stack	*temp_second_last;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp_last = (*stack_a);//es 1
// 	while (temp_last->next != NULL) //mientras  no sea nulo lo recorro
// 	{
// 		temp_second_last = temp_last;//el segundo temporal toma el valor del primero es 1
// 		temp_last = temp_last->next;//y el primer temporal del siguiente es 2
// 	}
// 	//cuando sale del bucle second_last es 4 y temp last es 5
// 	temp_second_last->next = NULL; //el siguiente a second last que es el 4 tenemos que hacerlo nulo
// 	temp_last->next = (*stack_a); //y last que es l 5, el siguiente tenemos que decile que sea el puntero de a para que tenga detras todo el stack
// 	*stack_a = temp_last;//y por ultimo hacemos que stack_a apunte ahora al 5
// 	if (flag == 1)
// 	  {
// 		ft_printf("sa\n");
//     	ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
// 		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
// 		while ((*stack_a)->next)
//         {
// 			(*stack_a) = (*stack_a)->next;
// 			ft_printf("Siguientes nodos: \n%d\n", (*stack_a)->n);
// 		}
//         (*stack_a)->next = NULL;
//     }
// }
//funciona mia
void	rra(t_stack **stack_a, int flag)
{
	t_stack	*temp; //temp = 1
	t_stack	*temp2;

	temp = *stack_a;
	
	while (temp->next)
	{
		temp2 = temp;//temp2 ahora vale 1
		temp = temp->next; //temp pasa a valer 2
	}
	//cuando sale del bucle temp2 vale 4 y temp 5
	temp2->next = NULL;
	ft_stackadd_front(stack_a, temp);
	if (flag == 1)
	{
		ft_printf("rra\n");
		temp = *stack_a;
		print_stack(&temp);
	}
}

// void	rra(t_stack **stack_a, int flag)
// {
// 	t_stack	*temp; //temp = 1
// 	t_stack	*last;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;

// 	last = ft_stacklast(*stack_a); //tenemos el 5
// 	temp = *stack_a;
	
// 	while (temp->next != last)
// 		temp = temp->next; //aqui ya llego hasta el 4
// 	temp->next = NULL; //el siguiente al 4 es nulo
// 	ft_stackadd_front(stack_a, last);
	
// 	if (flag == 1)
// 	{
// 		ft_printf("rra\n");
// 		temp = *stack_a;
// 		print_stack(&temp);
//   }
// }