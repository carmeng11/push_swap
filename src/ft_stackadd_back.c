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