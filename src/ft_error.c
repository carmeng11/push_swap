/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 18:03:39 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:23:23 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_stack **stack)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	ft_stackclear(stack);
	exit(EXIT_FAILURE);
}

void	ft_error_str(char *str, t_stack **stack)
{
	free(str);
	ft_stackclear(stack);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(1);
}

void	ft_error_strmat(char **str, t_stack **stack)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	ft_stackclear(stack);
	exit(1);
}

void	ft_error_stack(t_stack **stack)
{
	if (stack != NULL)
		ft_stackclear(stack);
	ft_putstr_fd("Error\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
