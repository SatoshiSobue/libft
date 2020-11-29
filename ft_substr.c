/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:36:45 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:36:47 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*initial_position;

	if (ft_strlen(s) < start)
	{
		if (!(str = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		*str = '\0';
		return (str);
	}
	if ((unsigned int)len > (unsigned int)ft_strlen(s) - start)
		len = (size_t)((unsigned int)ft_strlen(s) - start);
	if (!(str = (char *)malloc(sizeof(char) * (int)(len + 1))))
		return (NULL);
	initial_position = str;
	s += start;
	while (len-- > 0)
		*str++ = *s++;
	*str = '\0';
	return (initial_position);
}
