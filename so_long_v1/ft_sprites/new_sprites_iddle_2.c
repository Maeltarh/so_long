/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_iddle_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:16:13 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 10:16:55 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_iddle_5(void *mlx, char *path)
{
	t_program	program;

	program.iddle_5.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_5.sprite.size.x, &program.iddle_5.sprite.size.y);
	program.iddle_5.sprite.addr = mlx_get_data_addr(program.iddle_5.sprite.reference, &program.iddle_5.sprite.bits_per_pixel,
		&program.iddle_5.sprite.line_lenght, &program.iddle_5.sprite.endian);
	return (program.iddle_5.sprite);
}

t_sprite	ft_new_sprite_iddle_6(void *mlx, char *path)
{
	t_program	program;

	program.iddle_6.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_6.sprite.size.x, &program.iddle_6.sprite.size.y);
	program.iddle_6.sprite.addr = mlx_get_data_addr(program.iddle_6.sprite.reference, &program.iddle_6.sprite.bits_per_pixel,
		&program.iddle_6.sprite.line_lenght, &program.iddle_6.sprite.endian);
	return (program.iddle_6.sprite);
}

t_sprite	ft_new_sprite_iddle_7(void *mlx, char *path)
{
	t_program	program;

	program.iddle_7.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_7.sprite.size.x, &program.iddle_7.sprite.size.y);
	program.iddle_7.sprite.addr = mlx_get_data_addr(program.iddle_7.sprite.reference, &program.iddle_7.sprite.bits_per_pixel,
		&program.iddle_7.sprite.line_lenght, &program.iddle_7.sprite.endian);
	return (program.iddle_7.sprite);
}

t_sprite	ft_new_sprite_iddle_8(void *mlx, char *path)
{
	t_program	program;

	program.iddle_8.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_8.sprite.size.x, &program.iddle_8.sprite.size.y);
	program.iddle_8.sprite.addr = mlx_get_data_addr(program.iddle_8.sprite.reference, &program.iddle_8.sprite.bits_per_pixel,
		&program.iddle_8.sprite.line_lenght, &program.iddle_8.sprite.endian);
	return (program.iddle_8.sprite);
}
