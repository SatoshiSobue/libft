/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:33:46 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 18:52:07 by satoshi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**free_list(char **string_list, int count)
{
	while (count >= 0)
		free(string_list[count--]);
	free(string_list);
	return (NULL);
}

static int		set_next_string(char **next_string,
					int next_string_length, char c)
{
	int count;

	*next_string += next_string_length;
	while (**next_string && **next_string == c)
		(*next_string)++;
	count = 0;
	while ((*next_string)[count])
	{
		if ((*next_string)[count] == c)
			break ;
		count++;
	}
	return (count);
}

static int		count_string(char const *s, char c)
{
	int		string_count;

	string_count = 0;
	while (*s)
	{
		if (*s != c)
		{
			string_count++;
			while (*s != c && *s)
				s++;
			continue ;
		}
		s++;
	}
	return (string_count);
}

char			**ft_split(char const *s, char c)
{
	char	**string_list;
	char	*next_string;
	int		string_num;
	int		next_string_length;
	int		count;

	string_num = count_string(s, c);
	if (!(string_list = (char **)malloc(sizeof(char *) * (string_num + 1))))
		return (NULL);
	count = 0;
	next_string = (char *)s;
	next_string_length = 0;
	while (count < string_num)
	{
		next_string_length = set_next_string(&next_string,
			next_string_length, c);
		if (!(string_list[count] = ft_substr(next_string, 0,
				next_string_length)))
			return (free_list(string_list, --count));
		else
			count++;
	}
	string_list[count] = NULL;
	return (string_list);
}
