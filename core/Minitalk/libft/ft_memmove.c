/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:01:16 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/08/28 11:41:07 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (!d && !s)
		return (NULL);
	if (s < d)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
		return (dest);
	}
	else
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
		return (dest);
	}
}
/*
int main ()
{
	char src[]="hi";
	char dest[] ="bye!";
	
	 char *l = ft_memmove(dest, src, 2);
        printf("%s\n", l);

        char *t=memmove(dest, src, 2);
        printf("%s",t);

}*/
