/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:04:02 by rgambard          #+#    #+#             */
/*   Updated: 2023/11/20 18:36:30 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

size_t ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	len = 0;

	while(s[i] != '\0' && accept[i])
	{

	if(s[i] == accept[i])
		len++;
	i++;
	}
//	s[i] == '\0';
	return(len);
}

#include<stdio.h>

int	main()
{
	char	str1[] = "geeks for geeks";
	char	str2[] = "geek";

	printf("stringa 1: %s\nstringa 2: %s\n", str1, str2);
	printf("numero di lettere in comune: %zu", ft_strspn(str1, str2));
	return(0);
}
