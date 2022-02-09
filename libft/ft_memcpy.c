/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:38:05 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 02:49:22 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	int	i;

	i = -1;
	if ((dest == src) || len == 0)
		return (dest);
	while (++i < len)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
