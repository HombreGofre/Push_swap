/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:47:08 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/06/16 14:06:56 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

//prueba de ordenar varios números

int main()
{
	int i;
	int j;
	i = 0;

	printf("Escribe la cantidad de numeros a ordenar\n");
	scanf("%d", &i);

	printf("\nEscribe los numeros a ordenar:\n");
	for(j = 0; j < i; j++)
	{
		scanf("%d\n", &j);
	}
}
