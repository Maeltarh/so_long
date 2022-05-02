/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_run_right.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:50:26 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:52:52 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_run_1_right(void	*mlx, char *path)
{
	t_program	program;

	program.run_1_right.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_1_right.sprite.size.x,
			&program.run_1_right.sprite.size.y);
	program.run_1_right.sprite.addr = mlx_get_data_addr(
			program.run_1_right.sprite.reference,
			&program.run_1_right.sprite.bits_per_pixel,
			&program.run_1_right.sprite.line_lenght,
			&program.run_1_right.sprite.endian);
	return (program.run_1_right.sprite);
}

t_sprite	ft_new_sprite_run_2_right(void	*mlx, char *path)
{
	t_program	program;

	program.run_2_right.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_2_right.sprite.size.x,
			&program.run_2_right.sprite.size.y);
	program.run_2_right.sprite.addr = mlx_get_data_addr(
			program.run_2_right.sprite.reference,
			&program.run_2_right.sprite.bits_per_pixel,
			&program.run_2_right.sprite.line_lenght,
			&program.run_2_right.sprite.endian);
	return (program.run_2_right.sprite);
}

t_sprite	ft_new_sprite_run_3_right(void	*mlx, char *path)
{
	t_program	program;

	program.run_3_right.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_3_right.sprite.size.x,
			&program.run_3_right.sprite.size.y);
	program.run_3_right.sprite.addr = mlx_get_data_addr(
			program.run_3_right.sprite.reference,
			&program.run_3_right.sprite.bits_per_pixel,
			&program.run_3_right.sprite.line_lenght,
			&program.run_3_right.sprite.endian);
	return (program.run_3_right.sprite);
}

t_sprite	ft_new_sprite_run_4_right(void	*mlx, char *path)
{
	t_program	program;

	program.run_4_right.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.run_4_right.sprite.size.x,
			&program.run_4_right.sprite.size.y);
	program.run_4_right.sprite.addr = mlx_get_data_addr(
			program.run_4_right.sprite.reference,
			&program.run_4_right.sprite.bits_per_pixel,
			&program.run_4_right.sprite.line_lenght,
			&program.run_4_right.sprite.endian);
	return (program.run_4_right.sprite);
}
