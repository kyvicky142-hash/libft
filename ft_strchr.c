/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:41:04 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:41:04 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}

//for an example : python and i want to find the letter 'y'
//it will checks through the word py 
//and then returns the address of the first 'y' it encounters
// when printing out it will look like ython since it stops at y

//for an example : duplicate and i want to find the letter 'a'
//it will checks through the word duplica 
//and then returns the address of the first 'a' it encounters
// when printing out it will look like 'ate' since it stops at a
//printf("%s\n", ft_strchr("duplicate", 'a'))
//output : "ate"

// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			return (&s[i]);
// 		i++;
// 	}
// 	if (s[i] == c) //if ('\0' == c) fucntiions the same
// 		return (&s[i]);
// 	return (NULL);
// }