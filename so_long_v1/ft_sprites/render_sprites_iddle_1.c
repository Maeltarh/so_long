/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_iddle_1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:04:13 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 10:19:46 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_iddle_1(t_program *program)
{
	program->iddle_1.sprite_position.x = 0;
	program->iddle_1.sprite_position.y = 0;
	program->iddle_1.sprite = ft_new_sprite_iddle_1(program->mlx, "./sprites/iddle_1.xpm");
	render_hero_coord(program);
	mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
		program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
}

void	ft_iddle_2(t_program *program)
{

	program->iddle_2.sprite = ft_new_sprite_iddle_2(program->mlx, "./sprites/iddle_2.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_2.sprite.reference,
		program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
}

void	ft_iddle_3(t_program *program)
{

	program->iddle_3.sprite = ft_new_sprite_iddle_3(program->mlx, "./sprites/iddle_3.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_3.sprite.reference,
		program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
}

void	ft_iddle_4(t_program *program)
{

	program->iddle_4.sprite = ft_new_sprite_iddle_4(program->mlx, "./sprites/iddle_4.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_4.sprite.reference,
		program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
}
