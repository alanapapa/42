/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 00:38:48 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/13 03:08:09 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb, int len)
{
	char	c;

	while (len)
	{
		c = (nb / len) + 48;
		write(1, &c, 1);
		nb %= len;
		len /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int	nb2;
	int	len;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		write(1, "2", 1);
		nb = 147483648;
	}
	nb2 = nb;
	len = 1;
	while (nb2 > 9)
	{
		len *= 10;
		nb2 /= 10;
	}
	ft_putchar(nb, len);
}
