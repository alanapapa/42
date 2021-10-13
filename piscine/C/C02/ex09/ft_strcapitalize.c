/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:50:54 by bbazarov          #+#    #+#             */
/*   Updated: 2021/10/06 18:50:55 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if ((str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
