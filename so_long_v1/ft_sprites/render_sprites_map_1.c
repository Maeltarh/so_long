/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_map_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:31:45 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 19:38:32 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_left_wall(t_program *program)
{

	program->left_wall.sprite = ft_new_sprite_left_wall(program->mlx, "./sprites/left_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->left_wall.sprite.reference,
		program->left_wall.sprite_position.x, program->left_wall.sprite_position.y);
}

void	ft_upper_left_wall(t_program *program)
{

	program->upper_left_wall.sprite = ft_new_sprite_upper_left_wall(program->mlx, "./sprites/upper_left_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->upper_left_wall.sprite.reference,
		program->upper_left_wall.sprite_position.x, program->upper_left_wall.sprite_position.y);
}

void	ft_lower_left_wall(t_program *program)
{

	program->lower_left_wall.sprite = ft_new_sprite_lower_left_wall(program->mlx, "./sprites/lower_left_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->lower_left_wall.sprite.reference,
		program->lower_left_wall.sprite_position.x, program->lower_left_wall.sprite_position.y);
}

void	ft_upper_wall(t_program *program)
{

	program->upper_wall.sprite = ft_new_sprite_upper_wall(program->mlx, "./sprites/upper_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->upper_wall.sprite.reference,
		program->upper_wall.sprite_position.x, program->upper_wall.sprite_position.y);
}
