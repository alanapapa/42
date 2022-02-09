/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:23:52 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:50:21 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memdup(const char *str, int start, int end)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * (end - start + 1));
	while (start < end)
		copy[i++] = str[start++];
	copy[i] = '\0';
	return (copy);
}
