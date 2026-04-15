/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:03:39 by marvin            #+#    #+#             */
/*   Updated: 2026/04/15 12:03:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isinset(char c, char const *set)
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

int	ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char *s, int len)
{
	char	*new_str;
	int		i;

	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

void	*ft_strtrim(char const *s, char const *set)
{
	int	start;
	int	end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_isinset(s[start], set) && s[start] != '\0')
		start++;
	printf("end of beginning: %c\n", s[start]);
	while (ft_isinset (s[end], set) && end >= 0)
		end--;
	printf("beginning of end: %c\n", s[end]);
	if (end < start)
		return (ft_strdup(""));
	return (ft_substr((char *)s + start, end - start + 1));
}
