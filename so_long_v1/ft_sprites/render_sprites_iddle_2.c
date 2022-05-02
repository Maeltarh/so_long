/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_iddle_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:17:16 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/29 13:57:28 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_iddle_5(t_program *program)
{
	program->iddle_5.sprite = ft_new_sprite_iddle_5(program->mlx,
			"./sprites/iddle_5.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->iddle_5.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_iddle_6(t_program *program)
{
	program->iddle_6.sprite = ft_new_sprite_iddle_6(program->mlx,
			"./sprites/iddle_6.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->iddle_6.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_iddle_7(t_program *program)
{
	program->iddle_7.sprite = ft_new_sprite_iddle_7(program->mlx,
			"./sprites/iddle_7.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->iddle_7.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}

void	ft_iddle_8(t_program *program)
{
	program->iddle_8.sprite = ft_new_sprite_iddle_8(program->mlx,
			"./sprites/iddle_8.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference,
		program->iddle_8.sprite.reference,
		program->iddle_1.sp_pos.x, program->iddle_1.sp_pos.y);
}
