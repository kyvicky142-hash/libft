/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:50:07 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/23 10:50:07 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr_node;

	if (!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	else if (!new)
		return ;
	curr_node = *lst;
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	curr_node->next = new;
	new->next = NULL;
}

//ft_lstadd_back adds the node new at the end of the list.
//ft_lstadd_back iterates the list lst ands appends 
//the node new to the end of the list. 
//lst can be empty, in that case the new node 
//will be the first node of the list.