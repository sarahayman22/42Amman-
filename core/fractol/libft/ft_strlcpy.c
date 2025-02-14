/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:43:15 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/08/29 18:39:30 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h> 
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if (maxlen == 0)
		return (len);
	i = 0;
	while (i < maxlen - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];
    size_t len;

    // Test case 1: maxlen larger than src length
    len = ft_strlcpy(dst, src, sizeof(dst));
    printf("Copied string: '%s'\n", dst);
    printf("Length of source: %zu\n", len);

    // Test case 2: maxlen smaller than src length
    len = ft_strlcpy(dst, src, 5);
    printf("Copied string: '%s'\n", dst);
    printf("Length of source: %zu\n", len);

    return 0;
}*/
