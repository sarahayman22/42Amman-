/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:24:00 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/08/07 11:57:01 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	j = min ;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < (max - min))
	{
		(*range)[i++] = j++;
	}
	return (i);
}
/*
int main(void)
{
    int *range;
    int i =0;

    int a = ft_ultimate_range(&range, 1 ,9);
    printf("%d\n" , a);
    while (i< a)
    {
	     printf("%d\n " , range[i]);
	     i++;

}

    free(range);

  
}*/
