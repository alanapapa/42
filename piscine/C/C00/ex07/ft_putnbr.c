/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 03:59:56 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/04 14:39:23 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar7(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	len;
	int	n;

	if (nb < 0)
	{
		nb = -nb;
		ft_putchar7('-');
	}
	len = 1;
	n = nb;
	while (n > 9)
	{
		len *= 10;
		n /= 10;
	}
	while (len != 0)
	{
		ft_putchar7(nb / len + '0');
		nb %= len;
		len /= 10;
	}
}
