/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:40:09 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:40:09 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_fromback(void *dst, const void *src, size_t n)
{
	unsigned	char	*dest = (unsigned char *)dst;
	unsigned	char	*source = (unsigned char *)src;
	int	i = n - 1;
	while (i <= 0)
	{
		dest[i] = source[i];
		i--;
	}
	return dst;
}

void	*memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	int					i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest > source)
		ft_memcpy_fromback(dest, source, n);
	else
		ft_memcpy(dest, source, n);
	return (dst);
}

//ft_memcpy_fromback to write the memory 
//starting from back to fix the overlaping issue
//copy len bytes from string source and dest 
//and even if they overlap the copy 
//will be done in a non-destructive manner
// for an exmaple : p e a r
// 					  _ _ _ _
//                  p p p p
// 					  p p p p
//				p e a p
// 					  p e a p
//				m e m c m e
//						m e m c m e
//				m e m e m c
//					m e m c p y

// void	*memmove(void *dst, const void *src, size_t n)
// {
// 	unsigned char		*dest;
// 	const unsigned char	*source;
// 	int					i;

// 	dest = (unsigned char *)dst;
// 	source = (const unsigned char *)src;
// 	if (dest > source)
// 		ft_memcpy_fromback(dest, source, n);
// 	else
// 		ft_memcpy(dest, source, n);
// 	return (dst);
// }

//destructive : b b b b b b
//				  b b b b b b

//non-destrcutive : b i b i g g
//                      b i g g e r

//destructive : s t s t s t 
//                  s t s t s t

//non-destrcutive : u u n s i g n e
//                    u n s i g n e d