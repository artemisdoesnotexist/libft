/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 16:04:03 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/29 15:26:22 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	char				*csrc;
	char				*cdst;

	csrc = (char *) src;
	cdst = (char *) dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (len-- > 0)
		{
			cdst[len] = csrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}

/*
DESCRIPTION
Copies the values of n bytes from the location pointed to by src 
to the memory block pointed to by dst, taking care of overlapping memory.

RETURN VALUES
Returns a pointer to dst
*/