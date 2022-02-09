/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:35:46 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:47:15 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nextnode;

	if (!lst || !f)
		return ;
	while (lst)
	{
		nextnode = lst -> next;
		f(lst -> content);
		lst = nextnode;
	}
}
