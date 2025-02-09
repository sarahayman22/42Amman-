/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:44:11 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/04 12:48:02 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main(void) 
{
	char	s1[] ="abcd e";
	char	s2[] ="abcd d";

	printf("%d\n", ft_strncmp(s1,s2,5));
	 printf("%d\n", strncmp(s1,s2,5));
	 return (0);
}*/
