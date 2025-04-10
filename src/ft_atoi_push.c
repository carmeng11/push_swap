/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:56:40 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/10 18:25:35 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(char *str, t_stack **stack)
{
	long long int	result;
	int				sign;

	result = 0;
	sign = 1;
	if (str)
	{
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!(ft_str_isdigit(str)))
			ft_error_str(str, stack);
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
			return (ft_error(stack), 1);
		str++;
	}
	return (sign * result);
}

int	ft_check_atoi_push(char *str, t_stack **stack, char **nums)
{
	long long int	result;
	int				sign;

	result = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!(ft_str_isdigit(str)))
		{
			ft_error_strmat(nums, stack);
		}
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
			return (0);
		str++;
	}
	return (1);
}
