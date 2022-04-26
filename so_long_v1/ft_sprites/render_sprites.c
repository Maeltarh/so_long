/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_sprites.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:41:24 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 12:16:22 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_map(int i,t_program *program)
{
	while (program->map_str[i] != '\0')
	{
		while (program->map.sprite_position.x <= program->window.size.x)
		{
			if (program->map_str[i] == 49)
			{
				mlx_put_image_to_window(program->mlx, program->window.reference, program->map.sprite.reference,
					program->map.sprite_position.x, program->map.sprite_position.y);
			}
			if (program->map_str[i] == 67)
			{
				program->item.sprite_position.x = program->map.sprite_position.x;
				program->item.sprite_position.y = program->map.sprite_position.y;
				ft_item(i, program);
			}
			program->map.sprite_position.x += 50;
			i++;
		}
		program->map.sprite_position.x = 0;
		program->map.sprite_position.y += 50;
	}
}

void	ft_map(t_program *program)
{
	int i;

	i = 0;
	program->map.sprite_position.x = 0;
	program->map.sprite_position.y = 0;
	ft_background(program);
	program->map.sprite = ft_new_sprite_map(program->mlx, "./sprites/wall.xpm");
	render_map(i, program);
}

void	ft_item(int i, t_program *program)
{
	if (program->iddle_1.sprite_position.x != program->item.sprite_position.x ||
			program->iddle_1.sprite_position.y != program->item.sprite_position.y)
	{
		program->item.sprite = ft_new_sprite_item(program->mlx, "./sprites/item.xpm");
		mlx_put_image_to_window(program->mlx, program->window.reference, program->item.sprite.reference,
			program->item.sprite_position.x, program->item.sprite_position.y);
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
	program->background.sprite = ft_new_sprite_background(program->mlx, "./sprites/background.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->background.sprite.reference,
		program->background.sprite_position.x, program->background.sprite_position.y);
}

void	ft_crouch(t_program *program)
{
	program->crouch.sprite = ft_new_sprite_crouch(program->mlx, "./sprites/crouch.xpm");
	mlx_put_image_to_window(program->mlx, program->window.reference, program->crouch.sprite.reference,
		program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
}
