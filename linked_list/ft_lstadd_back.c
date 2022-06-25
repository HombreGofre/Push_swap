/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:21:49 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/25 18:25:50 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *fin;

	if (!lst)
		return ;
	if (*lst)
	{
		fin = ft_lstlast(*lst);
		new = fin -> next;
	}
	else
		*lst = new;
}
