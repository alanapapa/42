/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:42:51 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/13 01:43:15 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcharn(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = -1;
	if (!base || !base[1])
		return (0);
	while (base[++i])
	{
		if (!((base[i] >= '0' && base[i] <= '9')
				|| (base[i] >= 'a' && base[i] <= 'z')
				|| (base[i] >= 'A' && base[i] <= 'Z')))
			return (0);
		j = i;
		while (base[++j])
			if (base[i] >= base[j])
				return (0);
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_n;
	int	n[16];

	i = 0;
	base_n = check_base(base);
	if (base_n)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putcharn('-');
		}
		while (nbr)
		{
			n[i] = nbr % base_n;
			nbr /= base_n;
			i++;
		}
		while (i > 0)
			ft_putcharn(base[n[--i]]);
	}
}
