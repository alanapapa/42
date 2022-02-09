/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 03:29:13 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 03:29:49 by bbazarov         ###   ########.fr       */
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
