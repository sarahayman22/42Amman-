/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:36:54 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/28 11:17:48 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//c
int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

//s
int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		return (ft_print_str("(null)"));
	}
	else
	{	
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}

// i d
int	ft_print_nbr(long n)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_print_nbr(n / 10);
		count += ft_print_nbr(n % 10);
	}
	if (n < 10)
		count += ft_print_char(n + '0');
	return (count);
}

//u
int	ft_print_unsint(unsigned int n)
{
	int		count;

	count = 0;
	if (n >= 10)
	{
		count += ft_print_nbr(n / 10);
		count += ft_print_nbr(n % 10);
	}
	if (n < 10)
		count += ft_print_char(n + '0');
	return (count);
}
