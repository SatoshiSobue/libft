/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:34:36 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 18:30:28 by satoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (dst[i] == '\0' && i < dstsize)
		return (ft_strlcpy(dst + i, src, dstsize - i) + i);
	return (ft_strlen(src) + i);
}
