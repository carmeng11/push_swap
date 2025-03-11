#include "push_swap.h"

t_stack *ft_stacknew(int n) //duda ponemos int n
{
    /* declaring the new list element
     */
    t_stack *elem;
    
    /* allocating the memory for the new element
     */
    elem = malloc(sizeof(t_stack));
    if (!elem)
        return (NULL);
    /* setting the content of the new element
     * to the 'content' parameter
     * and setting the 'next' to NULL
     */
    elem->n = n;
    elem->next = NULL;
    /* finally, we return the created element
     */
    return (elem);
}