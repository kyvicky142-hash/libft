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
	int	needle_len;
	int	haystack_len;
	int	i;

	needle_len = ft_strlen(needle);
	haystack_len = ft_strlen(haystack);
	i = 0;
	while (haystack[i] != '\0' && (haystack_len - i) > needle_len)
	{
		if(ft_memcmp((void *)needle, needle_len) == 0)
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
