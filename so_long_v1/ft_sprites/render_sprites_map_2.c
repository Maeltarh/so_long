/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites_map_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:31:47 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 19:38:51 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_right_wall(t_program *program)
{

	program->right_wall.sprite = ft_new_sprite_right_wall(program->mlx, "./sprites/right_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->right_wall.sprite.reference,
		program->right_wall.sprite_position.x, program->right_wall.sprite_position.y);
}

void	ft_upper_right_wall(t_program *program)
{

	program->upper_right_wall.sprite = ft_new_sprite_upper_right_wall(program->mlx, "./sprites/upper_right_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->upper_right_wall.sprite.reference,
		program->upper_right_wall.sprite_position.x, program->upper_right_wall.sprite_position.y);
}

void	ft_lower_right_wall(t_program *program)
{

	program->lower_right_wall.sprite = ft_new_sprite_lower_right_wall(program->mlx, "./sprites/lower_right_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->lower_right_wall.sprite.reference,
		program->lower_right_wall.sprite_position.x, program->lower_right_wall.sprite_position.y);
}

void	ft_lower_wall(t_program *program)
{

	program->lower_wall.sprite = ft_new_sprite_lower_wall(program->mlx, "./sprites/lower_wall.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->lower_wall.sprite.reference,
		program->lower_wall.sprite_position.x, program->lower_wall.sprite_position.y);
}
