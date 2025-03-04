int	ft_str_is_dec(char *nb)
{
	int	point_found;

	point_found = 0;//se usa para rastrear si ha encontrado un pto
	if (*nb == '+' || *nb == '-')//salta los signos
		nb++;
	if (*nb == '\0')//si se ha llegado al final devuelve 0 indicando que no es decimal
		return (0);
	while (*nb)//el bucle continuará hasta el final de la cadena
	{
		if (*nb == '.')
		{
			if (point_found)//si ya lo ha encontrado devuelve 0 pq un num no puede tener + de una caracter decimal
				return (0);
			point_found = 1;//si no se ha encontrado punto se establece point_found = 1
		} //verificación de dígitos
		else if (!(ft_isdigit(*nb))) //si es dígito devuelve 1, por lo que si no lo es devuelve 0
		//indicando que la cadena no es un num decimal válido
			return (0);
		nb++;
	}
	return (1);
}


int	ft_str_isdigit(char *str)
{
	while (*str)
	{
		printf("%c\n", *str);
		if (!(ft_isdigit(*str)))
			return (0);
		str++;
	}
	return (1);
}
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}