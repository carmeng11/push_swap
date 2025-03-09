/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <cagomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:01:57 by cagomez-          #+#    #+#             */
/*   Updated: 2024/11/11 19:46:45 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned long long n, int bol);
int	ft_putnbr(int n);
int	ft_putunsignedint(unsigned int n);
int	ft_control_chars(char const c, va_list args);
int	ft_control_pointer(va_list args);
int	ft_control_ints(char const c, va_list args);
int	ft_control_hex(char const c, va_list args);

#endif
