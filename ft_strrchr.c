/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:42:02 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:42:02 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_occurrence;

	i = 0;
	last_occurrence = -1;
	while (s[i])
	{
		if (s[i] == c)
			last_occurrence = i;
		i++;
	}
	if (last_occurrence != -1)
		return ((char *)&s[last_occurrence]);
	return (NULL);
}

//excatly same as ft_strchr but it return last occurrence/encounter
//for an example : "burger" i want the letter 'r'
//checks through the word b u r g e r stops at last 'r' it encounters
//printf("%s\n", strrchr("burger" , 'r'))
//output: r

//excatly same as ft_strchr but it return last occurrence/encounter
//for an example : "python" i want the letter 'y'
//checks through the word "p y t h o n" stops at last 'y' it encounters
//printf("%s\n", strrchr("python" , 'y'))
//output: ython

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;
// 	int	last_occurrence;

// 	i = 0;
// 	last_occurrence = -1;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			last_occurrence = i;
// 		i++;
// 	}
// 	if (last_occurrence != -1)
// 		return (&s[last_occurrence]);
// 	return (NULL);
// }
