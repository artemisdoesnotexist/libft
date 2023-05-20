/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:40:26 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/30 12:27:18 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	return (0);
}

/*
DESCRIPTION
Tests if a character is alphabetic or a digit

RETURN VALUES
Returns 1 if character is alphabetic or a digit
Returns 0 is character is neither alphabetic nor a digit
*/