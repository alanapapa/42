/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:51:01 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/06 20:32:39 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ptchr(char c)
{
	write(1, &c, 1);
}

void	dec_to_hex(int n)
{
	char	hex[2];
	int		i;
	int		j;

	i = 0;
	while (n != 0)
	{
		j = 0;
		j = n % 16;
		if (j < 10)
			hex[i] = j + '0';
		else
			hex[i] = j + 87;
		i++;
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
	{
		if (i == 1)
			ft_ptchr('0');
		ft_ptchr(hex[j]);
		j--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_ptchr('\\');
			if (str[i] == 0)
			{
				ft_ptchr('0');
				ft_ptchr('0');
			}
			else
				dec_to_hex(str[i]);
		}
		else
			ft_ptchr(str[i]);
		i++;
	}
	ft_ptchr('\n');
}
