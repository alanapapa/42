/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_rest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:38:57 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 12:38:59 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	number_unassigned(int *y, int *x, char matrix[][6]);
int	is_safe(char n, int r, int c, char matrix[][6]);

int	solve_rest(char matrix[][6])
{
	int		x;
	int		y;
	char	z;

	z = 48;
	if (number_unassigned(&y, &x, matrix) == 0)
		return (1);
	while (++z <= '4')
	{
		if (is_safe(z, y, x, matrix))
		{
			matrix[y][x] = z;
			if (solve_rest(matrix))
				return (1);
			matrix[y][x] = '0';
		}
	}
	return (0);
}
