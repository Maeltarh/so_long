/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:43:08 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 20:25:46 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	render_upper_map(int i,t_program *program)
{
		ft_upper_left_wall(program);
		i++;
		program->upper_wall.sprite_position.x += 50;
		while (program->upper_wall.sprite_position.x <= program->window.size.x)
		{
			if (program->map_str[i] == 49)
				ft_upper_wall(program);
			program->upper_wall.sprite_position.x += 50;
			i++;
		}
		program->upper_right_wall.sprite_position.x = program->upper_wall.sprite_position.x - 100;
		ft_upper_right_wall(program);
		program->upper_wall.sprite_position.x = 0;
		render_middle_map(i, program);
}

void	render_middle_map(int i, t_program *program)
{
	while (program->map_str[i] != '\0')
	{
		if (program->map_str[i] != '\n')
		{
			program->left_wall.sprite_position.y += 50;
			program->right_wall.sprite_position.y += 50;
			program->right_wall.sprite_position.x = program->window.size.x - 50;
			ft_left_wall(program);
			ft_right_wall(program);
		}
		i++;
	}
	program->left_wall.sprite_position.y = 0;
	program->right_wall.sprite_position.y = 0;
}

void	render_lower_map(int i, t_program *program)
{

}
