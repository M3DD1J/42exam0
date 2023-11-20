/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:10:21 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/25 15:18:45 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	len = 0;
	char	*str;

	while(src[len])
	len++;

	str = malloc(sizeof(*str)*(len + 1));
	
	if(str != NULL)
	{
		while(src[i])
		{
			str[i] = src[i];
			i++;
		}
		str[i] = '\0';
	}

	return(str);
}

int	main()
{
	char	str[] = "Hello";

	printf("%s\n", str);
	printf("%s\n", ft_strdup(str));
	return(0);
}
	
