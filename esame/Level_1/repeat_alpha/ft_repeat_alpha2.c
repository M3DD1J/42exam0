/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgambard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:18:19 by rgambard          #+#    #+#             */
/*   Updated: 2023/10/16 19:59:11 by rgambard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main()
{
	char	*c;
	int	len = 0;

	while(*c != '\0')
	{
		len++;
		if(*c >= 'a' && *c <= 'z')
		write(1, &c, 1);
	++c;
	}
	write(1, &c, sizeof(len)-1);
	return(0);
}

/*
void	ft_putchar(char c, int n) 
{
	//char *str;
	while(n > 0)
	{
	write(1, &c, 1);
	--n;
	}
}
int	main()
{
	char	*str;
	int	i = 0;
	int	len = i + 1 - 'a';
		
	while(str[i] != '\0')
	{
	
		if(str[i] >= 'a' && str[i] <= 'z')
		{
		
			
			//ft_putchar(str[i], str[i + 1 - 'a']);
			//write(1, &str, 1);	
			len = i + 1 - 'a';	
			//n = i + 1 - 'a';
			//return 0;
		}
		//write(1, &str, sizeof(str[len]) - 1);
		i++;
		
	}
//	ft_putchar(str[i], str[i + 1 - 'a']);
//	ft_putchar(*str,*str + 1 - 'a');
	write(1, &str, len);
//	write(1, &str, sizeof(i + 1 - 97));
	write(1, "\n", 1);
	return 0;
}
*/
