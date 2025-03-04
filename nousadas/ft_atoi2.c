//COMPROBADO
#include <unistd.h>
#include <stdio.h>


// int	ft_atoi(char *str)
// {
// 	int result = 0;
// 	int sign = 1;

// 	if (*str == '+')
// 		str++;

// 	while (*str == '+' || *str == '-' || (*str >= '0' && *str <= '9'))
//         str++;
// 	if (*str == '-')
// 		sign = -1;
// 	if (*str == '-' || *str == '+')
// 		str++;
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		result = result * 10 + *str - '0';
// 		str++;
// 	}
// 	return (sign * result);
// }
int	ft_atoi( char *str)
{
	int	result;
	int sign = 1;
	result = 0;

	if (*str == '-')
		sign = -1;

	while (*str)
	{
		result = result *10 + *str -'0';
		str++;
	}
	return (sign * result);
	//printf("%d", result);
}


int	main()
{
//int	n = 44548p12;

//ft_putnbr(n);
printf("%d", ft_atoi("+44548p12"));
return (0);
}
