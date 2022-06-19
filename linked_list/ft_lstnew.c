/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:44:47 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/19 21:11:57 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new; //iniciamos una nueva variable como lista

	lst = malloc(sizeof(*new)); //creamos el nodo 
	if (!new)
		return (NULL);
	lst -> content = content; //inicializamos content con el mismo
	lst -> next = NULL; //inicializamos content con un sólo nodo siendo next NULL
	return (new);
}
