/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vshanmug <vshanmug@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:40:23 by vshanmug          #+#    #+#             */
/*   Updated: 2026/04/18 14:40:23 by vshanmug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//writes a character to the file descriptor fd
//int write
//(int fileDescriptor, void *buffer, size_t bytesToWrite)
//fileDescriptor: It is an integer file descriptor for the opened file,
// which the open() function returns when opening a file.
//buffer: This pointer points to a buffer containing 
//the data we want to write into the file.
//bytesToWrite: Here, we provide an unsigned integer variable that 
//specifies the maximum number of bytes we want to write from the 
//buffer to the file.