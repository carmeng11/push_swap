
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

// int	init_stack(int argc, char **argv, t_stack **stack)
// {
// 	int	i;
// 	int	n;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		n = atoi(argv[i]);
// 		ft_stackadd_back(stack, ft_stacknew(n)); //hacemos que n sea el nuevo nodo creado
// 		i++;
// 	}
// 	return (1);
// }	
int	init_stack(int argc, char **argv, t_stack **stack)
{
	int	i;
	int	n;
	t_stack	*new;

	i = 1;
	while (i < argc)
	{
		n = atoi(argv[i]);
		new = ft_stacknew(n);
		ft_stackadd_back(stack, new); //hacemos que n sea el nuevo nodo creado 
									//void ft_stackadd_back(t_stack **alst, t_stack *new)
		i++;
	}
	return (1);
}	

int main(int argc, char **argv)
{
	//t_stack *stack_a;
	//t_stack *stack_b;

    t_stack *stack_a = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
	if (!stack_a)
		return (1);
	init_stack(argc - 1, argv, &stack_a);// en init_stack mis argumentos los convierto a estructuras
   
	ft_stacksize(stack_a);
    // int i = 0;
    // t_stack *current = stack_a; // Usar un puntero temporal para recorrer la lista

	// //es necesario hacer el conteo sobre otra estructura que hemos copiado?
    // // Contar nodos
    // while (current) 
	// {
	// 	current = current->next;
	// 	//printf("%d\n", current->n);
	// 	i++;
	// }
    printf("Número de nodos: %d\n", ft_stacksize(stack_a));

    //Liberar memoria
	//ft_lstclear(stack_a, free);
    // current = stack_a; // Reiniciar el puntero astacka para liberar memoria
    // t_stack *temp;
    // while (current)	
	// {
    //     temp = current; // Almacenar el nodo actual
    //     current = current->next; // Mover al siguiente nodo
    //     free(temp); // Liberar el nodo actual
    // }

    return (0);
}

