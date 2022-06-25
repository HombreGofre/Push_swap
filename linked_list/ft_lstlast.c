/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:17:56 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/25 18:20:52 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list	ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next !=  NULL)
		ft_lstlast (lst -> next);
	return (lst);
}
