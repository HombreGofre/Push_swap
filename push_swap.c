/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:58:44 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/30 20:56:48 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	main (int argc, int argv)
{
	t_list	stack_a;
	t_list	stack_b;
	int		tmn;

	stack_a = NULL;
	stack_b = NULL;
	tmn = 0;
	
	if (argc > 1)
	{

	}
}
//1º - creamos los dos stacks como listas de las variables
//2º - iniciamos en NULL y declaramos en caso de ser los argc menor o igual a 1
//3º - declaramos se inicia que "argc > 1" en caso contrario no entra
//4º - cuando entra hay que "parsear" lus numeros dados para poder trabajar ()
