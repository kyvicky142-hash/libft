/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:39:47 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:39:47 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

//memchr it locates the first occurrence of c in string s
// return a pointer to the byte located 
//or NULL if no byte exists within n bytes
//Strings: You typically iterate until a null terminator ('\0') is reached.
//Memory Blocks: You must provide an explicit size 
//(number of bytes or elements) to the loop.
