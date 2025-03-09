#include "push_swap.h"
//#define MAX_NUMBERS 1000
//#define ERROR -1.1

int main(int argc, char **argv) 
{
	int	n;
	(void)n;

    if (check_duplicates(argc, argv)) 
    {
        int i = 1;
        while (i < argc) 
        {
            n = ft_atoi_push(argv[i]);
            //printf("%d\n", n);
            i++;
        }
    }
    return (0);
    }
