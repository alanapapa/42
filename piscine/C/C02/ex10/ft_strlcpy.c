/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:50:57 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/06 18:50:58 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*mainmemcpy(void *dest, void *src, unsigned int size)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (size--)
		*d++ = *s++;
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if ((len + 1) < size)
	{
		mainmemcpy(dest, src, len + 1);
	}
	else if (size != 0)
	{
		mainmemcpy(dest, src, len - 1);
		dest[len - 1] = '\0';
	}
	return (len);
}
