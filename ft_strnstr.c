/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:36:02 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:36:04 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	match(const char *string, const char *needle)
{
	while (*string == *needle && *needle)
	{
		string++;
		needle++;
	}
	if (*needle == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*current_start_position;
	char	*needle_initial_position;
	int		counter;

	current_start_position = (char *)haystack;
	needle_initial_position = (char *)needle;
	counter = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*current_start_position &&
		counter <= (int)(len - ft_strlen(needle_initial_position)))
	{
		haystack = current_start_position;
		needle = needle_initial_position;
		if (match(haystack, needle))
			return (current_start_position);
		else
		{
			current_start_position++;
			counter++;
		}
	}
	return (NULL);
}
