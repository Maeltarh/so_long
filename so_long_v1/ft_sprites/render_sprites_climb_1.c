/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_climb_1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:31:19 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 18:39:02 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_climb_1(t_program *program)
{

	program->climb_1.sprite = ft_new_sprite_climb_1(program->mlx, "./sprites/climb_1.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->climb_1.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_climb_2(t_program *program)
{

	program->climb_2.sprite = ft_new_sprite_climb_2(program->mlx, "./sprites/climb_2.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->climb_2.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_climb_3(t_program *program)
{

	program->climb_3.sprite = ft_new_sprite_climb_3(program->mlx, "./sprites/climb_3.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->climb_3.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_climb_4(t_program *program)
{

	program->climb_4.sprite = ft_new_sprite_climb_4(program->mlx, "./sprites/climb_4.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->climb_4.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}
