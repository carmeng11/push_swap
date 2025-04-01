#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct  s_stack
{
    int n;
    int index;
    //void    *content; 
    struct s_stack *next;
    //struct s_stack *prev;
} t_stack;

int	ft_atoi_push(char *str,t_stack **stack);
int	ft_check_atoi_push(char *str,t_stack **stack,char **nums);
int main(int argc, char **argv);
int	ft_check_duplicates(t_stack **stack_a);
int	init_stack(int argc, char **argv, t_stack **stack);
//t_stack	**init_stack(int argc, char **argv, t_stack **stack);
//void    ft_stackadd_front(t_stack **stack, t_stack *new);
//t_stack   *ft_stackadd_front(t_stack **stack, t_stack *new);
void    ft_stackdelete(t_stack **stack, int compare);
void  ft_stackadd_front(t_stack **stack, t_stack *new);
void print_stack(t_stack **stack);
void	assig_index(t_stack **stack_a);
bool	is_sorted(t_stack**stack_a);
//static void	push_swap(t_stack *stack_a, t_stack *stack_b);



/*  movimientos  */

void	pa(t_stack **stack_a, t_stack **stack_b, int flag);
void	pb(t_stack **stack_b, t_stack **stack_a, int flag);
void    ra(t_stack **stack_a, int flag);
void    rb(t_stack **stack_b, int flag);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a, int flag);
void	sa(t_stack **stack_b, int flag);
void	ss(t_stack **stack_a, t_stack **stack_b);
void    rra(t_stack **stack_a, int flag);

/* errores  */

void	ft_error(t_stack **stack);
void	ft_error_str(char *str,t_stack **stack);
void	ft_error_strmat(char **str,t_stack **stack);
void	ft_error_stack(t_stack **stack);
int	ft_check_vacio(char **nums,t_stack **stack);


/*listas*/

t_stack *ft_stacknew(int n);
t_stack *ft_stacklast(t_stack *stack);
int ft_stacksize(t_stack *stack);
void ft_stackdelone(t_stack *stack, void (*del)(void *));
void ft_stackadd_back(t_stack **alst, t_stack *new);
//void	ft_stackdelone(t_stack *stack, int (*del));
void	ft_stackclear(t_stack **stack);

#endif