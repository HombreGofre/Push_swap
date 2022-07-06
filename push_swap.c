/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:58:44 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/07/06 18:40:32 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	main (int argc, char **argv)
{
	t_list	stack_a;
	t_list	stack_b;
	int		tmn;

	stack_a = NULL;
	stack_b = NULL;
	tmn = 0;
	
	if (argc == 1)
		return (0);
	if (argc == 2)
	{

	}
}
//1º - creamos los dos stacks como listas de las variables
//2º - iniciamos en NULL y declaramos en caso de ser los argc menor o igual a 1
//3º - declaramos se inicia que "argc > 1" en caso contrario no entra
//4º - cuando entra hay que "parsear" lus numeros dados para poder trabajar
//     en la funcion de parseo trabajaremos con split y atoi
//5º - recorremos los argumentos dados y los guardamos en el "stack A" para poder usarlos
//6º - al tener todo en la lista hay que comprobar que no se repiten numeros, en caso de ser
//     asi el programa debería darnos e imprimir "Error"
//7º - Seguido abrá que crear una funcion que nos verifique que en "stack A" estan los 
//     nodos ordenados, en caso de ya ser ordenados no realizar ninguna acción y se termina
//8º - En caso de no estarlo ordenarlos usando el algritmo de ordenacion deseado usando las
//     funciones que nos facilitan en el subject
//     ¡Merge Sort! - array - 
