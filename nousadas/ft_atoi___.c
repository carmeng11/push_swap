#include <stdio.h>

// int	ft_atoi(char *str)
// {
// 	int result = 0;
// 	int sign = 1;

// 	while (*str == ' ' || (*str >= 9 && *str <= 13))
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

int	ft_atoi_push(char *str)
{
	int result = 0;
	int sign = 1;

	if (*str == '-')
	sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
    if (!(*str >= '0' && *str <= '9'))
    {
        printf("Error\n");
        return (0);
    }
    // else if (!(sign * result) >= -2147483648 && (sign * result) <= 2147483647)
	// {
    //     printf("Error\n");
    //     return (0);
    // }
    return (sign * result);
}

int	main (int argc, char **argv)
{
	int	i;
	int	n;

	i = 1;
	while (i < argc)
	{
		n = ft_atoi_push(argv[i]);
		printf("%d\n", n);
		i++;
	}
	return (0);
}	