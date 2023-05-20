/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 11:12:55 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/29 17:53:51 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int					i;
	char				*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (char) c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (last);
}
