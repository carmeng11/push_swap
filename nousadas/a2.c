
#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura
typedef struct s_stacka
{
    int num;
    struct s_stacka *next;
} t_stacka;

int main()
{
    // Crear nodos y enlazarlos
    t_stacka    *stacka = malloc(sizeof(t_stacka)); // Reserva memoria para el primer nodo
    t_stacka    n;
    t_stacka    n1;
    t_stacka    n2;
    n.num = 42;
    n1.num = 43;
    n2.num = 44;
    stacka->next = malloc(sizeof(t_stacka)); // Reserva memoria para el segundo nodo

    stacka->next->n = 52; //falla pq tengo que seguir poniendo next como en escalera
    stacka->next->n1 = 53;
    stacka->next->n2 = 54;
    stacka->next->next = NULL; // Termina la lista

    int i = 0;
    t_stacka *current = stacka; // Usar un puntero temporal para recorrer la lista

    // Contar nodos
    while (current) {
        current = current->next;
        i++;
    }
   
    printf("Número de nodos: %d\n", i);

    // Liberar memoria
    /*current = stacka; // Reiniciar el puntero astacka para liberar memoria
    t_stacka *temp;
    while (current) 
    {
        temp = current; // Almacenar el nodo actual
        current = current->next; // Mover al siguiente nodo
        free(temp); // Liberar el nodo actual
    }*/

    return 0;
}
