/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:34:09 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/25 18:39:36 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *aux;

	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = NULL;
}
