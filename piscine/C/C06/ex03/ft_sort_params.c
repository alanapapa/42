/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:26:17 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/19 15:26:20 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_printargs(char *str[])
{
	int	i;
	int	j;

	i = -1;
	while (str[++i])
	{
		j = -1;
		while (str[i][++j])
			write(1, &str[i][j], 1);
		write(1, "\n", 1);
	}
}

int	check_order(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i])
		if (s1[i] > s2[i])
			return (1);
	return (0);
}

void	ft_sortargs(char *str[], int max)
{
	int		i;
	int		j;
	char	**sorted;
	char	*word;

	sorted = str;
	i = -1;
	while (++i < max - 1)
	{
		j = i;
		while (sorted[++j])
		{
			if (check_order(sorted[i], sorted[j]))
			{
				word = sorted[i];
				sorted[i] = sorted[j];
				sorted[j] = word;
			}
		}
	}
	ft_printargs(sorted);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_sortargs(&argv[1], argc);
	return (0);
}
