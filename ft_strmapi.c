/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:35:18 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:35:19 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	int		counter;
	char	*str;

	length = ft_strlen(s);
	counter = 0;
	if (!(str = (char *)malloc(sizeof(char) * length + 1)))
		return (NULL);
	while (*s)
		*str++ = f(counter++, *s++);
	*str = '\0';
	return (str - counter);
}
