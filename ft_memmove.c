/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:56:13 by marvin            #+#    #+#             */
/*   Updated: 2026/04/15 11:56:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	int					i;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest > source)
		ft_memcpy_fromback(dest, source, n);
	else
		ft_memcpy(dest, source, n);
	return (dst);
}
