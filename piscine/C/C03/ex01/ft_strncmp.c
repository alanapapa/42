/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 23:38:33 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/12 23:38:34 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if ((s1[i] != '\0' || s2[i] != '\0') && (s1[i] == s2[i]))
		{
			j++;
		}
		else
			return (s1[j] - s2[j]);
		i++;
	}
	return (0);
}
