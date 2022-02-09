/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:31:05 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:51:22 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		dest_len;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	i = dstsize;
	while (i-- != 0 && *d != '\0')
		d++;
	dest_len = d - dst;
	i = dstsize - dest_len;
	if (i == 0)
		return (dest_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (i-- != 1)
			*d++ = *s;
		s++;
	}
	*d = '\0';
	return (dest_len + (s - src));
}
