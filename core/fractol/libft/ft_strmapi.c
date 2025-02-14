/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:12:17 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/11 13:20:21 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*char to_upper(unsigned int index, char c) {
	(void)index;
    return (char)ft_toupper((unsigned char)c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*res;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	res = malloc(length * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main ()
{
    char *s = ft_strmapi("sara", to_upper);
 printf("%s",s) ;  
}*/
