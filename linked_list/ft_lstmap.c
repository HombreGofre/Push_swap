/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:44:26 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/25 18:50:39 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list *lst2;

	if (!lst)
		return (NULL);
	lst2 = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst -> content));
		if (!(tmp))
		{
			ft_lstclear(*lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, tmp);
		lst = lst -> next;
	}
	return (lst2);
}
