/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:56:40 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/31 19:50:30 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(char *str,t_stack **stack)
{
	long long int	result = 0;
	int	sign = 1;

	if(str)
	{
		
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	// if (!(*str >= '0' && *str <= '9'))
	// 	ft_error();
	while (*str)
	{
		if (!(ft_str_isdigit(str)))
		{
			//return (ft_error(), 1);
			ft_error_str(str,stack);
		}
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
		{
			return (ft_error(stack), 1);
			//ft_error_str(str);
		}
		str++;
	}
	return (sign * result);
}

int	ft_check_atoi_push(char *str,t_stack **stack,char **nums)
{
	long long int	result = 0;
	int	sign = 1;

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
			//free(str);
			ft_error_strmat(nums,stack);
		}
			//return (0);
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
			return (0);	
		//ft_error_str(str);
		str++;
	}
	return (1);
}
