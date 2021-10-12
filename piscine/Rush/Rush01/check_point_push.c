/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_point_push.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:38:44 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 15:57:05 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_point_push(int y, int x, char matrix[][6])
{
	int	i;
	int	j;

	if ((y == 1 && matrix[y - 1][x] == '1')
		|| (y == 4 && matrix[y + 1][x] == '1')
		|| (x == 1 && matrix[y][x - 1] == '1')
		|| (x == 4 && matrix[y][x + 1] == '1')
		|| (y > 1 && y < 4 && matrix[y][0] == '2' && matrix[y][5] == '3' && x == 2)
		|| (y > 1 && y < 4 && matrix[y][0] == '3' && matrix[y][5] == '2' && x == 3)
		|| (x > 1 && x < 4 && matrix[0][x] == '2' && matrix[5][x] == '3' && y == 2)
		|| (x > 1 && x < 4 && matrix[0][x] == '3' && matrix[5][x] == '2' && y == 3))
	{
		matrix[y][x] = '4';
	}
	if ((y == 1 && matrix[y - 1][x] == '2' && matrix[y + 4][x] == '1')
		|| (y == 4 && matrix[y + 1][x] == '2' && matrix[y - 4][x] == '1')
		|| (x == 1 && matrix[y][x - 1] == '2' && matrix[y][x + 4] == '1')
		|| (x == 4 && matrix[y][x + 1] == '2' && matrix[y][x - 4] == '1'))
	{
		matrix[y][x] = '3';
	}
	if (( 
		((y == 1 && matrix[y - 1][x] == '3' && matrix[y + 4][x] == '1')
		|| (y == 4 && matrix[y + 1][x] == '3' && matrix[y - 4][x] == '1')
		|| (x == 1 && matrix[y][x - 1] == '3' && matrix[y][x + 4] == '1')
		|| (x == 4 && matrix[y][x + 1] == '3' && matrix[y][x - 4] == '1'))
		&&
		((y == 1 && x == 1 && matrix[y - 1][1] == '3' && matrix[y][0] == '3')
		|| (y == 4 && x == 1 && matrix[y][0] == '3' && matrix[y + 1][1] == '3')
		|| (x == 4 && y == 1 && matrix[0][x] == '3' && matrix[1][x + 1] == '3')
		|| (x == 4 && y == 4 && matrix[5][x] == '3' && matrix[4][x + 1] == '3'))
		))
		matrix[y][x] = '2';
	if ((y == 1 && matrix[y - 1][x] == '4')
		|| (y == 4 && matrix[y + 1][x] == '4')
		|| (x == 1 && matrix[y][x - 1] == '4')
		|| (x == 4 && matrix[y][x + 1] == '4'))
	{
		matrix[y][x] = '1';
	}
	if ((matrix[0][x] == '4' && matrix[5][x] == '1'))
	{
		i = 0;
		while (++i < 5)
			matrix[i][x] = i + 48;
	}
	if ((matrix[y][0] == '4' && matrix[y][5] == '1'))
	{
		i = 0;
		while (++i < 5)
			matrix[y][i] = i + 48;
	}
	if ((matrix[0][x] == '1' && matrix[5][x] == '4'))
	{
		i = 0;
		j = 4;
		while (++i < 5)
		{
			matrix[i][x] = j + 48;
			j--;
		}
	}
	if ((matrix[y][0] == '1' && matrix[y][5] == '4'))
	{
		i = 0;
		j = 4;
		while (++i < 5)
		{
			matrix[y][i] = j + 48;
			j--;
		}
	}
}
