/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:55:31 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/25 14:18:56 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return(s1 - s2);
}

int	main()
{
	char s1[] = "Hello, ";
	char s2[] = "World!";

	printf("%s\n%s\n", s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
