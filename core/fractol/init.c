/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <saabo-sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:27:19 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/02/10 10:48:17 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>
#include <stdlib.h>

static void	malloc_error(void)
{
	perror("Problems with malloc");
	exit(EXIT_FAILURE);
}

static void	data_init(t_fractol *fractol)
{
	fractol->escape_value = 4;
	fractol->iterations_defintion = 42;
	fractol->shift_x = 0.0;
	fractol->shift_y = 0.0;
	fractol->zoom = 1.0;
}

static void	events_init(t_fractol *fractol)
{
	mlx_hook(fractol->mlx_window, KeyPress, KeyPressMask, key_handler,
		fractol);
	mlx_hook(fractol->mlx_window, ButtonPress, ButtonPressMask, mouse_handler,
		fractol);
	mlx_hook(fractol->mlx_window, DestroyNotify, StructureNotifyMask,
		close_handler, fractol);
	mlx_hook(fractol->mlx_window, MotionNotify, PointerMotionMask, julia_track,
		fractol);
}

void	fractol_init(t_fractol *fractol)
{
	fractol->mlx_connection = mlx_init();
	if (NULL == fractol->mlx_connection)
		malloc_error();
	fractol->mlx_window = mlx_new_window(fractol->mlx_connection, WIDTH, HEIGHT,
			fractol->name);
	if (NULL == fractol->mlx_window)
	{
		mlx_destroy_display(fractol->mlx_connection);
		free(fractol->mlx_connection);
		malloc_error();
	}
	fractol->img.img_ptr = mlx_new_image(fractol->mlx_connection, WIDTH,
			HEIGHT);
	if (NULL == fractol->img.img_ptr)
	{
		mlx_destroy_window(fractol->mlx_connection, fractol->mlx_window);
		mlx_destroy_display(fractol->mlx_connection);
		free(fractol->mlx_connection);
		malloc_error();
	}
	fractol->img.pixels_ptr = mlx_get_data_addr(fractol->img.img_ptr,
			&fractol->img.bpp, &fractol->img.line_len, &fractol->img.endian);
	events_init(fractol);
	data_init(fractol);
}
