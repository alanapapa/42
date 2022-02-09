/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:42:08 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:50:43 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		index;
	int		start;
	int		end;

	if (!s)
		return (0);
	arr = malloc(sizeof(char *) * (ft_charcount(s, c) + 1));
	if (!arr)
		return (0);
	index = 0;
	start = -1;
	end = -1;
	while (++end <= ft_strlen(s))
	{
		if (s[end] != c && start < 0)
			start = end;
		else if ((s[end] == c || end == ft_strlen(s)) && start >= 0)
		{
			arr[index++] = ft_memdup(s, start, end);
			start = -1;
		}
	}
	arr[index] = 0;
	return (arr);
}
