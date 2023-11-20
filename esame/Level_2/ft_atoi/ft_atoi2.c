/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:10:13 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/23 14:21:13 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(const char *str)
{
	int	num = 0;
	int	sign = 1;

	while(*str == ' ' || *str >= 9 && *str <= 13)
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
	char str[] = "123-4+5\t6";

	printf("%s\n", str);
	printf("atoi: %d\n", ft_atoi(str));
}

