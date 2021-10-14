/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:38:01 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/12 23:38:02 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlenn(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlenn(dest);
	src_size = ft_strlenn(src);
	if (size <= dest_size)
		return (size + src_size);
	while (src[i] && (dest_size + 1) < size)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest_size + ft_strlenn(&src[i]));
}
