/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:29:50 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/07/23 18:15:30 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main() {
    int a = 10;   
    int b = 3;    
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Division result: %d\n", div);
    printf("Modulus result: %d\n", mod);

    return 0;
}*/
