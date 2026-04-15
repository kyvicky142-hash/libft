/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:29:16 by marvin            #+#    #+#             */
/*   Updated: 2026/04/14 11:29:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*ft_strdup(const char *s1)
// {
// 	int		len;
// 	char	*dup;
// 	int		i;

// 	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
// 	len = ft_strlen(s1);
// 	if (!dup)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		dup[i] = s1[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	return (dup);
// }

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
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
