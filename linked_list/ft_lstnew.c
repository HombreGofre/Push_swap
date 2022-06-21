/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:33:37 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/21 18:36:13 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list	*ft_lstnew(content)
{
	t_list	*new;

	if (!new)
		return (NULL);
	new = malloc(sizeof(new));
	new -> content = content;
	new -> next = NULL;
	return (new);
}
