/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liberar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:27:18 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/01 18:40:38 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	liberar(char *str, t_stack **stack, char **matrix)
{
	if (str)
		free(str);
	if (stack)
		ft_error_stack(stack);
	if (matrix)
		ft_error_strmat(matrix);
	exit(1); //si salimos aqui no salimos en ls funciones de liberacion de memoria
}

// liberar(str, NULL, NULL) si solo quiero liberar una y salir
//funcines solo de liberacion de memoria

void	ft_error(t_stack **stack)
{
	ft_putstr_fd("Error de mi funcion yuju", STDERR_FILENO);
	ft_stackclear(stack);
	//exit(EXIT_FAILURE);
	//return (1);
}
void	ft_error_str(char *str ,t_stack **stack)
{
	free(str);
	ft_stackclear(stack);
	ft_putstr_fd("Error de str yuju", STDERR_FILENO);
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
	//exit(1);
}
void	ft_error_stack(t_stack **stack)
{
	if (stack != NULL)
		ft_stackclear(stack);
	ft_putstr_fd("Error de stack num rep yuju", STDERR_FILENO);
	//exit(EXIT_FAILURE);
	//exit(1) como lo tiene Mac
	//return (1);
}
