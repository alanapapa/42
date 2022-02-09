/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:22:54 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:51:31 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*newstr;

	if (!s || !f)
		return ((void *)0);
	newstr = ft_strdup(s);
	if (!newstr)
		return ((void *)0);
	i = -1;
	while (newstr[++i])
		newstr[i] = (*f)((unsigned int)i, newstr[i]);
	return (newstr);
}
