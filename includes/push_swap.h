/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:06:25 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:06:25 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				n;
	int				index;
	struct s_stack	*next;
}	t_stack;

int		ft_atoi_push(char *str, t_stack **stack);
int		ft_check_atoi_push(char *str);
int		main(int argc, char **argv);
int		ft_check_duplicates(t_stack **stack_a);
int		init_stack(int argc, char **argv, t_stack **stack);
void	print_stack(t_stack **stack);

/*  moves  */

void	pa(t_stack **stack_a, t_stack **stack_b, int flag);
void	pb(t_stack **stack_b, t_stack **stack_a, int flag);
void	ra(t_stack **stack_a, int flag);
void	rb(t_stack **stack_b, int flag);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a, int flag);
void	sb(t_stack **stack_b, int flag);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a, int flag);
void	rrb(t_stack **stack_b, int flag);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* errors  */

void	ft_error_str(char *str, t_stack **stack);
void	ft_error_strmat(char **str, t_stack **stack);
void	ft_error_stack(t_stack **stack);

/*stacks*/

t_stack	*ft_stacknew(int n);
t_stack	*ft_stacklast(t_stack *stack);
int		ft_stacksize(t_stack *stack);
void	ft_stackadd_back(t_stack **alst, t_stack *new);
void	ft_stackclear(t_stack **stack);
void	ft_stackadd_front(t_stack **stack, t_stack *new);

/*alg*/
void	assig_index(t_stack **stack_a);
bool	is_sorted(t_stack **stack_a);
void	sort_three_node(t_stack **stack);
void	sort_four_node(t_stack **stack_a, t_stack **stack_b);
void	sort_five_node(t_stack **stack_a, t_stack **stack_b);
t_stack	*biggest_stack(t_stack **stack_a);
int		detect_index_position(t_stack **stack_a, int index);
void	insert_to_b_range(t_stack **stack_a, t_stack **stack_b, int digits);
int		rb_counter(t_stack *stack_b, int max_index);
void	k_sort(t_stack **stack_a, t_stack **stack_b, int digits);
int		ft_sqrt(int num);

#endif