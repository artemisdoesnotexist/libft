/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:05:09 by avan-der      #+#    #+#                 */
/*   Updated: 2022/10/18 11:15:33 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int				len;

	len = 0;
	while (*(s + len))
	{
		len++;
	}
	return (len);
}

/*
DESCRIPTION
Computes the length of a string, not including the terminatin null character

RETURN VALUES
Returns the length of a string
*/