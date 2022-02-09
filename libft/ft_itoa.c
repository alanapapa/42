/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:42:31 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:47:00 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;

	len = ft_numlen(n, 10);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	nb = n;
	if (n == 0)
		str[0] = '0';
	else
		str[0] = '-';
	if (n < 0)
		nb = -nb;
	while (nb > 0)
	{
		str[len--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
