/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:32:14 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/25 16:38:26 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list	ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL)
	lst -> content = content;
	lst -> next = NULL;
	return (lst);
}
