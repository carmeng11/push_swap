#include "push_swap.h"
#include <string.h>

/*int ft_check_duplicates(int argc, char **argv)
{
	int i;
	int size;
	int	num;
	int	j;
	int	*numbers;
	
	i = 1;
	size = 0;
	numbers = malloc((argc - 1) * sizeof(int)); 
	if (!numbers) 
		return (ft_error(), 1);
	while (i < argc) 
	{
		num = ft_atoi_push(argv[i]);
		j = 0;
		while (j < size)
		{
			if (num == numbers[j]) 
				return (ft_error(), 1);
			// {
			// 	printf("Error: El número %d se repite.\n", num);
			// 	free(numbers);
			// 	return (0);
			// }
			j++;
		}
		numbers[size] = num;
		size++;
		i++;
	}
    free(numbers);
    return (1);
}*/

/*int ft_check_duplicates(char *nums)
{
    int i;
    int size;
    //int   num;
    int j;
    char    *numbers;


    i = 0;
    size = 0;
    numbers = malloc((ft_strlen(nums) + 1) * sizeof(char));
    if (!numbers)
        return (ft_error(), 1);
    while (nums[i])
    {
        //num = ft_atoi_push(argv[i]);
        j = 0;
        while (j< size)
        {
            if (nums[i] == numbers[j])
                return (ft_error(), 1);
				//return (0);
			else
            	j++;
        }
        numbers[size] = nums[i];
        size++;
        i++;
    }
    free(numbers);
    return (1);
}*/

/*static int  count_words(const char *str, char c)
{
    int x;
    int count;
    int i;


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

int ft_check_duplicates(char **nums)
{
    int i = 0;
      //i = 0;
    int count;
    count = count_words(*nums, ' ');
    nums = malloc((count + 1) * sizeof(char*));
       // Comprobamos si la lista de cadenas no es nula
    if (!nums)
        return 0;

    while (nums[i]) 
    {
        int j = i + 1; // Para evitar comparar con el mismo elemento
        while (nums[j]) {
            if (strcmp(nums[i], nums[j]) == 0)
            {
                return 1; // Encontramos un duplicado
            }
            j++;
        }
        i++;
    }
    free(nums);
    return 0; // No hay duplicados
}*/

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i]) 
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int ft_check_duplicates(char **nums)

// {
// 	int i = 0;
//     while (nums[i]) 
//     {
//         int j = i + 1; // Para evitar comparar con el mismo elemento
//         while (nums[j]) {
//             if (ft_strcmp(nums[i], nums[j]) == 0)
//             {
//                 //return (ft_error(), 1); // Encontramos un duplicado
//                 return (1);
//             }
//             j++;
//         }
//         i++;
//     }
//     return 0; // No hay duplicados
// }

int	ft_check_duplicates(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*temp;

	current = *stack_a;
	while (current != NULL)
	{
		temp = current->next;
		while (temp != NULL)
		{
			if (current->n == temp->n)
				return (ft_error(), 1);
			temp = temp->next;
		}
		current = current->next;
	}
    return (0);
}