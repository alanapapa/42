/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbazarov <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:47:07 by bbazarov          #+#    #+#             */
/*   Updated: 2022/02/09 15:47:20 by bbazarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*not_empty;

	newlist = 0;
	while (lst)
	{
		not_empty = ft_lstnew(f(lst -> content));
		if (!not_empty)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, not_empty);
		lst = lst -> next;
	}
	return (newlist);
}
