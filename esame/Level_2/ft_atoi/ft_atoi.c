/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:33:23 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/23 14:09:52 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(const char *str)
{

	int	sign = 1;
	int	num = 0;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
	str++;

	if(*str == '-')
	sign = -1;

	if(*str == '-' || *str == '+')
	str++;
		
	while(*str >= '0' && *str <= '9')
	{
	num = num * 10 + *str - '0';
	str++;
	}
	return(sign * num);
}
#include<stdio.h>

int	main()
{
	char str[] = "1+23\t43-21a";

	printf("%s\n", str);
	printf("%d\n", ft_atoi(str));
	
}
