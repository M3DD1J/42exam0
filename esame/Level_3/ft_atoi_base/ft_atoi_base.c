/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:37:34 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/14 15:53:13 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	to_lower(char c)
{
	if (c >= 65 && c <= 90)
		return (c + (97 - 65));
	return(c);
}

int get_digit(char c, int digits_in_base)
{
	int	max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + 48;
	else
		max_digit = digits_in_base - 10 + 97;
	if (c >= 48 && c <= 57 && c <= max_digit)
		return (c - 48);
	else if (c >= 97 && c <= 102 && c <= max_digit)
		return (10 + c - 97);
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	return (result);
}

#include<stdio.h>

int	main()
{
	
	char str[] = "  0123456789abcdef12fd312FDB3";

	printf("%s\n", str);
	ft_atoi_base(str, 10);
	printf("%s", str);
	return (0);
}
