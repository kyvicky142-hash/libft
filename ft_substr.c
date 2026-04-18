/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:42:18 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:42:18 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		rem_len;
	char	*new_str;
	int		i;

	rem_len = ft_strlen(s) - start;
	if(rem_len < len)
		len = rem_len;
	new_str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
