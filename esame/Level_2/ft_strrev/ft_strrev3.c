/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:33:17 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/16 14:52:32 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return(len);
}
char	*ft_strrev(char *str)
{
	/*if(!str)
		return(0);
	*/
	int	i = 0;
	int	j = strlen(str) -1;

	while (i < j)
	{
		char c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	return(str);
}
int	main()
{
	char str[] = "abcdef";
	
	printf("default: %s\n", str);
	printf("reverted: %s\n", ft_strrev(str));
			return(0);
}
