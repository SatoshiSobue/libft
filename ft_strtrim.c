/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:36:32 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:36:34 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_included(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		set_count;
	int		return_length;
	char	*string;

	set_count = 0;
	return_length = 0;
	while (is_included(s1[ft_strlen(s1) - 1 - set_count], set))
		set_count++;
	if (set_count != (int)ft_strlen(s1))
		return_length = -set_count;
	set_count = 0;
	while (is_included(s1[set_count], set))
		set_count++;
	return_length += ft_strlen(s1) + 1 - set_count;
	if (!(string = (char *)malloc(sizeof(char) * return_length)))
		return (NULL);
	ft_strlcpy(string, &s1[set_count], return_length);
	return (string);
}
