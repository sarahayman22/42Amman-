/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:44:07 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/04 11:43:22 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/* 
int main(void) {
    // Sample strings for testing
    const char *str = "Hello, world!";
    int ch = 'o'; // Character to find

    // Call the ft_strrchr function
    char *result = ft_strrchr(str, ch);

    // Print the result
    if (result) {
        printf("Last occurrence of '%c': \"%s\"\n", ch, result);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}*/
