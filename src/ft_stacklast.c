#include "push_swap.h"

t_stack *ft_stacklast(t_stack *stack)  //devuelve el último nodo de la lista
{
	t_stack *tmp;
	

	if (!stack)
		return (NULL);
	tmp = stack;
	/* instead of looping directly over the element, we check if
	* there is a next element in the list, if not, that means we
	* reached the end and we have to return the current pointer
	* if we looped over the element directly like for ft_lstsize
	* we would be returning NULL every time
	*/
	while (tmp->next) //tenemos que decir mientras exista un siguiente nodo pq sino nos daría el ultimo null
		tmp = tmp->next;
	return (tmp);
}