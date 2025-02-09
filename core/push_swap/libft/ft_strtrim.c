/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:12:11 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/09 14:31:10 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	end = ft_strlen(s1) - 1;
	start = 0;
	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	if (start > end)
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end]))
		--end;
	trimmed = ft_substr(s1, start, (end - start + 1));
	return (trimmed);
}
/*
int main ()
{
	printf("%s",ft_strtrim(" dasssad ","da"));
}*/
