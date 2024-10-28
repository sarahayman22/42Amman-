/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:57:07 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/26 10:07:59 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	
	
	
	
	
	if (format == 'c')
		length += ft_print_char(va_arg(args, int));
	else if (format == 's')
		length += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		length += ft_print_ptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		length += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		length += ft_print_unsint(va_arg(args, unsigned int));
	else if (format == 'x')
		length += ft_print_hexlo(va_arg(args, unsigned int));
	else if (format == 'X')
		length += ft_print_hexup(va_arg(args, unsigned int));
	else if (format == '%')
		length += ft_print_char('%');
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			length += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
