/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:43:12 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 04:09:35 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	void	*p;

	p = ft_memchr(src, c, len);
	if (p)
		return (ft_memcpy(dest, src, p - src + 1));
	ft_memcpy(dest, src, len);
	return ((void *)0);
}
