/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:37:45 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/05 18:10:16 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(*str) * len);
	if (!str)
		return (NULL);
	return ((char *)ft_memcpy(str, s, len));
}
/*
#include<stdio.h>

int main ()
{
	printf("%s",strdup("ddddd"));
}*/
