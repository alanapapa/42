/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanapapa <alanapapa@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:20:38 by alanapapa         #+#    #+#             */
/*   Updated: 2021/10/05 21:58:26 by alanapapa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	h;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		h = tab[i];
		tab[i] = tab[j];
		tab[j] = h;
		i++;
		j--;
	}
}
