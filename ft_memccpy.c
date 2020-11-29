/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:30:18 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:30:19 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*x;
	unsigned char		*y;
	unsigned char		target;
	int					counter;

	x = (const unsigned char*)src;
	y = (unsigned char*)dst;
	target = (unsigned char)c;
	counter = 0;
	while (n--)
	{
		counter++;
		if (*x == target)
		{
			*(y++) = *(x++);
			return (dst + counter);
		}
		*(y++) = *(x++);
	}
	return (NULL);
}
