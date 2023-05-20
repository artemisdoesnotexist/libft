/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:35:55 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 12:27:54 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
DESCRIPTION
Tests if a character is a digit

RETURN VALUES
Returns 1 if character is a digit
Returns 0 is character is not a digit
*/