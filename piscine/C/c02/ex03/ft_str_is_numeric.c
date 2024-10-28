/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:03:35 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/07/24 18:37:36 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (!(str[i] > '0' && str[i] < '9'))
		{
			count = 0;
		}
		i++;
	}
	return (count);
}
/*
int main (){
	char *c= "dd";
int p	=ft_str_is_numeric(c)+ '0';
	write(1,&p,1);
}*/
