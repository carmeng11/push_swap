Para contar el número de nodos en una lista enlazada como la que has definido en tu estructura `t_stacka`, no hay una forma de evitar completamente el conteo nodo por nodo si estás utilizando una lista enlazada simple. La naturaleza de una lista enlazada implica que debes recorrerla desde el comienzo hasta el final para conocer su longitud.

Sin embargo, aquí hay algunas formas en que puedes optimizar la gestión de la memoria y quizás lograr la creación de nodos sin la repetición de la memoria `malloc` para cada nodo individual:

1. **Usar una función para agregar nodos**: Puedes crear una función para añadir nodos a la lista. Esto te permitirá hacer la asignación de memoria y el enlace en un solo lugar.

2. **Llenar la lista a partir de un array**: Si ya tienes un conjunto fijo de valores que deseas asignar a los nodos, podrías tener un array con esos valores y recorrer ese array para crear los nodos.

A continuación, te muestro un ejemplo de cómo podrías implementar la segunda opción, que usa un array para inicializar la lista:

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct s_stacka {
    int n;
    struct s_stacka *next;
} t_stacka;

// Función para agregar un nuevo nodo al final de la lista
t_stacka* add_node(t_stacka *stack, int value) {
    t_stacka *new_node = malloc(sizeof(t_stacka));
    new_node->n = value;
    new_node->next = NULL;
    
    // Si la lista está vacía, el nuevo nodo es el primero
    if (stack == NULL) {
        return new_node;
    }

    // De lo contrario, recorre la lista hasta el final
    t_stacka *current = stack;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return stack; // Retorna la cabeza de la lista
}

int main() {
    int values[] = {42, 52, 62, 72}; // Valores para los nodos
    t_stacka *stacka = NULL; // Inicializa la lista como vacía

    // Crear nodos de acuerdo al arreglo de valores
    for (int i = 0; i < 4; i++) {
        stacka = add_node(stacka, values[i]);
    }

    // Contar nodos
    int i = 0;
    t_stacka *current = stacka;
    while (current) {
        current = current->next;
        i++;
    }

    printf("Número de nodos: %d\n", i);

    // Liberar la memoria
    current = stacka;
    while (current) {
        t_stacka *next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
```

### Explicación:

1. **Función `add_node`**: Esta función toma un puntero a la cabeza de la lista (`stack`) y un valor, crea un nuevo nodo y lo agrega al final de la lista. Este manejo hace el código más modular y limpio.

2. **Arrays**: Utilizamos un array llamado `values` para definir los valores que queremos que tengan los nodos. De esta forma, puedes inicializar la lista de manera más eficiente.

3. **Conteo de nodos y liberación de memoria**: Se mantiene la parte donde se cuenta el número de nodos y se libera la memoria al final.

Recuerda que, aunque puedes optimizar la creación y el manejo de nodos, el conteo de nodos en una lista enlazada siempre requerirá recorrerla uno por uno, dado que no tienes acceso directo a la longitud de la lista.