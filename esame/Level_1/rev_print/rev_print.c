/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:50:03 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/19 13:54:19 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

#include<stdio.h>

int	main()
{
	char	str[] = "Hello, World!";

	printf("%s\n", str);
	printf("%d", ft_strlen(str));
	return(0);
}
