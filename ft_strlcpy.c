/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:34:51 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:34:52 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int copy_of_dstsize;
	int counter;

	if (dst == NULL || src == NULL)
		return (0);
	copy_of_dstsize = (int)dstsize;
	counter = 0;
	while ((dstsize--) > 1 && *src)
	{
		*dst++ = *src++;
		counter++;
	}
	while (*src++)
		counter++;
	if (copy_of_dstsize != 0)
		*dst = '\0';
	return (counter);
}
