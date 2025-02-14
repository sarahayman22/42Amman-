/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:54:28 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/11 09:43:18 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "Hello";
	char dest[10];
	char *l = ft_memcpy(dest, src, sizeof(src)-1);
	printf("%s\n", l);

	char *t=memcpy(dest, src, sizeof(src)-1);
	printf("%s",t);
		
}*/
