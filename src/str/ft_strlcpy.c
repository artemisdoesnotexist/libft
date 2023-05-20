/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 18:08:42 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/02 16:27:06 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t				offset;
	size_t				src_len;

	offset = 0;
	src_len = ft_strlen(src);
	if (dstsize < 1)
		return (src_len);
	while (*(src + offset) != '\0')
	{
		if (dstsize > 1)
		{
			*dst++ = *(src + offset);
			dstsize--;
		}
		offset++;
	}
	*dst++ = '\0';
	if (src_len > dstsize)
		return (src_len);
	return (offset);
}
