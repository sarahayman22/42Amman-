/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:01:49 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/26 12:22:02 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	n;
	int				i;

	i = 0;
	n = (unsigned long)ptr;
	if (n)
	{
		i += ft_print_str("0x");
		i += ft_print_hexlo(n);
	}
	else
		i += ft_print_str("(nil)");
	return (i);
}
