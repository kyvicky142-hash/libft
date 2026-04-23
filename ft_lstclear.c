/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:45:13 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/23 10:45:13 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*free_temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		free_temp = *lst;
		*lst = (*lst)->next;
		free(free_temp);
	}
	*lst = NULL;
}

//ft_lstclear deletes and frees the given node and all successor of that node
//and finally sets the pointer to the list to NULL.