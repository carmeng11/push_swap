/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:24:24 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/21 21:05:04 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int n;
    struct s_stack *next;
} t_stack;

// void	pa(t_stack **stack_a, t_stack **stack_b, bool flag)
// {
// 	t_stack	*temp;

// 	if (*stack_b == NULL)
// 		return ;
// 	temp = *stack_b;
// 	*stack_b = (*stack_b)->next;
// 	ft_stackadd_front(stack_a, temp);
// 	if (flag == true)
// 		ft_printf("pa\n");
// }


// void	pb(t_stack **stack_b, t_stack **stack_a, bool flag)
// {
// 	t_stack	*temp;

// 	if (*stack_a == NULL)
// 		return ;
// 	temp = *stack_a;
// 	*stack_a = (*stack_a)->next;
// 	ft_stackadd_front(stack_b, temp);
// 	if (flag == true)
// 		ft_printf("pb\n");
// }

// void	ft_stackadd_front(t_stack **stack, t_stack *new)
// {
// 	if (new == NULL)
// 		return ;
// 	new->next = *stack;
// 	*stack = new;
// }

void	pa(t_stack **stack_a, t_stack **stack_b, int flag)
{
	t_stack	*temp;

	if (*stack_b == NULL)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = *stack_a;
	*stack_a = temp;
	printf("pb\n");
	if (flag == 1)
		//ft_putstr_fd("pa\n", 1);
		printf("pbyuju\n");
}

int main()
{
	printf("pb\n");
  
    t_stack *stack_a = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
    stack_a->n = 42;
    stack_a->next = malloc(sizeof(stack_a)); // Reserva memoria para el segundo nodo
    stack_a->next->n = 52;
    stack_a->next->next = malloc(sizeof(stack_a)); // Termina la lista
	stack_a->next->next->n = 62;
	stack_a->next->next->next = malloc(sizeof(stack_a)); //como reservamos memoria en toda la lista sin ir uno a uno
	stack_a->next->next->next->n = 72;

	t_stack *stack_b = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
    stack_b->n = 55;
    stack_b->next = malloc(sizeof(stack_b)); // Reserva memoria para el segundo nodo
    stack_b->next->n = 88;
  
	printf("pb2\n");
    int i = 0;
    t_stack *current = stack_a; // Usar un puntero temporal para recorrer la lista

	//es necesario hacer el conteo sobre otra estructura que hemos copiado?
    // Contar nodos
    while (current) 
	{
		current = current->next;
		i++;
	}
    printf("pb3\n");
	pa(&stack_a, &stack_b, 1);
    printf("Número de nodos: %d\n", i);
	    current = stack_a; // Reiniciar el puntero astacka para liberar memoria
    t_stack *temp;
    while (current) 
	{
        temp = current; // Almacenar el nodo actual
        current = current->next; // Mover al siguiente nodo
        free(temp); // Liberar el nodo actual
    }

    return 0;
}


