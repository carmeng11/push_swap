#include "push_swap.h"
//#define MAX_NUMBERS 1000
//#define ERROR -1.1

int	ft_init_stack(int n, t_stack **stack)
{
	int	nodo;
	t_stack	*new;
	new = ft_stacknew(n);
	nodo = new->n;
	ft_stackadd_back(stack, new); //void ft_stackadd_back(t_stack **alst, t_stack *new)
	ft_printf("El nodo es %d\n", nodo);
	return (1);
}
int main(int argc, char **argv) 
{
	int	n;
	(void)n;
	t_stack *stack_a = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
	if (!stack_a)
		return (1);
	if (ft_check_duplicates(argc, argv))
	{
		int i = 1;
		while (i < argc) 
		{
			n = ft_atoi_push(argv[i]);
			ft_printf("El argumento convertido a int es:%d\n", n);
			ft_init_stack(n, &stack_a);
			i++;
		}
		ft_printf("Número de nodos: %d\n", ft_stacksize(stack_a) - 1);
		ft_printf("El último nodo de la lista es %d\n", ft_stacklast(stack_a) );
	}
	return (0);
}



