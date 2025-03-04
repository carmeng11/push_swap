#include "push_swap.h"

void ft_lstclear(t_stack *lst, void (*del)(void *))
{
	t_stack *tmp;
	/* loop over the list */
	while (*lst)
	{
		/* set the tmp to point to the next element of the list */
		tmp = (*lst)->next;
		/* use ft_lstdelone on the current element */
		ft_lstdelone(*lst, del);
		/* set the list pointer equal to tmp, so that we have a 
		* pointer to the next element
		*/
		*lst = tmp;
	}
	/* free the list pointer and set it to NULL */
	free(*lst);
	*lst = NULL;
}