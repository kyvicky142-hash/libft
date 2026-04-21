/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:37:52 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:37:52 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_iswhite(int c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\v')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_iswhite(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

// int	ft_iswhite(int c)
// {
// 	if (c == ' ')
// 		return (1);
// 	if (c == '\t')
// 		return (1);
// 	if (c == '\n')
// 		return (1);	
// 	if (c == '\v')
// 		return (1);
// 	if (c == '\f')
// 		return (1);
// 	if (c == '\r')
// 		return (1);
// 	return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	return (0);
// }

//ignores whitespace and accept one '-' or '+' 
//sign and converts string to an integer 
//checks for whether is there digits until it encounter a non-digit unit

// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	sign;
// 	int	result;

// 	i = 0;
// 	sign = 1;
// 	result = 0;
// 	while (ft_iswhite(str[i]))
// 		i++;
// 	if (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign = -1;
// 		i++;
// 	}

//converts

// 	while (ft_isdigit(str[i]))
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (sign * result);
// }

//character encoding standard that assigns numerical values
// (0–127) to letters, numbers, punctuation, 
// and control codes to represent text in computers