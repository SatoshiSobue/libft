/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssobue <ssobue@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 11:29:31 by ssobue            #+#    #+#             */
/*   Updated: 2020/11/29 11:29:32 by ssobue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_digit(int n, int is_negative)
{
	int digit;

	digit = 1;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		digit++;
	}
	if (is_negative)
		digit++;
	return (digit);
}

char		*ft_itoa(int n)
{
	int				digit;
	unsigned int	copy_of_n;
	int				is_negative;
	char			*str;

	is_negative = n < 0 ? 1 : 0;
	digit = calc_digit(n, is_negative);
	n = is_negative ? -n : n;
	copy_of_n = (unsigned int)n;
	if (!(str = (char *)malloc(sizeof(char) * digit + 1)))
		return (NULL);
	str[digit] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (copy_of_n > 0)
	{
		str[(digit--) - 1] = copy_of_n % 10 + '0';
		copy_of_n /= 10;
	}
	if (is_negative)
		*str = '-';
	return (str);
}
