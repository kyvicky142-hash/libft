/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:38:23 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:38:23 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
//boolean data type in computing that holds only one of two possible values:
//an expression that evaluates to a logical value:
// either true (any non-zero value) or false (zero)
//true or false (or 1 and 0), representing binary logic
// checks if the character is an alphabet (either uppercase or lowercase)