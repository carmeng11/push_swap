#include "push_swap.h"

void ft_stackadd_back(t_stack **alst, t_stack *new) //añade el nodo new al final de la lista
{
	t_stack *last;
	
	/* using ft_lstlast to get the last element of the list
	*/
	last = ft_stacklast(*alst);//accedemos al ultimo nodo de la lista
	/* if last is NULL, there is no list, so we set the list pointer
	* to point to the new element
	*/
	if (!last)
		*alst = new;
	/* we set the last's next variable to point to the new element
	*/
	last->next = new;
}

// void ft_stackadd_back(t_stack **alst, t_stack *new) //añade el nodo new al final de la lista
// {
// 	t_stack *last;
	
// 	/* using ft_lstlast to get the last element of the list
// 	*/
// 	last->n = ft_stacklast(*alst);//accedemos al ultimo nodo de la lista
// 	/* if last is NULL, there is no list, so we set the list pointer
// 	* to point to the new element
// 	*/
// 	if (!last)
// 		*alst = new;
// 	/* we set the last's next variable to point to the new element
// 	*/
// 	last->next = new;
// }

// int *ft_stacklast(t_stack *stack)  //devuelve el último nodo de la lista
// {
// 	t_stack *tmp;
// 	//int	lastnodo;
	
// 	if (!stack)
// 		return (NULL);
// 	tmp = stack;
// 		/* instead of looping directly over the element, we check if
// 	* there is a next element in the list, if not, that means we
// 	* reached the end and we have to return the current pointer
// 	* if we looped over the element directly like for ft_lstsize
// 	* we would be returning NULL every time
// 	*/
// 	while (tmp->next)
// 	{ //tenemos que decir mientras exista un siguiente nodo pq sino nos daría el ultimo null
// 		tmp = tmp->next;
// 		//lastnodo = tmp->n;
// 	}
// 	//ft_printf("El úlltimo nodo es:%d\n", lastnodo);
// 	return (tmp);
// }