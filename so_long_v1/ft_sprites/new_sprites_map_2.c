/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_map_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:30:06 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 19:36:24 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_right_wall(void *mlx, char *path)
{
	t_program	program;

	program.right_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.right_wall.sprite.size.x, &program.right_wall.sprite.size.y);
	program.right_wall.sprite.addr = mlx_get_data_addr(program.right_wall.sprite.reference, &program.right_wall.sprite.bits_per_pixel,
		&program.right_wall.sprite.line_lenght, &program.right_wall.sprite.endian);
	return (program.right_wall.sprite);
}

t_sprite	ft_new_sprite_upper_right_wall(void *mlx, char *path)
{
	t_program	program;

	program.upper_right_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.upper_right_wall.sprite.size.x, &program.upper_right_wall.sprite.size.y);
	program.upper_right_wall.sprite.addr = mlx_get_data_addr(program.upper_right_wall.sprite.reference, &program.upper_right_wall.sprite.bits_per_pixel,
		&program.upper_right_wall.sprite.line_lenght, &program.upper_right_wall.sprite.endian);
	return (program.upper_right_wall.sprite);
}

t_sprite	ft_new_sprite_lower_right_wall(void *mlx, char *path)
{
	t_program	program;

	program.lower_right_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.lower_right_wall.sprite.size.x, &program.lower_right_wall.sprite.size.y);
	program.lower_right_wall.sprite.addr = mlx_get_data_addr(program.lower_right_wall.sprite.reference, &program.lower_right_wall.sprite.bits_per_pixel,
		&program.lower_right_wall.sprite.line_lenght, &program.lower_right_wall.sprite.endian);
	return (program.lower_right_wall.sprite);
}

t_sprite	ft_new_sprite_lower_wall(void *mlx, char *path)
{
	t_program	program;

	program.lower_wall.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.lower_wall.sprite.size.x, &program.lower_wall.sprite.size.y);
	program.lower_wall.sprite.addr = mlx_get_data_addr(program.lower_wall.sprite.reference, &program.lower_wall.sprite.bits_per_pixel,
		&program.lower_wall.sprite.line_lenght, &program.lower_wall.sprite.endian);
	return (program.lower_wall.sprite);
}
