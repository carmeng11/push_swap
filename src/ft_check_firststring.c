
int	first_string(int argc, char **argv)
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
    return (0);
}