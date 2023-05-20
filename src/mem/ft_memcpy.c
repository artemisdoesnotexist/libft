/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 11:43:46 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/29 15:12:12 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void				*dst_temp;

	dst_temp = dst;
	if (!n || dst == src)
		return (dst);
	while (n--)
	{
		*(char *)dst_temp++ = *(char *)src++;
	}
	return (dst);
}

/*
DESCRIPTION
Copies the values of n bytes from the location pointed to by src 
directly to the memory block pointed to by dst.

RETURN VALUES
Returns a pointer to dst
*/