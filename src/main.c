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


// void	push_swap(t_list **stack_a, t_list **stack_b)
// {
// 	int	len;

// 	check_dup_parse(stack_a);
// 	posicion_number(stack_a);
// 	len = count_argv(*stack_a);
// 	if (!is_ordered_list(stack_a))
// 	{
// 		if (len == 2)
// 			sa(stack_a, 1);
// 		else if (len == 3)
// 			three_stack(stack_a);
// 		else if (len == 4)
// 			four_stack(stack_a, stack_b);
// 		else if (len == 5)
// 			five_stack(stack_a, stack_b);
// 		else
// 			k_sort(stack_a, stack_b, len);
// 	}
// }


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
			//ft_printf("%s\n", nums[j]);
			n = ft_atoi_push(nums[j]);
			new = ft_stacknew(n);
			ft_stackadd_back(stack, new);
			ft_printf("Imprimo nodos: %d\n", new->n);
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
	void	pa(t_stack **stack_a, t_stack **stack_b, bool flag);
	//ft_printf("Imprimo nodos: %s\n", &stack_b->n);
	return 0;
}
