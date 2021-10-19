/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:19:22 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/16 01:19:24 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb == 1 | nb == 0)
		return (1);
	else if (nb > 1 && nb < 21)
		while (++i <= nb)
			res *= i;
	else
		res = 0;
	return (res);
}
