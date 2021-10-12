/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:38:52 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 12:38:53 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	solve_rest(char matrix[][6]);

void	push_print(char matrix[][6])
{
	int	y;
	int	x;

	if (solve_rest(matrix))
	{
		y = 0;
		while (++y < 5)
		{
			x = 0;
			while (++x < 5)
				write(1, &matrix[y][x], 1);
			write(1, "\n", 1);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return ;
	}
}
