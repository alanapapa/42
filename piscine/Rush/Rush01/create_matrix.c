/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:02:37 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 15:42:59 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_point(char matrix[][6]);
//void	create_matrix_point(int i, int j, char *str[], char matrix[]);

void	create_matrix(char *str[])
{
	int		i = -1;
	int		j;
	int		x = 0;
	int		yl = 8;
	int		yr = 12;
	char	matrix[6][6];

	while (++i < 6)
	{
		j = -1;
		while (++j < 6)
		{
			if (i == 0 && j > 0 && j < 5)
				matrix[0][j] = str[0][x];
			else if (i == 5 && j > 0 && j < 5)
				matrix[5][j] = str[0][x];
			else if (j == 0 && i > 0 && i < 5)
			{
				matrix[i][0] = str[0][yl];
				yl++;
			}
			else if (j == 5 && i > 0 && i < 5)
			{
				matrix[i][5] = str[0][yr];
				yr++;
			}
			else
				matrix[i][j] = '0';
			if ((i == 0 && j > 0 && j < 5) || (i == 5 && j > 0 && j < 5))
				x++;
		}
	}
	check_point(matrix);
}
