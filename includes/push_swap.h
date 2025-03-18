#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>


typedef struct  s_stack
{
    int n;
    void    *content; 
    struct s_stack *next;
} t_stack;

void ft_stackadd_back(t_stack **alst, t_stack *new);
t_stack *ft_stacknew(int n);
t_stack *ft_stacklast(t_stack *stack);
int ft_stacksize(t_stack *stack);
void ft_stackdelone(t_stack *stack, void (*del)(void *));
void	ft_stackclear(t_stack **stack);
int	ft_atoi_push(char *str);
int	ft_ckeck_atoi_push(char *str);
int main(int argc, char **argv);
void	ft_error();
//int ft_check_duplicates(int argc, char **argv);
int ft_check_duplicates(char **nums);
int ft_check_duplicates(char **nums);
int	ft_atoi_push(char *str);
int	init_stack(int argc, char **argv, t_stack **stack);
//int	**init_stack(int argc, char **argv);


#endif