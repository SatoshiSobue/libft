/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:31:39 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:31:41 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	uch;
	unsigned char	*p;

	uch = ch;
	p = (unsigned char *)buf;
	while (n-- > 0)
		*p++ = uch;
	return (buf);
}
