/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:15:43 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/09 14:32:59 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	char	*p;

	i = start;
	j = 0;
	if (!s)
		return (0);
	str = (char *)s;
	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	if (ft_strlen(str) - start < len)
		len = ft_strlen(str) - start;
	p = (char *)malloc((len + 1) * sizeof(*s));
	if (!p)
		return (NULL);
	while (i < ft_strlen(str) && j < len)
	{
		p[j] = str[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
/*
int main ()
{
	char s[]="sasfyhki";
	printf("%s\n",ft_substr(s,3 ,3 ));//fyh
//	printf("%s",s.substr(3 ,3 ));
}*/
