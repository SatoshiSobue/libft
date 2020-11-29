/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:31:27 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:31:28 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*x;
	unsigned char		*y;
	const unsigned char	*end_point;

	x = (const unsigned char*)src;
	y = (unsigned char*)dst;
	if (x == y)
		return (dst);
	if (y < x)
	{
		end_point = x + (unsigned char)len;
		while (x != end_point)
			*(y++) = *(x++);
	}
	else
	{
		end_point = x;
		x += (unsigned char)len;
		y += (unsigned char)len;
		while (x != end_point)
			*(--y) = *(--x);
	}
	return (dst);
}
