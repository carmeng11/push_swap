/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/03/21 16:59:28 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/21 16:59:28 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	push_swap(t_stack *stack_a, t_stack *stack_b)
{
	int	len;

	assig_index(&stack_a);
	len = ft_stacksize(stack_a);
	if (!is_sorted(&stack_a))
	{
		if (ft_stacksize(stack_a) == 2)
			sa(&stack_a, 1);
		else if (ft_stacksize(stack_a) == 3)
			sort_three_node(&stack_a);
		else if (ft_stacksize(stack_a) == 4)
			sort_four_node(&stack_a, &stack_b);
		else if (ft_stacksize(stack_a) == 5)
			sort_five_node(&stack_a, &stack_b);
		else
			k_sort(&stack_a, &stack_b, len);
	}
}

static int	ft_check_empty(char **nums, t_stack **stack)
{
	if (*nums == (void *)0)
		ft_error_strmat(nums, stack);
	return (0);
}

int	init_stack(int argc, char **argv, t_stack **stack)
{
	int		i;
	int		j;
	char	**nums;

	nums = NULL;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		nums = ft_split(argv[i], ' ');
		ft_check_empty(nums, stack);
		while (nums[j])
		{
			if (!ft_check_atoi_push(nums[j]))
				ft_error_strmat(nums, stack);
			ft_stackadd_back(stack, ft_stacknew(ft_atoi_push(nums[j], stack)));
			free(nums[j]);
			j++;
		}
		free(nums);
	}
	ft_check_duplicates(stack);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!init_stack(argc, argv, &stack_a))
		ft_error_stack(&stack_a);
	push_swap(stack_a, stack_b);
	ft_stackclear(&stack_a);
	ft_stackclear(&stack_b);
	return (0);
}
