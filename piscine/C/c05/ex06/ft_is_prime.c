/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:24:36 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/08/04 18:48:57 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (nb != i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main ()
{
	printf ("%d",ft_is_prime(6));
}
*/
