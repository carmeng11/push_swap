#include <stdio.h>
#include <limits.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_isdigit(char *str)
{
	while (*str)
	{
		//printf("%c\n", *str);
		if (!(ft_isdigit(*str)))
			return (0);
		str++;
	}
	return (1);
}
int	ft_atoi_push(char *str)
{
	long long int result = 0;
	int sign = 1;

	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	
	if (!(*str >= '0' && *str <= '9'))
    {
        printf("Error\n");
        return (0);
    }
	while (*str)
	{
		if (!(ft_str_isdigit(str)))
    	{
			printf("Error\n");
			return (0);
    	}
		result = result * 10 + *str - '0';
		if ((sign * result) < INT_MIN || (sign * result) > INT_MAX)
		{
			printf("Error\n");
			return (0);
		}
		str++;
	}
  
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