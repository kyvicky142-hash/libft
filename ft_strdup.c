/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:41:10 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:41:10 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

//string duplicate copies s1 into newly allocated memmory
//for an exmple: s1 = "burger" s2 is the newly allocated memmory
//and i want to duplicate s1 i can now use s2 
//to duplicate into which changes the s2 value to burger as well