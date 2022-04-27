/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_run_left.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:22:05 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 10:47:02 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_run_1_left(t_program *program)
{

	program->run_1_left.sprite = ft_new_sprite_run_1_left(program->mlx, "./sprites/knight_run_1_left.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->run_1_left.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_run_2_left(t_program *program)
{

	program->run_2_left.sprite = ft_new_sprite_run_2_left(program->mlx, "./sprites/knight_run_2_left.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->run_2_left.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_run_3_left(t_program *program)
{

	program->run_3_left.sprite = ft_new_sprite_run_3_left(program->mlx, "./sprites/knight_run_3_left.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->run_3_left.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_run_4_left(t_program *program)
{

	program->run_4_left.sprite = ft_new_sprite_run_4_left(program->mlx, "./sprites/knight_run_4_left.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->run_4_left.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}
