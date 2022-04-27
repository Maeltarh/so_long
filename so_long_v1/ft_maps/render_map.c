/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:18:53 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/27 15:43:00 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	window_size(t_program *program, char *map)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (map[i++] != '\n')
		x++;
	i  = 0;
	while (map[i++] != '\0')
	{
		if (map[i] == '\n')
			y++;
	}
	program->window.size.x = x * 50;
	program->window.size.y = y * 50;
	return (0);
}

void	render_hero_coord(t_program *program)
{
	int i;

	i = 0;
	program->map.sp_pos.x = 0;
	program->map.sp_pos.y = 0;
	while (program->map_str[i] != '\0')
	{
		while (program->map.sp_pos.x <= program->window.size.x)
		{
			if (program->map_str[i] == 80)
			{
				program->iddle_1.sp_pos.x = program->map.sp_pos.x;
				program->iddle_1.sp_pos.y = program->map.sp_pos.y;
			}
			program->map.sp_pos.x += 50;
			i++;
		}
		program->map.sp_pos.x = 0;
		program->map.sp_pos.y += 50;
	}
}

void	render_map(int i,t_program *program)
{
//	render_upper_map(i, program);
	while (program->map_str[i] != '\0')
	{
		while (program->map.sp_pos.x <= program->window.size.x)
		{
			if (program->map_str[i] == 49)
			{
				mlx_put_image_to_window(program->mlx, program->window.reference,
					program->map.sprite.reference, program->map.sp_pos.x,
						program->map.sp_pos.y);
			}
			if (program->map_str[i] == 67)
				ft_item(i, program);
			if (program->map_str[i] == 50)
				ft_platform(program);
			if (program->map_str[i] == 51)
				ft_ladder(program);
			if (program->map_str[i] == 69)
				ft_exite_door(program);
			program->map.sp_pos.x += 50;
			i++;
		}
		program->map.sp_pos.x = 0;
		program->map.sp_pos.y += 50;
	}
}
