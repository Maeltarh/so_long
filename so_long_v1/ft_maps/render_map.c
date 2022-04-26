/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:18:53 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 10:11:40 by mhugueno         ###   ########.fr       */
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
	program->map.sprite_position.x = 0;
	program->map.sprite_position.y = 0;
	while (program->map_str[i] != '\0')
	{
		while (program->map.sprite_position.x <= program->window.size.x)
		{
			if (program->map_str[i] == 80)
			{
				program->iddle_1.sprite_position.x = program->map.sprite_position.x;
				program->iddle_1.sprite_position.y = program->map.sprite_position.y;
			}
			program->map.sprite_position.x += 50;
			i++;
		}
		program->map.sprite_position.x = 0;
		program->map.sprite_position.y += 50;
	}
}