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

// int	ft_isinset(char c, char const *set)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// int	ft_strlen(char const *s)
// {
// 	int	len;

// 	len = 0;
// 	while (s[len] != '\0')
// 		len++;
// 	return (len);
// }

// char	*ft_substr(char *s, int len)
// {
// 	char	*new_str;
// 	int		i;
//ALLOCATES 
// 	new_str = malloc(sizeof(char) * (len + 1));
// 	if (!new_str)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// COPIES IT TO NEW_STR
// 		new_str[i] = s[i];
// 		i++;
// 	}
// 	new_str[i] = '\0';
// 	return (new_str);
// }

// void	*ft_strtrim(char const *s, char const *set)
// {
// 	int	start;
// 	int	end;

// 	if (!s)
// 		return (NULL);
// 	start = 0;
// 	end = ft_strlen(s) - 1;
//ITS RUNS FORM THE FRONT LIKE B U R G E R AND TRIES TO TRIM IT BUT WILL STOP 
//IF THE FIRST WORD ISNT THE LETTER TO BE TRIMMED 
// 	while (ft_isinset(s[start], set) && s[start] != '\0')
// 		start++;
//IT RUNS FROM BEHIND LIKE R E G R U B AND TRIES TO TRIM THE LETTER 
//THAT IS MEETS THE REQUIREMENT AND STOPS AT LETTER THAT IS NOT REQUIRED
// 	while (ft_isinset (s[end], set) && end >= 0)
// 		end--;
// 	if (end < start)
// 		return (ft_strdup(""));
// 	return (ft_substr((char *)s + start, end - start + 1));
// }
