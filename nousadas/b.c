//#include "push_swap.h"
#include <stdlib.h>
#include >


//int ft_printlist(t_stacka *stacka)
/*{
    t_stacka    stacka;
    int i;
    stacka.n = 42;
    
    i = 0;
    while (stacka)
    {
        stacka = stacka->next;
        i++;
    }
    return (i);
    printf("%d", stacka.n);
}*/
/*int main()
{
    t_stacka    stacka;
    
    stacka.n = 42;
    //ft_printlist("t_stacka.n");
    printf("%d", ft_printlist(stacka));
    return (0);
}*/

typedef struct  s_stacka
{
    int n;
    int n1;
    int n2;
    struct s_stacka *next;
}               t_stacka;


int main()
{
    t_stacka    *stacka;
    int i;
    stacka->n = 42;
    stacka->n1 = 43;
    stacka->n2 = 44;

    i = 0;
    while (stacka)
    {
        stacka = stacka->next;
        i++;
    }
    printf("%d", i);
    return (i);
}