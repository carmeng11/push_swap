/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:33:10 by cagomez-          #+#    #+#             */
/*   Updated: 2024/11/11 19:33:10 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

static int	ft_control(char const c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c' || c == 's')
		count += ft_control_chars(c, args);
	else if (c == 'p')
		count += ft_control_pointer(args);
	else if (c == 'd' || c == 'i' || c == 'u')
		count += ft_control_ints(c, args);
	else if (c == 'x' || c == 'X')
		count += ft_control_hex(c, args);
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_control(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	char	*prueba = "hola";
	int	count;
	int	count1;
	int	min;

	count = 0;
	min = -2147483648;
	printf("hola %s %c %d %i %u %x %X %p %%\n",
	 "que tal", 'c', 8, min, 6, 10, 10, NULL);
	ft_printf("hola %s %c %d %i %u %x %X %p %%\n",
	 NULL, 'c', 8, min, 6, 10, 10, &prueba);
	count = ft_printf("hola %s %c %d %i %u %x %X %p %%\n",
	 "quetal", 'c', 8, -9, 6, 10, 10, &prueba);
	count1 = printf("hola %s %c %d %i %u %x %X %p %%\n",
	 "quetal", 'c', 8, -9, 6, 10, 10, &prueba);
	ft_printf("El número de caracteres en ft_printf es: %d\n", count);
	printf("El número de caracteres en printf es: %d\n", count1);
	return (0);
}*/
//main del último evaluador
/*int	ft_printf(char const *format, ...);


int	main()
{
	// int	num = 123;
	ft_printf("this ptr: %p", (void*)-123);
	printf("this ptr: %p", (void*)-123);
	return 0;
}*/