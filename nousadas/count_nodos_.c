
#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura no tiene sentido declarar 3 variables int funciona 
//me saca el num de nodos pero no tiene sentido usar esta estructura
typedef struct s_stacka
{
    int n;
    int n1;
    int n2;
    struct s_stacka *next;
} t_stacka;

int main()
{
    // Crear nodos y enlazarlos
    t_stacka *stacka = malloc(sizeof(t_stacka)); // Reserva memoria para el primer nodo
    stacka->n = 42;
    stacka->n1 = 43;
    stacka->n2 = 44;
    stacka->next = malloc(sizeof(t_stacka)); // Reserva memoria para el segundo nodo

    stacka->next->n = 52;
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
    // current = stacka; // Reiniciar el puntero astacka para liberar memoria
    // t_stacka *temp;
    // while (current) {
    //     temp = current; // Almacenar el nodo actual
    //     current = current->next; // Mover al siguiente nodo
    //     free(temp); // Liberar el nodo actual
    // }

    return 0;
}


