/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:40:15 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:40:15 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
//using ptr not b because the it cannot be dereferenced 
//start at b and change everything to c 
// for an exmaple: b: apple			ft_memset("%s\n", 'i', 3)
//output: iiile

// for an exmaple: b: structure			ft_memset("%s\n", 'k', 5)
//output:kkkkkture