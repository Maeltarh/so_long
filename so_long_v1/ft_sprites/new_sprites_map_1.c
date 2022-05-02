/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_map_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:22:23 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:50:32 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_map(void *mlx, char *path)
{
	t_program	program;

	program.map.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.map.sprite.size.x,
			&program.map.sprite.size.y);
	program.map.sprite.addr = mlx_get_data_addr(
			program.map.sprite.reference,
			&program.map.sprite.bits_per_pixel,
			&program.map.sprite.line_lenght,
			&program.map.sprite.endian);
	return (program.map.sprite);
}

t_sprite	ft_new_sprite_background(void	*mlx, char *path)
{
	t_program	program;

	program.background.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.background.sprite.size.x,
			&program.background.sprite.size.y);
	program.background.sprite.addr = mlx_get_data_addr(
			program.background.sprite.reference,
			&program.background.sprite.bits_per_pixel,
			&program.background.sprite.line_lenght,
			&program.background.sprite.endian);
	return (program.background.sprite);
}

t_sprite	ft_new_sprite_item(void	*mlx, char *path)
{
	t_program	program;

	program.item.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.item.sprite.size.x,
			&program.item.sprite.size.y);
	program.item.sprite.addr = mlx_get_data_addr(
			program.item.sprite.reference,
			&program.item.sprite.bits_per_pixel,
			&program.item.sprite.line_lenght,
			&program.item.sprite.endian);
	return (program.item.sprite);
}

t_sprite	ft_new_sprite_platform(void	*mlx, char *path)
{
	t_program	program;

	program.platform.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.platform.sprite.size.x,
			&program.platform.sprite.size.y);
	program.platform.sprite.addr = mlx_get_data_addr(
			program.platform.sprite.reference,
			&program.platform.sprite.bits_per_pixel,
			&program.platform.sprite.line_lenght,
			&program.platform.sprite.endian);
	return (program.platform.sprite);
}

t_sprite	ft_new_sprite_ladder(void	*mlx, char *path)
{
	t_program	program;

	program.ladder.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.ladder.sprite.size.x,
			&program.ladder.sprite.size.y);
	program.ladder.sprite.addr = mlx_get_data_addr(
			program.ladder.sprite.reference,
			&program.ladder.sprite.bits_per_pixel,
			&program.ladder.sprite.line_lenght,
			&program.ladder.sprite.endian);
	return (program.ladder.sprite);
}
