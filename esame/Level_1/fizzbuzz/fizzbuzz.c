/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:47:54 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/25 11:04:57 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_n(int n)
{
	char str[10] = "0123456789"; 

	if(n > 9)
	ft_write_n(n/10);
		write(1, &str[n%10], 1);
}

int	main()
{
	int	i = 1;

	while(i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_n(i);
	i++;
	write(1, "\n", 1);
	}
}	
