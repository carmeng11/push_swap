/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:19:12 by cagomez-          #+#    #+#             */
/*   Updated: 2025/03/10 19:20:27 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(char *str)
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
			ft_error();
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
			ft_error();
		str++;
	}
	return (sign * result);
}
