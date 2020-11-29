/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:30:49 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:30:51 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	chr;

	src = (unsigned char*)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*src == chr)
			return (src);
		src++;
	}
	return (NULL);
}
