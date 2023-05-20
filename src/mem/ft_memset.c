/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 15:02:01 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/29 15:27:30 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char				*new_string;

	new_string = (unsigned char *) b;
	while (len--)
		*new_string++ = (unsigned char) c;
	return (b);
}

/*
DESCRIPTION
Sets len bytes of the block of memory pointed by 
b to the specified value c (converted to an unsigned char)

RETURN VALUES
Returns the pointer
*/