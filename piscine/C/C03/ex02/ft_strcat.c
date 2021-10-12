/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:38:27 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/12 23:38:28 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = -1;
	dest_size = -1;
	while (dest[++dest_size])
	{
	}
	while (src[++i])
	{
		dest[dest_size] = src[i];
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
