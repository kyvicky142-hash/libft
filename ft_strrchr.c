/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:31:32 by marvin            #+#    #+#             */
/*   Updated: 2026/04/15 12:31:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		return (&s[last_occurrence]);
	return (NULL);
}
