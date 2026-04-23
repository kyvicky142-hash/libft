/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:59:23 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/23 10:59:23 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node_ptr;

	node_ptr = malloc(sizeof(t_list));
	if (!node_ptr)
		return (NULL);
	node_ptr->content = content;
	node_ptr->next = NULL;
	return (node_ptr);
}

//ft_lstnew allocates (with malloc(3)) and returns a new node.
//The member variable content is initialized 
//with the value of the parameter content.
//exmaple : parameter : contrnt : the content to stor in the new node.
//The variable next is initialized to NULL.