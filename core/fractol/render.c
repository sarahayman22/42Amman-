/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saabo-sh <saabo-sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:30:10 by saabo-sh          #+#    #+#             */
/*   Updated: 2025/02/10 10:48:28 by saabo-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	my_pixel_put(int x, int y, t_img *img, int color)
{
	int	offset;

	offset = (y * img->line_len) + (x * (img->bpp / 8));
	*(unsigned int *)(img->pixels_ptr + offset) = color;
}

static void	mandel_vs_julia(t_complex *z, t_complex *c, t_fractol *fractol)
{
	if (!ft_strncmp(fractol->name, "julia", 5))
	{
		c->x = fractol->julia_x;
		c->y = fractol->julia_y;
	}
	else
	{
		c->x = z->x;
		c->y = z->y;
	}
}

static void	handle_pixel(int x, int y, t_fractol *fractol)
{
	t_complex	z;
	t_complex	c;
	int			i;
	int			color;

	i = 0;
	z.x = (map(x, -2, +2, WIDTH) * fractol->zoom) + fractol->shift_x;
	z.y = (map(y, +2, -2, HEIGHT) * fractol->zoom) + fractol->shift_y;
	mandel_vs_julia(&z, &c, fractol);
	while (i < fractol->iterations_defintion)
	{
		z = sum_complex(square_complex(z), c);
		if ((z.x * z.x) + (z.y * z.y) > fractol->escape_value)
		{
			color = map(i, BLACK, WHITE, fractol->iterations_defintion);
			my_pixel_put(x, y, &fractol->img, color);
			return ;
		}
		++i;
	}
	my_pixel_put(x, y, &fractol->img, BLACK);
}

void	fractol_render(t_fractol *fractol)
{
	int	x;
	int	y;

	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WIDTH)
		{
			handle_pixel(x, y, fractol);
		}
	}
	mlx_put_image_to_window(fractol->mlx_connection, fractol->mlx_window,
		fractol->img.img_ptr, 0, 0);
}
