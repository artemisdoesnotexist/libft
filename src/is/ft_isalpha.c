/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:10:16 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 12:27:31 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
DESCRIPTION
Tests if a character is alphabetic

RETURN VALUES
Returns 1 if character is alphabetic
Returns 0 is character is not alphabetic
*/