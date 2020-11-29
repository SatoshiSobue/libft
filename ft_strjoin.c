/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:34:25 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:34:26 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_length;
	int		s2_length;
	char	*str;
	char	*initial_pointer;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (s1_length + s2_length + 1))))
		return (NULL);
	initial_pointer = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (initial_pointer);
}
