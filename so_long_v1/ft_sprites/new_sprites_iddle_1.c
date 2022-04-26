/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_iddle_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:04:46 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 10:15:57 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_iddle_1(void *mlx, char *path)
{
	t_program	program;

	program.iddle_1.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_1.sprite.size.x, &program.iddle_1.sprite.size.y);
	program.iddle_1.sprite.addr = mlx_get_data_addr(program.iddle_1.sprite.reference, &program.iddle_1.sprite.bits_per_pixel,
		&program.iddle_1.sprite.line_lenght, &program.iddle_1.sprite.endian);
	return (program.iddle_1.sprite);
}

t_sprite	ft_new_sprite_iddle_2(void *mlx, char *path)
{
	t_program	program;

	program.iddle_2.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_2.sprite.size.x, &program.iddle_2.sprite.size.y);
	program.iddle_2.sprite.addr = mlx_get_data_addr(program.iddle_2.sprite.reference, &program.iddle_2.sprite.bits_per_pixel,
		&program.iddle_2.sprite.line_lenght, &program.iddle_2.sprite.endian);
	return (program.iddle_2.sprite);
}

t_sprite	ft_new_sprite_iddle_3(void *mlx, char *path)
{
	t_program	program;

	program.iddle_3.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_3.sprite.size.x, &program.iddle_3.sprite.size.y);
	program.iddle_3.sprite.addr = mlx_get_data_addr(program.iddle_3.sprite.reference, &program.iddle_3.sprite.bits_per_pixel,
		&program.iddle_3.sprite.line_lenght, &program.iddle_3.sprite.endian);
	return (program.iddle_3.sprite);
}

t_sprite	ft_new_sprite_iddle_4(void *mlx, char *path)
{
	t_program	program;

	program.iddle_4.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.iddle_4.sprite.size.x, &program.iddle_4.sprite.size.y);
	program.iddle_4.sprite.addr = mlx_get_data_addr(program.iddle_4.sprite.reference, &program.iddle_4.sprite.bits_per_pixel,
		&program.iddle_4.sprite.line_lenght, &program.iddle_4.sprite.endian);
	return (program.iddle_4.sprite);
}
