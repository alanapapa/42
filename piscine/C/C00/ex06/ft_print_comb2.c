/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 03:59:48 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/04 14:39:11 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar6(char c)
{
	write(1, &c, 1);
}

void	ft_print_comma(int i)
{
	if (i != 98)
	{
		ft_putchar6(',');
		ft_putchar6(32);
	}
}

void	checknbr(int i, int j)
{
	if (i <= 9 && j <= 9)
	{
		ft_putchar6('0');
		ft_putchar6(i + '0');
		ft_putchar6(32);
		ft_putchar6('0');
		ft_putchar6(j + '0');
		ft_print_comma(i);
	}
	else
	{
		ft_putchar6(i / 10 + '0');
		ft_putchar6(i % 10 + '0');
		ft_putchar6(32);
		ft_putchar6(j / 10 + '0');
		ft_putchar6(j % 10 + '0');
		ft_print_comma(i);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			if (i != j)
			{
				checknbr(i, j);
			}
			j++;
		}
		i++;
	}
}
