/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:27:33 by avan-der      #+#    #+#                 */
/*   Updated: 2022/10/17 14:38:48 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
DESCRIPTION
Sets the first n bytes of the area pointed to by s to zero

RETURN VALUES
None
*/