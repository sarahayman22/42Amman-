/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:17:52 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/07/28 15:16:59 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (str [i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			count = 0;
		}
		i++;
	}
	return (count);
}
/*
int main ()
{

	char *s="sdfghjk";
	int p = ft_str_is_alpha(s) + '0';
	write(1, &p, 1); 
}*/
