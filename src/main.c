/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:26:01 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/11 19:25:20 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(int argc, char **argv, t_stack **stack)
{
	int		i;
	int		j;
	int		n;
	t_stack	*new;
	char	**num;

	num = NULL;
	//ft_printf("%d\n", argc);
	i = 1;
	while (i < argc)
	{
		j = 0;
		num = ft_split(argv[i], ' ');
		while(num[j])
		{
			n = ft_atoi_push(num[j]);
			ft_printf("%d\n", n);
			new = ft_stacknew(n);
			ft_stackadd_back(stack, new);
			j++;
		}
		//ft_stackclear(stack);
		i++;
	}
		//ft_printf("Número de nodos: %d\n", ft_stacksize(stack) - 1);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
	if (!stack_a)
		return (0);
	init_stack(argc, argv, &stack_a);// en init_stack mis argumentos los convierto a enodos de la estructura del stack_a
	ft_stacksize(stack_a);
	ft_printf("Número de nodos: %d\n", ft_stacksize(stack_a) - 1);
	return (0);
}
