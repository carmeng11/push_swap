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


// static void	push_swap(t_stack *stack_a, t_stack *stack_b)
// {
// 	int	len;

// 	assig_index(&stack_a);
// 	len = ft_stacksize(stack_a);
// 	if (!is_sorted(&stack_a))
// 	{
// 		if (ft_stacksize(stack_a) == 2) //si no está ordenado hacemos un swap
// 			sa(&stack_a, 1);
// 		else if (ft_stacksize(stack_a) == 3)
// 			sort_three_node(&stack_a);
// 		else if (ft_stacksize(stack_a) == 4)
// 			sort_four_node(&stack_a, &stack_b);
// 		else if (ft_stacksize(stack_a) == 5)
// 			sort_five_node(&stack_a, &stack_b);
// 		else
// 			k_sort(&stack_a, &stack_b, len);
// 	}
// }

int	ft_check_vacio(char **nums,t_stack **stack)
{
	
	if (*nums == (void *)0)
	{
		// free(nums);
		// return (ft_error(), 1);
		ft_error_strmat(nums,stack);
	}
			
	return (0);
}
// static void ft_free_matrix(char **matrix)
// {
// 	int i = 0;
// 	while (matrix[i])
// 	{
// 		free(matrix[i]);
// 		i++;
// 	}
// 	free(matrix);
	
// }

int	init_stack(int argc, char **argv, t_stack **stack)
{
	int		i;
	int		j;
	//t_stack	*new;
	//int		n;
	char	**nums;

	nums = NULL;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		nums = ft_split(argv[i], ' ');
		//printf("control split");
		ft_check_vacio(nums,stack);
		while (nums[j])
		{
			ft_printf("Contenido del array antes del atoi %s\n", nums[j]);
			if (!ft_check_atoi_push(nums[j],stack,nums))
			{
				//return(0);
				//ft_stackclear(stack);
				printf("hola\n");
				ft_error_strmat(nums,stack);
			}
			//n = ft_atoi_push(nums[j]);
			//new = ft_stacknew(n);
			ft_stackadd_back(stack, ft_stacknew(ft_atoi_push(nums[j],stack)));
			//ft_stackadd_back(stack, new);
			free(nums[j]);
			printf("Imprimo el contenido del nodo: %d\n", ft_stacklast(*stack)->n);
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
	//t_stack	**stack_a_num;
	
	stack_a = NULL;
	stack_b = NULL;

	//init_stack(argc, argv, &stack_a);
	if (!init_stack(argc, argv, &stack_a))//declarando variable
	{
		//ft_stackclear(&stack_a);
		ft_error(&stack_a);
	}
	//ft_stackclear(&stack_a);//si se limpia aqui no hade el mvto
	//ra(&stack_a, 1);//si imprimo los num da leaks de memoria
	//rb(&stack_b, 1);
	//sa(&stack_a, 1);
	//rra(&stack_a, 1);
	//sa(stack_a_num, 1);
	pb(&stack_b, &stack_a, 1);
	//push_swap(stack_a, stack_b);
	//assig_index(&stack_a);
	ft_stackclear(&stack_a); //es necesario para que no de leak de memoria en rotate pero lo da en push
	ft_stackclear(&stack_b); //No soluciona el leak de memoria en el stack_b
	//ft_stackclear(*(&stack_a_num)); //se puede omitir
	//pa(stack_a_num, &stack_b, 1);
	//pb(&stack_b, stack_a_num, 1);
	//pa(init_stack(argc, argv, &stack_a), &stack_b, 1);//funcion dentro de funcion
	//pb(&stack_b,  init_stack(argc, argv, &stack_a), 1);
	return 0;
}
