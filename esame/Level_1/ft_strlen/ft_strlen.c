/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:58:26 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/22 14:02:45 by rgambard         ###   ########.fr       */
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
	char	str[] = "It Was A Good Day";

	printf("%s conta ",str);
	printf("%d caratteri", ft_strlen(str));
	return(0);
}       
