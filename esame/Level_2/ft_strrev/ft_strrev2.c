/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:52:38 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/30 15:03:29 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strrev(char *str)
{
	int	i = -1;
	int	len = 0;
	char	temp;

	while(str[len])
		len++;
	while(i++ < len / 2)
	{
		temp = str[i];
	str[i] = str[len -1 - i];
	str[len -1 -i] = temp;
	}
	return(str);
}

#include<stdio.h>

int	main()
{
	char str[] = "Hello, World!";

	printf("%s\n", str);
	printf("%s\n", ft_strrev(str));
	return(0);
}

	
