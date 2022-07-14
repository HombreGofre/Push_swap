/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:55:18 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/07/14 12:03:32 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define <stdio.h>
# define <string.h>
# define <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef	struct s_var
{
	t_list		stack_A;
	t_list		stack_B;
	char		**arguments;
	int			*arg;
	int			size;
}	t_var;

// UTILS

void	ft_init_swap_var(t_var *var);

// PARSE

void	ft_parse_one_arg(t_var *var, char *argv);
void	ft_parse_args(t_var *var, char **argv);


#endif
