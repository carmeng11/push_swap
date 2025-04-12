/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:56:40 by cagomez-          #+#    #+#             */
/*   Updated: 2025/04/11 17:44:55 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(char *str, t_stack **stack)
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
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	ft_check_atoi_push(char *str)
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
	if (!*str)
		return (0);
	while (*str)
	{
		if (!(ft_str_isdigit(str)))
			return (0);
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
			return (0);
		str++;
	}
	return (1);
}
