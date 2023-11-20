/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:19:19 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/26 15:31:10 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	if(!s1 || !s2)
		return(0);
	while(*s1)
	{
		i = 0;	
		while(s2[i])
		{
			if(*s1 == s2[i])
				return(char *)s1;
			i++;
		}
	s1++;
	}
	return(0);
}

#include<stdio.h>
int	main()
{
	char	str1[] = "Hello, World!";
	char	str2[] = ",";
	char	*result = ft_strpbrk(str1, str2);

	printf("stringa 1: %s\nstringa 2: %s\n", str1, str2);
	printf("Posizione nel testo: %ld\n", result - str1);
	printf("Carattere trovato: %c\n", *result);
	
	return(0);
}
