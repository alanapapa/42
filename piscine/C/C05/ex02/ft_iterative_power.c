/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_iterative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:19:32 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/16 01:19:33 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	if (power < 0)
		return (0);
	else
		while (++i <= power)
			res *= nb;
	return (res);
}
