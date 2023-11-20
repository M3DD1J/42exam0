/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:55:33 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/23 17:03:01 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<malloc.h>

int	main()
{
	int	num = 100;
	int	*str;
	int	i;
	int	allocati;

	printf("Numero di elementi dell'array: %d\n", num);
	/*
	 * alloca il numero di elementi interi che ci servono (4x100)
	 * e opera un cast che permette alla memoria di essere
	 * trattata come array di int
	 * */
	str = (int *) malloc(sizeof(int) * num);
	if(str == NULL)
	{
		printf("Memoria esaurita\n");
		exit(1);
	}
	allocati = sizeof(int) * num;
	for(i=0; i<num; i++)
	{
		str[i] = i;
	}
	printf("Valori degli elementi\n");
	for(i=0; i<num; i++)
	{
		printf("%6d%c", str[i], (i%10 == 9)?'\n':' ');
	}
	printf("\n\nNumero elementi %d\n", num);
	printf("Dimensioni elemento %d\n", sizeof(int));
	printf("Bytes allocati %d\n", allocati);
	free(str);
	printf("\nMemoria Liberata\n");
	return 0;
}
