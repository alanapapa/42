/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:20:56 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 03:31:15 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(long n, int base)
{
	int	size;

	size = 1;
	if (base != 10 && n < 0)
		n = -n;
	if (n < 0)
		size++;
	while (n / base)
	{
		size++;
		n /= base;
	}
	return (size);
}