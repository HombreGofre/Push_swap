/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:47:37 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/20 19:50:52 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		return (NULL);
	while (*lst)
	{
		lst->next = lst;
		if (!lst->next)
			new = lst->next;
	}
}
