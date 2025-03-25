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


t_stack	**init_stack(int argc, char **argv, t_stack **stack)
{
	int		i;
	int		j;
	t_stack	*new;
	int		n;
	char	**nums;
	//t_stack	*stack_b;
	//stack_b = NULL;
	/*stack_b = malloc(sizeof(t_stack));
	if (!*stack_b || !stack_b)
		return (NULL);*/

	nums = NULL;
	i = 0;
	while (++i < argc)
	{
		j = 0;
		nums = ft_split(argv[i], ' ');
		ft_check_vacio(nums);
		while (nums[j])
		{
			ft_printf("Contenido del array antes del atoi %s\n", nums[j]);
			n = ft_atoi_push(nums[j]);
			new = ft_stacknew(n);
			ft_stackadd_back(stack, new);
			free(nums[j]);
			printf("Imprimo el contenido del nodo: %d\n", new->n);
			j++;
		}
		free(nums);
		//i++;
	}
	ft_check_duplicates(stack);
	//pa(stack, &stack_b, 1);
	//printf("%d", new->n);me impime el último nodo
	return (stack);
}


int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	t_stack	**stack_a_num;

	stack_a = NULL;
	stack_b = NULL;

	//init_stack(argc, argv, &stack_a);
	stack_a_num = init_stack(argc, argv, &stack_a);//declarando variable
	//ft_stackclear(&stack_a);//si se limpia aqui no hade el mvto
	//ra(stack_a_num, 1);//si imprimo los num da leaks de memoria
	//sa(stack_a_num, 1);
	//rra(stack_a_num, 1);
	sa(stack_a_num, 1);
	//pb(&stack_b, stack_a_num, 1);
	ft_stackclear(&stack_a); //es necesario para que no de leak de memoria en rotate pero lo da en push
	//ft_stackclear(&stack_b); No soluciona el leak de memoria en el stack_b
	//ft_stackclear(*(&stack_a_num)); //se puede omitir
	//pa(stack_a_num, &stack_b, 1);
	//pb(&stack_b, stack_a_num, 1);
	//pa(init_stack(argc, argv, &stack_a), &stack_b, 1);//funcion dentro de funcion
	//pb(&stack_b,  init_stack(argc, argv, &stack_a), 1);

	return 0;
}
