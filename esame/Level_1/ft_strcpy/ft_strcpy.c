/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:54:43 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/22 15:12:47 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *s1,char *s2)
{
	int	i = 0;	
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
#include<stdio.h>
int	main()
{
	char str1[] = "Hello, World!";
	char str2[50] = "";
	printf("str1: %s\n", str1);
        printf("str2: %s\n", str2);
	ft_strcpy(str2, str1);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
}

