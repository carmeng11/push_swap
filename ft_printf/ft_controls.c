/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_controls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:32:49 by cagomez-          #+#    #+#             */
/*   Updated: 2024/11/11 19:32:49 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>

int	ft_control_chars(char const c, va_list args)
{
	int		aux1;
	char	*aux2;
	int		count;

	count = 0;
	if (c == 'c')
	{
		aux1 = va_arg(args, int);
		count += ft_putchar(aux1);
	}
	else if (c == 's')
	{
		aux2 = va_arg(args, char *);
		count += ft_putstr(aux2);
	}
	return (count);
}

int	ft_control_pointer(va_list args)
{
	unsigned long long	aux;
	int					count;

	count = 0;
	aux = va_arg(args, unsigned long long);
	if (!aux)
	{
		count += ft_putstr("(nil)");
	}
	else
	{
		count += ft_putstr("0x");
		count += ft_puthex(aux, 0);
	}
	return (count);
}

int	ft_control_ints(char const c, va_list args)
{
	int				aux1;
	int				aux2;
	unsigned int	aux3;
	int				count;

	count = 0;
	if (c == 'd')
	{
		aux1 = va_arg(args, int);
		count += ft_putnbr(aux1);
	}
	else if (c == 'i')
	{
		aux2 = va_arg(args, int);
		count += ft_putnbr(aux2);
	}
	else if (c == 'u')
	{
		aux3 = va_arg(args, unsigned int);
		count += ft_putunsignedint(aux3);
	}
	return (count);
}

int	ft_control_hex(char const c, va_list args)
{
	unsigned int	aux1;
	unsigned int	aux2;
	int				count;

	count = 0;
	if (c == 'x')
	{
		aux1 = va_arg(args, unsigned int);
		count += ft_puthex(aux1, 0);
	}
	else if (c == 'X')
	{
		aux2 = va_arg(args, unsigned int);
		count += ft_puthex(aux2, 1);
	}
	return (count);
}
