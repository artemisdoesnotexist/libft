/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <avan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 11:56:48 by avan-der      #+#    #+#                 */
/*   Updated: 2022/11/29 17:08:20 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list				*temp;

	if (!del)
		return ;
	while (*lst)
	{
		temp = *lst;
		del((temp)->content);
		*lst = temp->next;
		free(temp);
	}
	*lst = NULL;
}
