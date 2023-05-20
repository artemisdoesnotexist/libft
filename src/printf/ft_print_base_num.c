/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_base_num.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <avan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/04 15:12:16 by avan-der      #+#    #+#                 */
/*   Updated: 2023/05/20 14:34:26 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number_base(long long int n, const char *base)
{
	int				n_len;
	int				base_len;

	n_len = 0;
	base_len = (int) ft_strlen(base);
	if (n < 0)
	{
		n_len += write(1, "-", 1);
		n_len += print_number_base(-n, base);
	}
	if (n >= base_len)
	{
		n_len += print_number_base(n / base_len, base);
		n_len += write(1, &base[n % base_len], 1);
	}
	else
		n_len += write(1, &base[n], 1);
	return (n_len);
}

int	print_unsigned_number_base(long long int n, const char *base)
{
	int				n_len;
	int				base_len;

	n_len = 0;
	base_len = (int) ft_strlen(base);
	if (n >= base_len)
	{
		n_len += print_number_base(n / base_len, base);
		n_len += write(1, &base[n % base_len], 1);
	}
	else
		n_len += write(1, &base[n], 1);
	return (n_len);
}

int	print_hex(long long int n, int is_uc)
{
	if (is_uc == 0)
		return (print_number_base(n, "0123456789abcdef"));
	return (print_number_base(n, "0123456789ABCDEF"));
}

int	print_unsigned_number_b10(long long int n)
{
	return (print_unsigned_number_base(n, "0123456789"));
}
