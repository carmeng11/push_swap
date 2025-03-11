/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:34:31 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/11 18:46:36 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				n;
	struct s_stack	*next;
}	t_stack;

void	ft_stackadd_back(t_stack **alst, t_stack *new);
t_stack	*ft_stacknew(int n);
t_stack	*ft_stacklast(t_stack *stack);
int		ft_stacksize(t_stack *stack);
int		ft_atoi_push(char *str);
int		main(int argc, char **argv);
void	ft_error(void);
int		ft_check_duplicates(int argc, char **argv);
int		ft_atoi_push(char *str);
//int		ft_init_stack(int n, t_stack **stack);
void	free_node_stack(t_stack **stack);

#endif