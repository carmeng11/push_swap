#include "push_swap.h"
//recorremos lista y buscamos el nodo que contenga ese entero compare

void    ft_stackdelete(t_stack **stack, int compare)
{
    t_stack *now;
    t_stack *prev;

    if (*stack == NULL)
        return;
    now = *stack;
    prev = NULL;
    while (now && now->n != compare)
    {
        prev = now;
        now = now->next;
    }
    if (!now)
        return;
    if (prev == NULL)
        *stack = now->next;
    else
        prev->next = now->next;
    free(now);
}

