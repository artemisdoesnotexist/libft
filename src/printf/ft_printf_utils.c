/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <avan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/23 19:19:02 by avan-der      #+#    #+#                 */
/*   Updated: 2023/05/20 14:33:36 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	int				i;

	i = write(1, &c, 1);
	return (i);
}

int	print_string(char *s)
{
	int					i;

	i = 0;
	if (s == NULL)
	{
		i = write(1, "(null)", 6);
		return (i);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	print_number(int n)
{
	int				ret;
	char			*num;

	num = ft_itoa(n);
	if (!num)
		return (-1);
	ret = print_string(num);
	free(num);
	return (ret);
}
