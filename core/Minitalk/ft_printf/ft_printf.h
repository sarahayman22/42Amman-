/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:01:22 by saabo-sh          #+#    #+#             */
/*   Updated: 2024/09/19 18:06:07 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *input, ...);
int		ft_print_hexlo(unsigned long n);
int		ft_print_hexup(unsigned int n);
int		ft_print_ptr(void *ptr);
int		ft_print_unsint(unsigned int n);
int		ft_print_nbr(long n);
int		ft_print_str(char *str);
int		ft_print_char(int c);

#endif
