/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:03:39 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 19:31:27 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stack **stack)
{
	ft_putstr_fd("Error de mi funcion yuju", STDERR_FILENO);
	ft_stackclear(stack);
	exit(EXIT_FAILURE);
	//exit(1) como lo tiene Mac
	//return (1);
}
void	ft_error_str(char *str ,t_stack **stack)
{
	free(str);
	ft_stackclear(stack);
	ft_putstr_fd("Error de str yuju", STDERR_FILENO);
	exit(1);
	//exit(EXIT_FAILURE);
	//exit(1) como lo tiene Mac
	//return (1);
}

void	ft_error_strmat(char **str,t_stack **stack)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	ft_putstr_fd("Error de strmat yuju", STDERR_FILENO);
	ft_stackclear(stack);
	exit(1);
}
void	ft_error_stack(t_stack **stack)
{
	if (stack != NULL)
		ft_stackclear(stack);
	ft_putstr_fd("Error de stack num rep yuju", STDERR_FILENO);
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

