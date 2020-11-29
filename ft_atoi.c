/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:26:46 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:26:50 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int fnegative;
	int num;
	int ex_num;

	fnegative = 0;
	num = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			fnegative = 1;
	while ('0' <= *str && *str <= '9')
	{
		ex_num = num;
		num = num * 10 - (*str++ - '0');
		if (ex_num < num)
		{
			if (fnegative)
				return (0);
			else
				return (-1);
		}
	}
	return (fnegative == 1 ? num : -num);
}
