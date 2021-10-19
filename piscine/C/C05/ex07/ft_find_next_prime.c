/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 01:19:54 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/16 01:19:55 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while ((i * i) <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i = i + 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	boo;

	prime = nb;
	boo = 0;
	if (nb <= 1)
		return (2);
	if (ft_is_prime2(prime))
		return (nb);
	while (!boo && prime < 2147483647)
	{
		prime++;
		if (ft_is_prime2(prime))
			boo = 1;
	}
	return (prime);
}
