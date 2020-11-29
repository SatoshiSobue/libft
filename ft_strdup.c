/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:34:14 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:34:15 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *p;

	if (!(p = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	ft_strlcpy(p, s1, ft_strlen(s1) + 1);
	return (p);
}
