/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:57:59 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/07/23 14:27:28 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int main () {
	int n1 = 20 ;
	int n2 = 4;
	ft_ultimate_div_mod(&n1,&n2);

	printf("results: a=%d, b=%d" ,n1 ,n2);
}*/
