/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:25:32 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/07/20 17:03:20 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstnew(int content)
{
	t_list	lst;
	
	lst = malloc(sizeof(t_list));
	if (!lst)
		exit (1);
	lst->content = content;
	lst->prev;
	lst->next = NULL;
}
