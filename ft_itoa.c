/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:39:40 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:39:40 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	ft_fill_itoa(char *buff, int n, int *b_idx)
{
	if (n < 0)
	{
		buff[*b_idx] = '-';
		*b_idx = *b_idx + 1;
		ft_fill_itoa(buff, n * -1, b_idx);
		return ;
	}
	if(n > 9)
	{
		ft_fill_itoa(buff, n / 10, b_idx);
		buff[*b_idx] = (n %  10) + '0';
		*b_idx = *b_idx + 1;
		return ;
	}
	buff[*b_idx] = n + '0';
	*b_idx = *b_idx + 1;
}

int	ft_strlen(char const *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (len + 1));
	len = ft_strlen(s);
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	
	char	buf[12];
	int		i;

	i = 0;
	ft_fill_itoa(buf, n, &i);
	buf[i] = '\0';
	return (ft_strdup(buf));
}

int main()
{
	printf("%s\n", ft_itoa(42069));
	return (0);
}

//itoa is used to convert an integer to a string 
//buf[12] is the buffer made to take 11 longest characters before memory allocation occurs 
//ft_strdup used to duplicate the buffer into newly allocated memory and return it
//ft_fill_itoa is a recurisve function that fills the buffer with the characters of the integer n and updates the index of the buffer using b_idx pointer
//ft_bzero just zeroes out the buffer before filling it 