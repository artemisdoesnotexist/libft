/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:51:43 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 12:27:44 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
DESCRIPTION
Tests if a character is an ASCII character

RETURN VALUES
Returns 1 if character is an ASCII character
Returns 0 is character is not ASCII character
*/