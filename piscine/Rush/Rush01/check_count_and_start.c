/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_count_and_start.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 23:48:34 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/11 15:26:47 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	create_matrix(char *str[]);
void	write_error(void);

void	check_count_and_start(char *str[])
{
	int		i;
	int		j;
	char	base[16];
	char	*ptr;

	i = 0;
	j = -1;
	ptr = base;
	while (str[0][++j])
	{
		if ((str[0][j] >= '1' && str[0][j] <= '4'))
		{
			base[i] = str[0][j];
			i++;
		}
	}
	if (i == 16)
		create_matrix(&ptr);
	else
		write_error();
}
