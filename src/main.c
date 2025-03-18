
//#include <stdio.h>
//#include <stdlib.h>
#include "push_swap.h"
//#include "libft.h"
//#include <string.h>
//#include <stdio.h>
//#include "ft_strlen.c"
//#include "ft_calloc.c"
//#include "ft_substr.c"
//#include "ft_strdup.c"

/*static int	count_words(const char *str, char c)
{
	int	x;
	int	count;
	int	i;

	x = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && x == 0)
		{
			count++;
			x = 1;
		}
		else if (str[i] == c && x == 1)
			x = 0;
		i++;
	}
	return (count);
}

static int	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

static int	write_str(char **res, char *str, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c && str[i + j])
				j++;
			res[count] = ft_substr(str, i, j);
			if (res[count] == NULL)
				return (free_str(res));
			i = i + j;
			count++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**res;

	if (!s)
		return (NULL);
	count = count_words((char *)s, c);
	res = ft_calloc(count + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (!write_str(res, (char *)s, c))
		return (NULL);
	return (res);
}*/


int	ft_first_string(int argc, char **argv)
{
	
	int	i;
	i = 0;
	
	if (argc > 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ')
				return (ft_error(), 1);
			i++;
		}
	} 
    return (1);
}

/*int	ft_check_split_dup(char **argv)
{
	char	**nums;
	nums = NULL;
	nums = ft_split(argv[1], ' ');
	if ((ft_check_duplicates(nums)))
			return (ft_error(), 1);
	free(nums);
	return (0);
}*/

/*char	**ft_split_dup(char **argv)
{
	char	**nums;
	nums = NULL;
	nums = ft_split(argv[1], ' ');
	if ((ft_check_duplicates(nums)))
			exit;
	//free(nums);
	return (nums);
}*/




int	init_stack(int argc, char **argv, t_stack **stack)
{
	int	i;
	int	j;
	t_stack	*new;
	int	n;
	char	**nums;
	nums = NULL;
	/*
		i = 0;
	if (argc > 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ')
				return (ft_error(), 1);	

			i++;
		}
	} */
	
	i = 1;	
	while (i < argc) 
	{
		//if ((ft_check_duplicates(argv)))
				//return (ft_error(), 1);
		j = 0;
		nums = ft_split(argv[i], ' ');
		if ((ft_check_duplicates(nums)))
				return (ft_error(), 1);
		while (nums[j])
		{	
			//ft_printf("%s\n", nums[j]);
			n = ft_atoi_push(nums[j]);
			new = ft_stacknew(n); 
			ft_stackadd_back(stack, new);
			free(nums[j]);
			j++;
		}
        free(nums);
		i++;
	}
	return (1);
}


int main(int argc, char **argv)
{
	t_stack *stack_a = malloc(sizeof(t_stack)); // Reserva memoria para el primer nodo
	if (!stack_a)
		return (1);
	ft_first_string(argc, argv);
	if ((ft_check_duplicates(argv)))
				return (ft_error(), 1);
    init_stack(argc, argv, &stack_a);// en init_stack mis argumentos los convierto a enodos de la estructura del stack_a
	ft_stackclear(&stack_a);

	/*while (num[i])
	{
		n = ft_atoi_push(num[i]);
		printf("%d\n", n);
		i++;
	}*/
	
	return 0;
}