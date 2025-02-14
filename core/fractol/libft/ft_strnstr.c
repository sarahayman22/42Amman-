/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:20:12 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/09 14:25:24 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	char	*s;

	s = (char *)str;
	if (!ft_strlen(find))
		return (s);
	while (*s && len)
	{
		if (len < ft_strlen(find))
			return (NULL);
		if (ft_strncmp(s, find, ft_strlen(find)) == 0)
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}
/*
int main ()
{
	const char *str = "Hello, world!";
        const char *find = "w";
        size_t len = 8;

    char *result = ft_strnstr(str, find , len);
    char *resfun= strnstr(str, find ,len);
    printf("%s\n", result);
    printf("%s", resfun);
}*/
