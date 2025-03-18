#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

void	ft_error()
{
	ft_putstr_fd("Error de mi funcion yuju", STDERR_FILENO);
	//exit(EXIT_FAILURE);
	//return (1);
}


/*int ft_check_duplicates(char *nums)
{
    int i;
    int j;
    char  *numbers;
    //i = 0;
    numbers = malloc((ft_strlen(nums) + 1) * sizeof(char));
    if (!numbers)
        return (ft_error(), 1);
    i = 0;
    while (nums[i])
    {
        //num = ft_atoi_push(argv[i]);
        j = 0;
        while (j < i)
        {
            if (nums[i] == numbers[j])
                return (ft_error(), 1);
				//return (0);
            j++;
        }
        numbers[j] = nums[i];
        i++;
    }
    free(numbers);
    return (1);
}*/
static int  count_words(const char *str, char c)
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


/*int ft_check_duplicates(char **nums)

int i = 0;
{
    while (nums[i]) 
    {
        int j = i + 1; // Para evitar comparar con el mismo elemento
        while (nums[j]) {
            if (strcmp(nums[i], nums[j]) == 0)
            {
                return (ft_error(), 1); // Encontramos un duplicado
            }
            j++;
        }
        i++;
    }
    return 0; // No hay duplicados
}


int main()
{
    int i = 0;
    char *str = "2 3 45 87 98";
    ft_check_duplicates(&str);
    printf("%c\n", str[4]);

      free(str);
    return (0);
}
*/
int main(int argc, char **argv)
{
    int i = 1;

    while (argv[i]) 
    {
        int j = i + 1; // Para evitar comparar con el mismo elemento
        while (argv[j]) {
            if (strcmp(argv[i], argv[j]) == 0)
            {
                return (ft_error(), 1); // Encontramos un duplicado
            }
            j++;
        }
        i++;
    }
    return 0; // No hay duplicados
}