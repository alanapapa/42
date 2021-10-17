/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_and_start.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:32:18 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/17 18:32:19 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\r'
		|| c == '\v' || c == '\f' || c == 32
		|| (c >= '0' && c <= '9') || c == '-' || c == '+')
		return (1);
	return (0);
}

unsigned int	my_atoi(char *str)
{
	unsigned int	i;
	unsigned int	res;
	unsigned int	minus;
	unsigned int	boo;
	unsigned int	boo2;

	i = 0;
	res = 0;
	minus = 1;
	boo2 = 0;
	boo = 0;
	while (str[i] && !boo2 && ft_isspace(str[i]))
	{
		if (boo && (str[i] == '+' || str[i] == '-'))
			return (0);
		if (str[i] == '+' || str[i] == '-')
		{
			boo++;
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (0);
		}
		if (str[i] == '-')
			minus = -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = (res * 10) + str[i] - '0';
			boo2 = 1;
			i++;
		}
		if (boo2)
			return (res * minus);
		i++;
	}
	return (res * minus);
}

void	validate_and_start(char *dict, char *nbrstr)
{
	unsigned int	nbr;

	if (nbrstr[0] == '0')
	{
		nbr = 0;
		get_value(dict, nbr);
	}
	else if (my_atoi(nbrstr) > 0)
	{
		nbr = my_atoi(nbrstr);
		get_value(dict, nbr);
	}
	else
		write(1, "error\n", 6);
}
