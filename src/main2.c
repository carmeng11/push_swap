
#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"


int	init_stack(int argc, char **argv, t_stack **stack)
{
	int	i;
	int	j;
	int	n;
	t_stack	*new;
	char	**num;
	num = NULL;

	i = 1;
	while (i < argc) 
	{
		j = 0;
		num = ft_split(argv[i], ' ');
		while (num[j])
		{
			n = ft_atoi_push(num[j]);
			ft_printf("%d\n", n);
			//ft_check_duplicates(argc, n);
				//ft_error();
			new = ft_stacknew(n);
			ft_stackadd_back(stack, new);
			j++;
		}
		i++;
	}
	return (1);
		//ft_printf("Número de nodos: %d\n", ft_stacksize(stack) - 1);
}
	/*while (i < argc)
	{
		n = atoi(argv[i]);
		new = ft_stacknew(n);
		ft_stackadd_back(stack, new); //hacemos que n sea el nuevo nodo creado 
		//podemos no declarar t_stack *new y directamente poner ft_stackadd_back(stack, ft_stacknew(n)) una función como parámetro 
									//void ft_stackadd_back(t_stack **alst, t_stack *new)
		i++;
	}
	return (1);*/


int main(int argc, char **argv)
{
    t_stack *stack_a = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
	if (!stack_a)
		return (1);
	init_stack(argc, argv, &stack_a);// en init_stack mis argumentos los convierto a enodos de la estructura del stack_a
   
	ft_stacksize(stack_a);
    printf("Número de nodos: %d\n", ft_stacksize(stack_a) - 1);

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

