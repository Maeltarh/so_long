/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_climb_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:39:13 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 18:39:34 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_climb_5(t_program *program)
{

	program->climb_5.sprite = ft_new_sprite_climb_5(program->mlx, "./sprites/climb_5.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->climb_5.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_climb_6(t_program *program)
{

	program->climb_6.sprite = ft_new_sprite_climb_6(program->mlx, "./sprites/climb_6.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->climb_6.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}
