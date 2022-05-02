/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_run_left.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:26:03 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:52:06 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_run_1_left(void	*mlx, char *path)
{
	t_program	program;

	program.run_1_left.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_1_left.sprite.size.x,
			&program.run_1_left.sprite.size.y);
	program.run_1_left.sprite.addr = mlx_get_data_addr(
			program.run_1_left.sprite.reference,
			&program.run_1_left.sprite.bits_per_pixel,
			&program.run_1_left.sprite.line_lenght,
			&program.run_1_left.sprite.endian);
	return (program.run_1_left.sprite);
}

t_sprite	ft_new_sprite_run_2_left(void	*mlx, char *path)
{
	t_program	program;

	program.run_2_left.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_2_left.sprite.size.x,
			&program.run_2_left.sprite.size.y);
	program.run_2_left.sprite.addr = mlx_get_data_addr(
			program.run_2_left.sprite.reference,
			&program.run_2_left.sprite.bits_per_pixel,
			&program.run_2_left.sprite.line_lenght,
			&program.run_2_left.sprite.endian);
	return (program.run_2_left.sprite);
}

t_sprite	ft_new_sprite_run_3_left(void	*mlx, char *path)
{
	t_program	program;

	program.run_3_left.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_3_left.sprite.size.x,
			&program.run_3_left.sprite.size.y);
	program.run_3_left.sprite.addr = mlx_get_data_addr(
			program.run_3_left.sprite.reference,
			&program.run_3_left.sprite.bits_per_pixel,
			&program.run_3_left.sprite.line_lenght,
			&program.run_3_left.sprite.endian);
	return (program.run_3_left.sprite);
}

t_sprite	ft_new_sprite_run_4_left(void	*mlx, char *path)
{
	t_program	program;

	program.run_4_left.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_4_left.sprite.size.x,
			&program.run_4_left.sprite.size.y);
	program.run_4_left.sprite.addr = mlx_get_data_addr(
			program.run_4_left.sprite.reference,
			&program.run_4_left.sprite.bits_per_pixel,
			&program.run_4_left.sprite.line_lenght,
			&program.run_4_left.sprite.endian);
	return (program.run_4_left.sprite);
}
