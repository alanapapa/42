/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:38:45 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 02:47:26 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
