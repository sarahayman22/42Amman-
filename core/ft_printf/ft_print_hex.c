/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:05:59 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/25 10:59:06 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// x
int	ft_print_hexlo(unsigned long n)
{
	int		count;
	char	*symbol;

	count = 0;
	symbol = "0123456789abcdef";
	if (n < 16)
	{
		return (ft_print_char(symbol[n]));
	}
	else
	{
		count += ft_print_hexlo((n / 16));
		return (count + ft_print_hexlo((n % 16)));
	}
}

//X
int	ft_print_hexup(unsigned int n)
{
	int		count;
	char	*symbol;

	count = 0;
	symbol = "0123456789ABCDEF";
	if (n < 16)
	{
		return (ft_print_char(symbol[n]));
	}
	else
	{
		count += ft_print_hexup((n / 16));
		return (count + ft_print_hexup((n % 16)));
	}
}
