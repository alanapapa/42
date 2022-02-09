/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:44:59 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:50:27 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	i = (int)len;
	if (dest > src)
		while (--i >= 0)
			((char *)dest)[i] = ((char *)src)[i];
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
