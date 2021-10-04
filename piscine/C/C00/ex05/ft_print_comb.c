/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 03:59:45 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/04 14:38:52 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_comma(char c, char s)
{
	write(1, &c, 1);
	write(1, &s, 1);
}

void	ft_putchar5(char a, char b, char c)
{
	a += '0';
	b += '0';
	c += '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		ft_comma(',', ' ');
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = -1;
	while (++i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					ft_putchar5(i, j, k);
				}
				k++;
			}
			j++;
		}
	}
}
