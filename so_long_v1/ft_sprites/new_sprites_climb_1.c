/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_climb_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:31:21 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:46:41 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_climb_1(void	*mlx, char *path)
{
	t_program	program;

	program.climb_1.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.climb_1.sprite.size.x,
			&program.climb_1.sprite.size.y);
	program.climb_1.sprite.addr = mlx_get_data_addr(
			program.climb_1.sprite.reference,
			&program.climb_1.sprite.bits_per_pixel,
			&program.climb_1.sprite.line_lenght,
			&program.climb_1.sprite.endian);
	return (program.climb_1.sprite);
}

t_sprite	ft_new_sprite_climb_2(void	*mlx, char *path)
{
	t_program	program;

	program.climb_2.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.climb_2.sprite.size.x,
			&program.climb_2.sprite.size.y);
	program.climb_2.sprite.addr = mlx_get_data_addr(
			program.climb_2.sprite.reference,
			&program.climb_2.sprite.bits_per_pixel,
			&program.climb_2.sprite.line_lenght,
			&program.climb_2.sprite.endian);
	return (program.climb_2.sprite);
}

t_sprite	ft_new_sprite_climb_3(void	*mlx, char *path)
{
	t_program	program;

	program.climb_3.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.climb_3.sprite.size.x,
			&program.climb_3.sprite.size.y);
	program.climb_3.sprite.addr = mlx_get_data_addr(
			program.climb_3.sprite.reference,
			&program.climb_3.sprite.bits_per_pixel,
			&program.climb_3.sprite.line_lenght,
			&program.climb_3.sprite.endian);
	return (program.climb_3.sprite);
}

t_sprite	ft_new_sprite_climb_4(void	*mlx, char *path)
{
	t_program	program;

	program.climb_4.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.climb_4.sprite.size.x,
			&program.climb_4.sprite.size.y);
	program.climb_4.sprite.addr = mlx_get_data_addr(
			program.climb_4.sprite.reference,
			&program.climb_4.sprite.bits_per_pixel,
			&program.climb_4.sprite.line_lenght,
			&program.climb_4.sprite.endian);
	return (program.climb_4.sprite);
}
