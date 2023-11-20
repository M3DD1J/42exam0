/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:51:41 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/22 13:57:37 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp = *a;

	*a = *b;
	*b = temp;

}

#include<stdio.h>

int	main()
{
	int	a = 10;
	int	b = 3;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("SWAP");
	ft_swap(&a, &b);
	printf("\na = %d\nb = %d\n", a, b);
	return(0);
}
