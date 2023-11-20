/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:22:09 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/25 14:43:51 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i = 0;
	
	while(s[i] != '\0')
	{
		size_t	j = 0;
		while(reject[j] != '\0')
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

int	main()
{
	char s1[] = "Hello, World!";
	char s2[] = " ,";

	printf("%s\n%s\n", s1, s2);
	printf("%zu\n", ft_strcspn(s1, s2));
	return(0);
}
