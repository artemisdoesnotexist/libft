/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:27:00 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/28 12:17:50 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char				*cptr;

	cptr = (unsigned char *) s;
	while (n--)
	{
		if (*cptr == (unsigned char) c)
			return ((void *) cptr);
		cptr++;
	}
	return (NULL);
}
