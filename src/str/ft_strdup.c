/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 10:57:47 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 14:06:37 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char				*new;
	int					i;

	i = 0;
	new = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (*s1)
		new[i++] = *s1++;
	return (new);
}
