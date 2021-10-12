/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:39:02 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 12:39:03 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_point_push(int y, int x, char matrix[][6]);
void	push_print(char matrix[][6]);

void	check_point(char matrix[][6])
{
	int	y;
	int	x;

	y = -1;
	while (++y < 6)
	{
		x = -1;
		while (++x < 6)
			check_point_push(y, x, matrix);
	}
	push_print(matrix);
}
