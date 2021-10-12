/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_unassigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:41:43 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 12:41:44 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	number_unassigned(int *y, int *x, char generalarr[][6])
{
	int	num_unassign;
	int	i;
	int	j;

	num_unassign = 0;
	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			if (generalarr[i][j] == '0')
			{
				*y = i;
				*x = j;
				num_unassign = 1;
				return (num_unassign);
			}
		}
	}
	return (num_unassign);
}
