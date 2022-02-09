/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:20:12 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:46:06 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(unsigned long long n, int sign)
{
	if (n >= LLMAX && sign == 0)
		return (-1);
	if (n >= LLMAX + 1 && sign == 1)
		return (0);
	return (42);
}

int	ft_atoi(const char *str)
{
	int					negative;
	unsigned long long	n;

	negative = 0;
	n = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			negative = 1;
	}
	while (ft_isdigit(*str))
		n = (n * 10) + ((int)*str++ - 48);
	if (check_overflow(n, negative) == 0 || check_overflow(n, negative) == -1)
		return (check_overflow(n, negative));
	if (negative)
		return (-n);
	return (n);
}
