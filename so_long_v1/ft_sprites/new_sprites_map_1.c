/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_map_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:30:03 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 19:33:25 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_left_wall(void *mlx, char *path)
{
	t_program	program;

	program.left_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.left_wall.sprite.size.x, &program.left_wall.sprite.size.y);
	program.left_wall.sprite.addr = mlx_get_data_addr(program.left_wall.sprite.reference, &program.left_wall.sprite.bits_per_pixel,
		&program.left_wall.sprite.line_lenght, &program.left_wall.sprite.endian);
	return (program.left_wall.sprite);
}

t_sprite	ft_new_sprite_upper_left_wall(void *mlx, char *path)
{
	t_program	program;

	program.upper_left_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.upper_left_wall.sprite.size.x, &program.upper_left_wall.sprite.size.y);
	program.upper_left_wall.sprite.addr = mlx_get_data_addr(program.upper_left_wall.sprite.reference, &program.upper_left_wall.sprite.bits_per_pixel,
		&program.upper_left_wall.sprite.line_lenght, &program.upper_left_wall.sprite.endian);
	return (program.upper_left_wall.sprite);
}

t_sprite	ft_new_sprite_lower_left_wall(void *mlx, char *path)
{
	t_program	program;

	program.lower_left_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.lower_left_wall.sprite.size.x, &program.lower_left_wall.sprite.size.y);
	program.lower_left_wall.sprite.addr = mlx_get_data_addr(program.lower_left_wall.sprite.reference, &program.lower_left_wall.sprite.bits_per_pixel,
		&program.lower_left_wall.sprite.line_lenght, &program.lower_left_wall.sprite.endian);
	return (program.lower_left_wall.sprite);
}

t_sprite	ft_new_sprite_upper_wall(void *mlx, char *path)
{
	t_program	program;

	program.upper_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.upper_wall.sprite.size.x, &program.upper_wall.sprite.size.y);
	program.upper_wall.sprite.addr = mlx_get_data_addr(program.upper_wall.sprite.reference, &program.upper_wall.sprite.bits_per_pixel,
		&program.upper_wall.sprite.line_lenght, &program.upper_wall.sprite.endian);
	return (program.upper_wall.sprite);
}
