/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:40:38 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:40:38 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n * -1, fd);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
		return ;
	}
	ft_putchar_fd(n + '0', fd);
}

//ft_putnbr_fd writes number to the file descriptor fd
// 42069
// 4206
// 420
// 42
// 4

// 163301
// 16330
// 1633
// 163
// 16
// 1

//-42
//42
//4

// step 1 go deep 
// step 2 is print up recursive call stack 

//line 10 prints the '-'sign 
