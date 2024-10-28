/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:33:55 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/01 17:07:53 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int main ()
{
	const char *str = "Hello, world";
	char ch = 'l';

	char *ptr = ft_strchr(str, ch);
	if (ptr != NULL)
	{
		printf("Found '%c' at position %ld\n",ch, ptr - str);
	}else
	{
		printf("Character '%c' not found\n",ch);
	}
	return 0;
}*/
