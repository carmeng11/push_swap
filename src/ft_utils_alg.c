/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_alg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:55:16 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 18:52:58 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//explicacion con estos valores 3 1 4 2
void	assig_index(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*temp2;
	int		index;

	temp = *stack_a; //Asignamos el puntero a la cabeza de la pila a temp = 3
	while (temp != NULL) // Mientras temp no sea nulo para poder tener para comparar
	{
		index = 0; //  Reiniciamos el índice a 0 para el nuevo elemento temp
		temp2 = *stack_a;
		while (temp2 != NULL)//mientras temp2 no sea nulo
		{					 	
			if (temp->n > temp2->n) // Si el valor del nodo `temp` es mayor que el de `temp2`, se incrementa el índice. 3 > 1
				index++; // Incrementamos el índice, porque hay un elemento menor index = 1
			temp2 = temp2->next; // hacemos que temp2 sea el siguiente, ahora es 1
		}         //como 3 es mayor que 1 se ha incrementado el indice a 1, hay otro número menor que 3, el 2, por lo que el indice se incrementa uno más
				//pasa a ser index = 2
		temp->index = index;// el index de temp(3) = 2 / el index de temp(1) = 0 / el index de temp(4) = 3 / el index de temp(2) es 1
		temp = temp->next; // Ahora temp pasa a ser el siguiente, temp(1), no hay nodos menores de 1, así que se queda con index = 0
	   //luego procesamos el nodo de valor temp(4). los valores menores son 3, el 1 2 y 3, por lo que index se incrementa 3, de 0 a 3
		//y por ultimo procesamos el node de valor temp(2). Solo tiene un valor menos, el 1, así que aumenta el valor del indice a 1
	} 	
		//imprimo los indices comentarlo
		temp = *stack_a;
		while (temp->next)
		{
			ft_printf("%d\n", temp->index);
			temp = temp->next;
		}
		ft_printf("%d\n", temp->index);
}


bool	is_sorted(t_stack **stack_a) //si está ordenada retorna 1, si no lo está retorna 0
{
	t_stack	*temp;

	temp = *stack_a;
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->index < temp->next->index)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}











