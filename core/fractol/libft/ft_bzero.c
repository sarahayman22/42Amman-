/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:26:22 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/08/29 18:37:41 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (len--)
	{
		*p++ = 0;
	}
}
/*
int main() 
{
    // Define a buffer with some initial values
    char buffer[20] = "Hello, World!";

    // Call the custom ft_bzero function to set the buffer to zeros
    ft_bzero(buffer, 5);

    // Print the buffer contents after bzero
    printf("Buffer after ft_bzero (first 5 bytes set to zero): '%s'\n", buffer);

     bzero(buffer, 5);

    // Print the buffer contents after bzero
    printf("Buffer after bzero (first 5 bytes set to zero): '%s'\n", buffer);

}*/
