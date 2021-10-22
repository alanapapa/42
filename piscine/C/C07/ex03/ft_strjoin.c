/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:46:35 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/20 13:46:36 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = malloc(sizeof(strs));
	i = -1;
	j = 0;
	while (++i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
			str[j++] = strs[i][k++];
		k = 0;
		while (i != size - 1 && sep[k] != '\0')
			str[j++] = sep[k++];
	}
	str[j] = '\0';
	return (str);
}
