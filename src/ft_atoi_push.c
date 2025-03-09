#include "push_swap.h"

int	ft_atoi_push(char *str)
{
	long long int	result = 0;
	int	sign = 1;

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
			ft_error();
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
			ft_error();
		str++;
	}
	return (sign * result);
}