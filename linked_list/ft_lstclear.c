/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:34:44 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/24 13:00:13 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *aux;

	while (*lst)
	{
		aux = (*lst)->next;
		ft_delone(*lst, del);
		*lst = aux;
	}
	*lst = NULL;
}
