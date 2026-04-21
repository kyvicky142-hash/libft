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
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)&s[i]);
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