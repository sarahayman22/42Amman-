/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:43:37 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/07/30 12:35:08 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
/*
int main (){
       char s[]="ass asss 33lls sa";
        ft_strcapitalize(s);
	int i=0;
	while (s[i])
	{
		write(1,&s[i],1);
		i++;
	}
}
*/
