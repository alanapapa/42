/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:57:37 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 02:58:32 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstck, const char *ndl, size_t len)
{
	size_t	i;
	size_t	ndllen;

	i = 0;
	ndllen = ft_strlen(ndl);
	if (!ndllen)
		return ((char *)hstck);
	while (i++ < len-- && *hstck != '\0')
	{
		if (!ft_strncmp(hstck, ndl, ndllen))
			return ((char *)hstck);
		hstck++;
	}
	return (NULL);
}
