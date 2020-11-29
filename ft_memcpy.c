/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:31:13 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:31:14 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*x;
	unsigned char		*y;

	if (dst == src)
		return (dst);
	x = (const unsigned char*)src;
	y = (unsigned char*)dst;
	while (n--)
		*(y++) = *(x++);
	return (dst);
}
