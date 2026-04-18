/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:39:55 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:39:55 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = (const unsigned char *)s1;
	const unsigned char	*str2 = (const unsigned char *)s2;
	int					i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// memcmp it compares byte string s1 against byte string s2
// it returns zero if the two strings are identical
// it returns a positive value if the first byte that does not match

// int	memcmp(const void *s1, const void *s2, size_t n)
// {
// 	const unsigned char	*str1 = (const unsigned char *)s1;
// 	const unsigned char	*str2 = (const unsigned char *)s2;
// 	int					i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		if (str1[i] != str2[i])
// 			return (str1[i] - str2[i]);
// 		i++;
// 	}
// 	return (0);
// }

//for an exmaple : s1: burger s2:apple
//output: 1

// for an example: s1: hygein s2:hygein
//output: 0

//for an example: s1: burger s2:bergur
// u - e // 
//output : 16