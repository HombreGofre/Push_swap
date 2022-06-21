/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:36:37 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/21 19:18:26 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
