/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:20:56 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:50:46 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*copy;

	len = ft_strlen(s1) + 1;
	copy = malloc((unsigned int)len);
	if (!copy)
		return ((void *)0);
	ft_memcpy(copy, s1, len);
	return (copy);
}
