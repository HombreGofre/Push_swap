/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:46:46 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/19 20:42:59 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <string.h>
# include <stdio.h>
# include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list *next;
}	t_list;

t_list *ft_lstnew(void *content);

#endif
