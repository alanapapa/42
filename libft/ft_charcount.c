/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:29:13 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:46:31 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_charcount(char const *s, char c)
{
	int		count;

	if (!s)
		return (0);
	count = 0;
	while (*s != '\0')
		if (*s++ == c)
			count++;
	return (count);
}
