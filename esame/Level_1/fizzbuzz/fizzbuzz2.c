/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:04:36 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/25 11:05:24 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	write_numbers(int i)
{
	char	str[10] = "0123456789";
	if(i > 9)
	{
	  write(1, &str[i / 10], 1);
	}
	write(1, &str[i % 10], 1);
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
			write_numbers(i);
		
		write(1, "\n", 1);
	i++;
	}
	return(0);
}


