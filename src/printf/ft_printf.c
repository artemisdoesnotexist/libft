/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <avan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 18:36:11 by avan-der      #+#    #+#                 */
/*   Updated: 2023/05/20 14:33:37 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversion(va_list args, const char *format, int i)
{
	if (format[i] == 'c')
		return (print_char(va_arg(args, int)));
	else if (format[i] == 's')
		return (print_string(va_arg(args, char *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (print_number(va_arg(args, int)));
	else if (format[i] == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	else if (format[i] == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	else if (format[i] == 'p')
		return (print_ptr(va_arg(args, unsigned long)));
	else if (format[i] == 'u')
		return (print_unsigned_number_b10(va_arg(args, unsigned int)));
	else if (format[i] == '%')
		return (print_char('%'));
	if (format[i])
		return (print_char(format[i]));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		x;
	int		ret;

	i = 0;
	ret = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			x = handle_conversion(args, format, i + 1);
			if (x == -1)
				return (-1);
			ret += x;
			i++;
		}
		else
			ret += write(1, &format[i], 1);
		if (format[i])
			i++;
	}
	va_end(args);
	return (ret);
}
