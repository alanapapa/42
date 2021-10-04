/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 04:20:30 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/04 04:24:19 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check_point(int x, int y, int i, int j)
{
	if ((j == x - 1 && i == 0) || (i == 0 && j == 0)
		|| (j == 0 && i == y - 1) || (i == y - 1 && j == x - 1))
		ft_putchar(111);
	else if ((i == 0 && j > 0 && j < x - 1)
		|| (i == y - 1 && j > 0 && j < x - 1))
		ft_putchar(45);
	else if ((j == 0 && i > 0 && i < y - 1)
		|| (j == x - 1 && i > 0 && i < y - 1))
		ft_putchar(124);
	else
		ft_putchar(32);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	if (x >= 0 && y >= 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				check_point(x, y, i, j);
				j++;
			}
			i++;
			ft_putchar(10);
		}
	}
}
