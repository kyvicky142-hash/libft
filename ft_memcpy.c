/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:40:01 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:40:01 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	int					i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

//it will copy n bytes fromm the source to destination
//and if it overlaps the behavoir would be undifined 
//and use memmove instead

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	unsigned char		*dest;
// 	const unsigned char	*source;
// 	int					i;

// 	dest = (unsigned char *)dst;
// 	source = (const unsigned char *)src;
// 	i = 0;
// 	while (i < n)
// 	{
// 		dest[i] = source[i];
// 		i++;
// 	}
// 	return (dst);
// }