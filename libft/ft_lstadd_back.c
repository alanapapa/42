/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <bbazarov@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:01:40 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/08 19:13:30 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*h;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	h = *lst;
	while (h -> next)
		h = h -> next;
	h -> next = new;
}
