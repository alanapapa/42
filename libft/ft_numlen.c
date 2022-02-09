/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:20:56 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:50:33 by bbazarov         ###   ########.fr       */
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
