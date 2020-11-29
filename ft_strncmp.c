/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:35:43 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:35:44 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *casted_s1;
	unsigned char *casted_s2;

	casted_s1 = (unsigned char *)s1;
	casted_s2 = (unsigned char *)s2;
	while (n && *casted_s1 && *casted_s2)
	{
		if (*casted_s1 != *casted_s2)
			return (*casted_s1 - *casted_s2);
		casted_s1++;
		casted_s2++;
		n--;
	}
	if (!n)
		return ((unsigned char)0);
	else
		return (*casted_s1 - *casted_s2);
}
