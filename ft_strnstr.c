/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:41:55 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:41:55 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	i = 0;
	if(needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i + needle_len <= len)
	{
		if(ft_memcmp((void *)(haystack + i), (void *)needle, needle_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
