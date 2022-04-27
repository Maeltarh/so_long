/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_sprites_map_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:26:13 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 16:11:27 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_sprite	ft_new_sprite_exite_door(void *mlx, char *path)
{
	t_program	program;

	program.exite_door.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.exite_door.sprite.size.x, &program.exite_door.sprite.size.y);
	program.exite_door.sprite.addr = mlx_get_data_addr(program.exite_door.sprite.reference, &program.exite_door.sprite.bits_per_pixel,
		&program.exite_door.sprite.line_lenght, &program.exite_door.sprite.endian);
	return (program.exite_door.sprite);
}

t_sprite	ft_new_sprite_spike_trap(void	*mlx, char *path)
{
	t_program	program;

	program.spike_trap.sprite.reference = mlx_xpm_file_to_image(mlx, path, &program.spike_trap.sprite.size.x, &program.spike_trap.sprite.size.y);
	program.spike_trap.sprite.addr = mlx_get_data_addr(program.spike_trap.sprite.reference, &program.spike_trap.sprite.bits_per_pixel,
		&program.spike_trap.sprite.line_lenght, &program.spike_trap.sprite.endian);
	return (program.spike_trap.sprite);
}
