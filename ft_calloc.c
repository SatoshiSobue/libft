/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:27:27 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:27:28 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *address;

	if (size == 0 && count != 0)
		return (NULL);
	if (!(address = malloc(size * count)))
		return (NULL);
	ft_bzero(address, size * count);
	return ((void *)address);
}
