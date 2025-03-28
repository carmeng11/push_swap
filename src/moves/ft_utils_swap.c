/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:55:46 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/28 19:10:21 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a, int flag)
{
	t_stack	*temp; 
	t_stack *temp2;
 
	if (!stack_a || *stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	temp = *stack_a; //temp = 1
	*stack_a = (*stack_a)->next; //es muy importante el orden tengo el puntero en 2
	temp2 = temp->next; //temp2 la situo en el 2
	temp->next = NULL; //tengo a temp aislado
	*stack_a = (*stack_a)->next; //ahora pongo el puntero de stack en el 3
	temp2->next = NULL;//aislo a temp2 dejandole solo el 2
	ft_stackadd_front(stack_a, temp);//llevo al frente primero el 1
	ft_stackadd_front(stack_a, temp2);//luego llevo el 2

	if (flag == 1)
    {
		ft_printf("sa\n");
    	// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->n);
		// while ((*stack_a)->next)
        // {
		// 	(*stack_a) = (*stack_a)->next;
		// 	ft_printf("Siguientes nodos: \n%d\n", (*stack_a)->n);
		// }
        //(*stack_a)->next = NULL;
    }
}
// void	sa(t_stack **stack_a, int flag)
// {
// 	t_stack	*temp; 
// 	t_stack *temp2 = NULL;
 
// 	if (!stack_a || *stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp = *stack_a; //temp = 1
// 	temp2 = temp->next;//temp2 = 2;por qué no stack_a->next
// 	//*stack_a = (*stack_a)->next; //no funciona
// 	temp->next = temp2->next; //el siguiente de temp es el siguiente de temp2, es decir, el 3
// 	temp2->next = temp; //ahora digo que el siguiente de 2 sea temp, es decir, el 1
// 	*stack_a = temp2;

// 	if (flag == 1)
//     {
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


//funcion de konrad que no entiendo muy bien
// void	sa(t_stack **stack_a, int flag)
// {
// 	t_stack	*temp;

// 	if (*stack_a == NULL || (*stack_a)->next == NULL)
// 		return ;
// 	temp = (*stack_a)->next; //hago que temp sea 2
// 	(*stack_a)->next = temp->next;//situo el puntero de a en el siguiente al 2, el 3
// 	temp->next = *stack_a; //ahora el siguiente de temp el 3 digo que sea el puntero
// 	*stack_a = temp;
// 	if (flag == 1)
// 	 {
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

void	sb(t_stack **stack_b, int flag)
{
	t_stack	*temp; 
	t_stack *temp2;
 
	if (!stack_b || *stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	temp = *stack_b; //temp = 1
	*stack_b = (*stack_b)->next; //es muy importante el orden 
	temp2 = temp->next;
	temp->next = NULL;
	*stack_b = (*stack_b)->next;
	temp2->next = NULL;
	ft_stackadd_front(stack_b, temp);
	ft_stackadd_front(stack_b,temp2);

	if (flag == 1)
    {
		ft_printf("sb\n");
    	ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_b)->n);
		// ft_printf("Primer nodo de stack_a:\n%d\n", (*stack_a)->next->n);
		while ((*stack_b)->next)
        {
			(*stack_b) = (*stack_b)->next;
			ft_printf("Siguientes nodos: \n%d\n", (*stack_b)->n);
		}
        (*stack_b)->next = NULL;
    }
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	sa(stack_a, 1);
	sb(stack_b, 1);
}

