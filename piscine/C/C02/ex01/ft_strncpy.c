/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:50:22 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/06 18:50:24 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			j;

	i = 0;
	j = '\0';
	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = j;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
