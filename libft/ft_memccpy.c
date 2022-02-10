/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:43:12 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/10 12:32:47 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	if (len)
	{
		while (len)
		{
			*(unsigned char *)dest = *(const unsigned char *)src++;
			if (*(unsigned char *)dest++ == (unsigned char)c)
				return ((unsigned char *)dest);
			len--;
		}
	}
	return (0);
}
