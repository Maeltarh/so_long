/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_map_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:27:13 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:58:56 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exite_door(t_program *program)
{
	program->exite_door.sp_pos.x = program->map.sp_pos.x;
	program->exite_door.sp_pos.y = program->map.sp_pos.y;
	program->exite_door.sprite = ft_new_sprite_exite_door(program->mlx,
			"./sprites/exite_door.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->exite_door.sprite.reference,
		program->exite_door.sp_pos.x, program->exite_door.sp_pos.y);
	if ((program->exite_door.sp_pos.x == (program->iddle_1.sp_pos.x)
			&& program->exite_door.sp_pos.y == program->iddle_1.sp_pos.y))
		exit (0);
}

void	ft_spike_trap(t_program *program)
{
	program->spike_trap.sprite = ft_new_sprite_spike_trap(program->mlx,
			"./sprites/spike_trap.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->spike_trap.sprite.reference,
		program->spike_trap.sp_pos.x, program->spike_trap.sp_pos.y);
}

void	ft_attack_1(t_program *program)
{
	program->attack_1.sprite = ft_new_sprite_attack_1(program->mlx,
			"./sprites/attack_1.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->attack_1.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_attack_2(t_program *program)
{
	program->attack_2.sprite = ft_new_sprite_attack_2(program->mlx,
			"./sprites/attack_2.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->attack_2.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}
