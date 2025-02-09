/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:13:25 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/05 14:54:06 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	dstlen;

	j = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	if (!dst || !src)
		return (0);
	if (size <= dstlen)
		return (size + srclen);
	while (src[j] != '\0' && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srclen + dstlen);
}
/*
int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    size_t size = sizeof(dest); // 20

    size_t result = ft_strlcat(dest, src, size);

    printf("Resulting string: %s\n", dest);
    printf("Length of the string that was tried to create: %zu\n", result);

    return 0;
}*/
