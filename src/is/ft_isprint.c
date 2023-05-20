/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:56:05 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 12:28:05 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
DESCRIPTION
Tests if a character is a printing character

RETURN VALUES
Returns 1 if character is a printing character
Returns 0 is character is not a printing character
*/