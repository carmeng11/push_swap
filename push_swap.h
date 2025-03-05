#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct  s_stack
{
    int n;
    struct s_stack *next;
} t_stack;

void ft_stackadd_back(t_stack **alst, t_stack *new);
//t_stack *ft_lstnew(void *content);
//t_stack *ft_lstnew(int n);
t_stack *ft_stacknew(int n);
//void ft_lstclear(t_stack *lst, void (*del)(void *));
//t_stack *ft_lstlast(t_stack *lst);
t_stack *ft_stacklast(t_stack *stack);
int ft_stacksize(t_stack *stack);


#endif