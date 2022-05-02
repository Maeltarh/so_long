/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_map_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:41:24 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:58:26 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_map(t_program *program)
{
	int	i;

	i = 0;
	program->map.sp_pos.x = 0;
	program->map.sp_pos.y = 0;
	ft_background(program);
	program->map.sprite = ft_new_sprite_map(program->mlx,
			"./sprites/wall.xpm");
	render_map(i, program);
	ft_spike_trap(program);
	ft_printf_count(program);
}

void	ft_item(int i, t_program *program)
{
	program->item.sp_pos.x = program->map.sp_pos.x;
	program->item.sp_pos.y = program->map.sp_pos.y + 35;
	if (program->iddle_1.sp_pos.x != (program->item.sp_pos.x)
		|| program->iddle_1.sp_pos.y != program->item.sp_pos.y - 35)
	{
		program->item.sprite = ft_new_sprite_item(program->mlx,
				"./sprites/item.xpm");
		mlx_put_image_to_window(program->mlx, program->window.reference,
			program->item.sprite.reference,
			program->item.sp_pos.x, program->item.sp_pos.y);
	}
	else
	{
		program->map_str[i] = '0';
		program->count_int.item_count++;
		ft_printf_count(program);
	}
}

void	ft_background(t_program *program)
{
	program->background.sp_pos.x = 0;
	program->background.sp_pos.y = 0;
	program->background.sprite = ft_new_sprite_background(program->mlx,
			"./sprites/background.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->background.sprite.reference,
		program->background.sp_pos.x, program->background.sp_pos.y);
}

void	ft_platform(t_program *program)
{
	program->platform.sp_pos.x = program->map.sp_pos.x;
	program->platform.sp_pos.y = program->map.sp_pos.y;
	program->platform.sprite = ft_new_sprite_platform(program->mlx,
			"./sprites/platform.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->platform.sprite.reference,
		program->platform.sp_pos.x, program->platform.sp_pos.y);
}

void	ft_ladder(t_program *program)
{
	program->ladder.sp_pos.x = program->map.sp_pos.x;
	program->ladder.sp_pos.y = program->map.sp_pos.y;
	program->ladder.sprite = ft_new_sprite_ladder(program->mlx,
			"./sprites/ladder.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->ladder.sprite.reference,
		program->ladder.sp_pos.x, program->ladder.sp_pos.y);
}
