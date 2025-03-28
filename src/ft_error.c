/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:03:39 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/28 18:17:55 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error()
{
	ft_putstr_fd("Error de mi funcion yuju", STDERR_FILENO);
	exit(EXIT_FAILURE);
	//exit(1) como lo tiene Mac
	//return (1);
}
//funcion error konrad Pablo
// void	fun_error(t_stack **stack)
// {
// 	if (stack != NULL)
// 		free_lst(stack);

// 	ft_putstr_fd("Error\n", 2);
// 	exit(1);
// }

// int	ft_check_void(char **argv)
// {
// 	int	j;

// 	j = 0;
// 	if (nums[j] == (void *)0)
// 			return (ft_error(), 1);
// 	return (0);
// }

