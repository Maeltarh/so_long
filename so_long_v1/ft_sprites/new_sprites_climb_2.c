/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_climb_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:33:46 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:47:19 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_climb_5(void	*mlx, char *path)
{
	t_program	program;

	program.climb_5.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.climb_5.sprite.size.x,
			&program.climb_5.sprite.size.y);
	program.climb_5.sprite.addr = mlx_get_data_addr(
			program.climb_5.sprite.reference,
			&program.climb_5.sprite.bits_per_pixel,
			&program.climb_5.sprite.line_lenght,
			&program.climb_5.sprite.endian);
	return (program.climb_5.sprite);
}

t_sprite	ft_new_sprite_climb_6(void	*mlx, char *path)
{
	t_program	program;

	program.climb_6.sprite.reference = mlx_xpm_file_to_image(mlx, path,
			&program.climb_6.sprite.size.x,
			&program.climb_6.sprite.size.y);
	program.climb_6.sprite.addr = mlx_get_data_addr(
			program.climb_6.sprite.reference,
			&program.climb_6.sprite.bits_per_pixel,
			&program.climb_6.sprite.line_lenght,
			&program.climb_6.sprite.endian);
	return (program.climb_6.sprite);
}
