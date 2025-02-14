/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <saabo-sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:29:10 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/02/10 10:51:35 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int ac, char **av)
{
	t_fractol	fractol;

	if ((2 == ac && !ft_strncmp(av[1], "mandelbrot", 10)) || (4 == ac
			&& !ft_strncmp(av[1], "julia", 5)))
	{
		fractol.name = av[1];
		if (!ft_strncmp(fractol.name, "julia", 5))
		{
			fractol.julia_x = atodbl(av[2]);
			fractol.julia_y = atodbl(av[3]);
		}
		fractol_init(&fractol);
		fractol_render(&fractol);
		mlx_loop(fractol.mlx_connection);
	}
	else
	{
		putstr_fd(ERROR_MESSAGE, STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
