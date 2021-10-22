/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:46:13 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/20 13:46:15 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	getlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = getlen(src);
	ptr = (char *)malloc(sizeof(src) * (i + 1));
	if (ptr == ((void *)0))
		return (((void *)0));
	while (i >= 0)
	{
		ptr[i] = src[i];
		i--;
	}
	return (ptr);
}
