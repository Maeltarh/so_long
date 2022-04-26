/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:22:23 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 10:12:33 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_map(void *mlx, char *path)
{
	t_program	program;

	program.map.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.map.sprite.size.x, &program.map.sprite.size.y);
	program.map.sprite.addr = mlx_get_data_addr(program.map.sprite.reference, &program.map.sprite.bits_per_pixel,
		&program.map.sprite.line_lenght, &program.map.sprite.endian);
	return (program.map.sprite);
}

t_sprite	ft_new_sprite_background(void	*mlx, char *path)
{
	t_program	program;

	program.background.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.background.sprite.size.x, &program.background.sprite.size.y);
	program.background.sprite.addr = mlx_get_data_addr(program.background.sprite.reference, &program.background.sprite.bits_per_pixel,
		&program.background.sprite.line_lenght, &program.background.sprite.endian);
	return (program.background.sprite);
}

t_sprite	ft_new_sprite_item(void	*mlx, char *path)
{
	t_program	program;

	program.item.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.item.sprite.size.x, &program.item.sprite.size.y);
	program.item.sprite.addr = mlx_get_data_addr(program.item.sprite.reference, &program.item.sprite.bits_per_pixel,
		&program.item.sprite.line_lenght, &program.item.sprite.endian);
	return (program.item.sprite);
}

t_sprite	ft_new_sprite_crouch(void	*mlx, char *path)
{
	t_program	program;

	program.crouch.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.crouch.sprite.size.x, &program.crouch.sprite.size.y);
	program.crouch.sprite.addr = mlx_get_data_addr(program.crouch.sprite.reference, &program.crouch.sprite.bits_per_pixel,
		&program.crouch.sprite.line_lenght, &program.crouch.sprite.endian);
	return (program.crouch.sprite);
}
