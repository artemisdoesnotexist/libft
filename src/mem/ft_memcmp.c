/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 12:44:04 by avan-der      #+#    #+#                 */
/*   Updated: 2022/10/18 13:03:18 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t						offset;
	unsigned char				*s1_temp;
	unsigned char				*s2_temp;

	offset = 0;
	s1_temp = (unsigned char *) s1;
	s2_temp = (unsigned char *) s2;
	while (n--)
	{
		if (*s1_temp != *s2_temp)
		{
			return (*s1_temp - *s2_temp);
		}
		s1_temp++;
		s2_temp++;
	}
	return (0);
}
