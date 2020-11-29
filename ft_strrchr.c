/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:36:17 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:36:18 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *p;

	p = NULL;
	c = (char)c;
	while (*s)
	{
		if (*s == c)
			p = s;
		s++;
	}
	if (c == '\0')
		p = s;
	return ((char *)p);
}
