/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:32:43 by cagomez-          #+#    #+#             */
/*   Updated: 2024/11/11 19:32:43 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <unistd.h>

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i] != '\0')
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}

int	ft_puthex(unsigned long long n, int bol)
{
	char	min;
	char	may;
	int		count;

	count = 0;
	min = "0123456789abcdef"[n % 16];
	may = "0123456789ABCDEF"[n % 16];
	if (n >= 16)
		count += ft_puthex(n / 16, bol);
	if (!bol)
		count += ft_putchar(min);
	else
		count += ft_putchar(may);
	return (count);
}

int	ft_putnbr(int n)
{
	int		count;
	char	x;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		count += ft_putnbr(n / 10);
		x = (n % 10) + '0';
		count += ft_putchar(x);
	}
	else
	{
		x = n + '0';
		count += ft_putchar(x);
	}
	return (count);
}

int	ft_putunsignedint(unsigned int n)
{
	int		count;
	char	x;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		x = (n % 10) + '0';
		count += ft_putchar(x);
	}
	else
	{
		x = n + '0';
		count += ft_putchar(x);
	}
	return (count);
}
