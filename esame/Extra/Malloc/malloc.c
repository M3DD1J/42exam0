/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:07:12 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/23 17:45:54 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int	main()
{
	int	numero, *array, i;
	int	allocati;
	numero = 100;
	printf("Numero di elementi dell'array: %d\n", numero);

	array = (int *) malloc(sizeof(int) * numero);

	if(array == NULL)
	{
		printf("Memoria esaurita\n");
		exit(1);
	}

	allocati = sizeof(int) * numero;
	i = 0;

	while(i < numero)
	{
		array[i] = i;
		printf("%6d", array[i]);
		if(i % 10 == 9)
			printf("\n");
		else
			printf(" ");
		
		i++;
	}
	printf("\nNumero elementi\n", numero);
	printf("Dimensione elemento %lu\n", sizeof(int));
	printf("Bytes allocati %d\n", allocati);
	free(array);
	printf("\nMemoria Liberata\n");

	return(0);
}
