/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:21:44 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/21 20:13:11 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list	ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst -> next;
	return (lst);
}
//Mientras que "lst->next sea difernte de NULL" ya que si solo se pone "while (lst)"
//al recorrer la lista coge el ultimo nodo que aounta a NULL por lo que nos devuelve
//segmentation fault
