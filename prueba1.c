/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:55:31 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/16 11:55:36 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define tamano 10 

int main () 
{ 
	int	vNumeros[tamano]; 
	int	j:
	int i;
	int temp;	

	printf ("Introduce los %d números a ordenar:\n", tamano); 
	for (i = 0; i < tamano; i++)
	{
		printf ("%d: ", i + 1);
		scanf ("%d", &vNumeros[i]);
		printf ("\n");
	}
	for (i = 0; i < (tamano - 1); i++)
	{
		for (j = i + 1; j < tamano; j++)
		{
			if (vNumeros[j] < vNumeros[i])
			{
				temp = vNumeros[j];
				vNumeros[j] = vNumeros[i];
				vNumeros[i] = temp;
			}
		}
	}
	printf ("Los números ordenados son:\n");
	for (i = 0; i < tamano; i++)
	{
		printf("%d, ", vNumeros[i]);
	}
	printf("\n\n\n"); 
}
