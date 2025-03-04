#include "push_swap.h"

int main(int argc, char **argv)
{
    int i;
    int n;
    i = 1;
    while (i < argc)
    {
        n= atoi(argv[i]);
        printf("%d\n", n);
        i++;
    } 
    //Si no se especifican parámetros, el programa no deberá mostrar nada y deberá devolver el control al usuario
    //En caso de error, deberá mostrar Error seguido de un “\n” en la salida de errores estándar. Algunos de los 
    //posibles errores son: argumentos que no son enteros, arguments superiores a un número entero, y/o encontrar 
    //números duplicados.


    return (0);
}

int ft_printlist(t_stacka *stacka)
{
    int i;
    t_stacka.n = 42;
    
    i = 0;
    while (stacka)
    {
        stacka = stacka->next;
        i++;
    }
    return (0);
}







