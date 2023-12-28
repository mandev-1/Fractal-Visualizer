/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_hooks_aka_key_controls.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:56:45 by mman              #+#    #+#             */
/*   Updated: 2023/12/28 20:15:24 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int key_hook(int keycode, t_mlxdata *mlxdata)
{
    printf("Hello from key_hook * %i!\n", keycode);
    if (keycode == 65307) // 65307 is the keycode for the ESC key
        close_window(mlxdata);
    return (0);
}

int mouse_hook(int button, int x, int y, t_mlxdata *mlxdata)
{
    printf("Mouse button %d clicked at (%d, %d)\n", button, x, y);
    // Add your mouse event handling logic here
    return (0);
}

int close_window(t_mlxdata *mlxdata)
{
    printf("Window Closed\n");
    // ft_cleanup_all(&(vars->img));
    exit(0);
    return (0);
}

int close_window_event(t_mlxdata *mlxdata)
{
    close_window(mlxdata);
    return (0);
}