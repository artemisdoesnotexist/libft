/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 15:09:52 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 14:12:49 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tokens(char const *s, char c)
{
	size_t					count;
	int						trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char				**arr;
	size_t				i;
	size_t				j;
	size_t				s_len;
	int					start_token;

	arr = (char **)ft_calloc((count_tokens(s, c) + 1), sizeof(char *));
	if (!s || !arr)
		return (NULL);
	i = 0;
	j = 0;
	start_token = -1;
	s_len = ft_strlen(s);
	while (i <= s_len)
	{
		if (s[i] != c && start_token < 0)
			start_token = i;
		else if ((s[i] == c || i == s_len) && start_token != -1)
		{
			arr[j++] = ft_substr(s, start_token, i - start_token);
			start_token = -1;
		}
		i++;
	}
	return (arr);
}
