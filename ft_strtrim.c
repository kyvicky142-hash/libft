/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:42:09 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:42:09 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

void	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((void *)s1);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_isinset(s1[start], set))
		start++;
	while (end >= 0 && ft_isinset(s1[end], set))
		end--;
	if (end < start)
		return (ft_strdup(""));
	return (ft_substr((char *)s1, start, end - start + 1));
}

// Prototype:
// void *ft_strtrim(char const *s1, char const *set);
// 
// Parameters:
// s1: The string to be trimmed.
// set: The string containing the set of characters to be removed.
// Return Value: The trimmed string. NULL if the allocation fails.
// uses malloc(3)
// 
// Description:
// Allocates memory (using malloc(3)) and returns a
// copy of ’s1’ with characters from ’set’ removed
// from the beginning and the end.

//printf("%s\n", ft_strtrim("reason", "ron"));
//output: "eas"
//printf("%s\n", ft_strtrim("burger", "rge"));
//output: "bu"