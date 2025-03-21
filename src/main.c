/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:59:28 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/21 16:59:28 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_check_vacio(char **nums)
{
	
	if (*nums == (void *)0)
			return (ft_error(), 1);
	return (0);
}


int	init_stack(int argc, char **argv, t_stack **stack)
{
	int		i;
	int		j;
	t_stack	*new;
	int		n;
	char	**nums;

	nums = NULL;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		nums = ft_split(argv[i], ' ');
		ft_check_vacio(nums);
		while (nums[j])
		{
			ft_printf("%s\n", nums[j]);
			n = ft_atoi_push(nums[j]);
			new = ft_stacknew(n);
			ft_stackadd_back(stack, new);
			free(nums[j]);
			j++;
		}
		free(nums);
		//i++;
	}
	ft_check_duplicates(stack);
	return (1);
}


int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	init_stack(argc, argv, &stack_a);
	return 0;
}
