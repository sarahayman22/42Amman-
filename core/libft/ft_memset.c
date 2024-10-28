/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:53:39 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/04 17:04:01 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
/* 
int main ()
{
	char buffer[14] = "asdffg";  // Use a modifiable character array

    // Use ft_memset to set all characters in buffer to a specific value
    ft_memset(buffer, 35, 4);
    printf("ft_memset result: %s\n", buffer);


    // Use memset to set all characters in buffer to a specific value
    memset(buffer, 35, 4);
    printf("memset result: %s\n", buffer);

    return 0;

}*/
