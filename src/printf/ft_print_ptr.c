/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <avan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/21 18:20:38 by avan-der      #+#    #+#                 */
/*   Updated: 2023/05/20 14:33:34 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static	void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	print_ptr(unsigned long long ptr)
{
	int	ret;

	ret = write(1, "0x", 2);
	if (ptr == 0)
		ret += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		ret += ft_ptr_len(ptr);
	}
	return (ret);
}
