// typedef struct	s_list
// {
// 	struct s_list	*next;
// 	void			*data;
// }					t_list;

//****************************************************************** */
int	ft_list_size(t_list *begin_list) //Cuenta el número de nodos de una lista. 
{
    if (begin_list == 0)
        return (0);
    return (1 + ft_list_size(begin_list->next));
}

		#include "libft.h"

		int ft_lstsize(t_list *lst)  //Cuenta el número de nodos de una lista "LIBRERIA".
		{
			/* I used a tmp variable so that we don't modify the 
			* existing list
			*/
			t_list *tmp;
			int i;
			
			tmp = lst;
			i = 0;
			/* we loop as long as tmp is not equal to null
			* since the last element's next point to null
			* we will be iterating over all the elements of the list
			*/
			while (tmp)
			{
				/* set the tmp to be its 'next' element */
				tmp = tmp->next;
				i++;
			}
			/* returning the count */
			return (i);
		}

	c

		t_list *ft_lstlast(t_list *lst)  //devuelve el último nodo de la lista
		{
			t_list *tmp;
			
			if (!lst)
				return (NULL);
			tmp = lst;
			/* instead of looping directly over the element, we check if
			* there is a next element in the list, if not, that means we
			* reached the end and we have to return the current pointer
			* if we looped over the element directly like for ft_lstsize
			* we would be returning NULL every time
			*/
			while (tmp->next)
				tmp = tmp->next;
			return (tmp);
		}

		void ft_lstadd_front(t_list **lst, t_list *new) //añade nuevo nodo al principio de la lista
		//Parámetros lst: la dirección de un puntero al primer nodo de una lista.
		//new: un puntero al nodo que añadir al principio de la lista.
		{
			/* setting the new element's next address to point
			* to the start of the existing list
			*/
			new->next = *lst;
			/* set the existing list pointer to point to the new element
			*/
			*lst = new;
		}


		void ft_lstadd_back(t_list **alst, t_list *new) //añade el nodo new al final de la lista
		{
			t_list *last;
			
			/* using ft_lstlast to get the last element of the list
			*/
			last = ft_lstlast(*alst);
			/* if last is NULL, there is no list, so we set the list pointer
			* to point to the new element
			*/
			if (!last)
				*alst = new;
			/* we set the last's next variable to point to the new element
			*/
			last->next = new;
		}

		
//************************************************************* */
//Write a function that takes a list and a function pointer, and applies this
//function to each element of the list.
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
//t_list *begin_list: Este es un puntero al inicio de una lista enlazada de tipo t_list.
//void (*f)(void *): Este es un puntero a una función que toma un puntero genérico como argumento 
//y no retorna nada (void). Esta función será aplicada a cada elemento de la lista.
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
*****************************************************************
			void ft_lstiter(t_list *lst, void (*f)(void *))
		{
			t_list *tmp;
			
			tmp = lst;
			/* loop while tmp is not null */
			while (tmp)
			{
				/* apply the function f to the content of the current
				* element
				*/
				f(tmp->content);
				/* set tmp to point to the next element */ 
				tmp = tmp->next;
			}
		}
//************************************************************* */

// Escriba una función llamada ft_list_remove_if que elimine de la
// lista pasada cualquier elemento cuyos datos sean "iguales" a los datos de referencia.
//cmp toma dos void* y devuelve 0 cuando ambos parámetros son iguales.

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
// TENEMOS QUE DECLARAR UN PUNTERO *CUR QUE APUNTE AL PRIMER NODO DE LA LISTA
//COMPARAMOS LOS DATOS DE ESTE PRIMER NODO CON DATA_REF
//SI SON IGUALES TIENE QUE ELIMINARLO Y PASAR AL SIGUIENTE NODO, LIBERAR MEMORIA DE *CUR Y LLAMAR RECURSIVAMENTE A LA FUNCION
// 
//parámetros: Un puntero doble que apunta al inicio de la lista enlazada. 
//Esto permite modificar el puntero del primer nodo si es necesario (por ejemplo, si se elimina el primer nodo).
//void *data_ref: Un puntero a los datos que se utilizarán para comparar con los elementos en la lista.
//int (*cmp)(): Una función de comparación que toma dos argumentos y devuelve 0 si son iguales.
{
	if (begin_list == NULL || *begin_list == NULL)
		return; //si cualquiera de las dos condiciones es nula, la función retorna sin hacer nada

	t_list *cur = *begin_list; //inicializamos un puntero llamado cur que apunta al primer nodo de la lista

	if (cmp(cur->data, data_ref) == 0)//comparación y eliminación data_ref son los datos que se utilizarán para comparar con los elementos en la lista.
	{
		*begin_list = cur->next; //si son igules el puntero que apunta al inicio de la lista (*begin_list) se actualiza
		// para que apunte al siguiente nodo (cur ->next) y elimina el primero
		free(cur);//se libera la memoria del nodo eliminado
		ft_list_remove_if(begin_list, data_ref, cmp);//se llama recursivamente a ft_list_remove_if para continuar buscando nodos que deban ser eliminados
	}
	else // Si el dato en el nodo actual no coincide con `data_ref`, la función llama recursivamente a sí misma 
	//para procesar el siguiente nodo en la lista (mediante `&cur->next`). 
	//Esto permite seguir verificando hasta llegar al final de la lista.
	{
		cur = *begin_list;
		ft_list_remove_if(&cur->next, data_ref, cmp); //DUDA CON EL &
	}
}



		void ft_lstclear(t_list *lst, void (*del)(void *))
		{
			t_list *tmp;
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
//******************************************************************** */
#include <stdlib.h>
#include "list.h"

t_list *sort_list(t_list* lst, int (*cmp)(int, int)) {
    int swap;
    t_list *start;

    start = lst;

    while (lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
		{
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = start;
        }
		else
		lst = lst->next;
    }
    return (start);
}


t_list *ft_lstnew(void *content)
{
    /* declaring the new list element
     */
    t_list *elem;
    
    /* allocating the memory for the new element
     */
    elem = malloc(sizeof(t_list));
    if (!elem)
        return (NULL);
    /* setting the content of the new element
     * to the 'content' parameter
     * and setting the 'next' to NULL
     */
    elem->content = content;
    elem->next = NULL;
    /* finally, we return the created element
     */
    return (elem);
}

void ft_lstadd_front(t_list **lst, t_list *new) //añade nuevo nodo al principio de la lista
		//Parámetros lst: la dirección de un puntero al primer nodo de una lista.
		//new: un puntero al nodo que añadir al principio de la lista.
		{
			/* setting the new element's next address to point
			* to the start of the existing list
			*/
			new->next = *lst;
			/* set the existing list pointer to point to the new element
			*/
			*lst = new;
		}




