
#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura
typedef struct s_stacka
{
    int n;
    struct s_stacka *next;
} t_stacka;

int main()
{
    // Crear nodos y enlazarlos
	//hay que hacer malloc, sino da error
    t_stacka *stacka = malloc(sizeof(t_stacka)); // Reserva memoria para el primer nodo
    stacka->n = 42;
    stacka->next = malloc(sizeof(t_stacka)); // Reserva memoria para el segundo nodo
    stacka->next->n = 52;
    stacka->next->next = malloc(sizeof(t_stacka)); // Termina la lista
	stacka->next->next->n = 62;
	stacka->next->next->next = malloc(sizeof(t_stacka)); //como reservamos memoria en toda la lista sin ir uno a uno
	stacka->next->next->next->n = 72;
	//¿Como enlazamos toda la lista sin ir nodo a nodo??

    int i = 0;
    t_stacka *current = stacka; // Usar un puntero temporal para recorrer la lista

	//es necesario hacer el conteo sobre otra estructura que hemos copiado?
    // Contar nodos
    while (current) 
	{
		current = current->next;
		i++;
	}
 	// while (stacka) 
	// {
	// 	stacka = stacka->next;
	// 	i++;
    // }

   
    printf("Número de nodos: %d\n", i);

    //Liberar memoria
    current = stacka; // Reiniciar el puntero astacka para liberar memoria
    t_stacka *temp;
    while (current) {
        temp = current; // Almacenar el nodo actual
        current = current->next; // Mover al siguiente nodo
        free(temp); // Liberar el nodo actual
    }

    return 0;
}

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	i = 1;
	while (i < argc)
	{
		n = atoi(argv[i]);
		printf("%d\n", n);
		i++;
	}
	return (0);
}	