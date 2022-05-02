/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_run_right.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:21:03 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:57:12 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_run_1_right(t_program *program)
{
	program->run_1_right.sprite = ft_new_sprite_run_1_right(program->mlx,
			"./sprites/knight_run_1_right.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->run_1_right.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_run_2_right(t_program *program)
{
	program->run_2_right.sprite = ft_new_sprite_run_2_right(program->mlx,
			"./sprites/knight_run_2_right.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->run_2_right.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_run_3_right(t_program *program)
{
	program->run_3_right.sprite = ft_new_sprite_run_3_right(program->mlx,
			"./sprites/knight_run_3_right.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->run_3_right.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_run_4_right(t_program *program)
{
	program->run_4_right.sprite = ft_new_sprite_run_4_right(program->mlx,
			"./sprites/knight_run_4_right.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->run_4_right.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}
