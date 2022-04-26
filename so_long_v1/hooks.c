/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhugueno <mhugueno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 09:30:59 by mhugueno          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:32 by mhugueno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_input(int key, void *param)
{
	t_program	*program = (t_program *)param;

	program->count_int.movement_count++;
	ft_printf_count(program);
	if (key == 53)
		exit (0);
	if (program->iddle_1.sprite_position.y < (program->window.size.y - 100))
		return (0);
	program->frame = 0;
	if (key == 2 || key == 0)
	{
		ft_animation_run(key, program);
		return (0);
	}
	ft_map(program);
	if (key == 13)
	{
		program->iddle_1.sprite_position.y -= 75;
		program->iddle_1.sprite_position.x += 40;
	}
	if (key == 1)
	{
		ft_crouch(program);
		return (0);
	}
	mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
		program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
	return (0);
}

void	ft_iddle_animation(t_program *program)
{
	if (program->frame == (ANIMATION_FRAMES * 5))
	{
		ft_map(program);
		ft_iddle_2(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 6))
	{
		ft_map(program);
		ft_iddle_3(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 7))
	{
		ft_map(program);
		ft_iddle_4(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 8))
	{
		ft_map(program);
		ft_iddle_5(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 9))
	{
		ft_map(program);
		ft_iddle_6(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 10))
	{
		ft_map(program);
		ft_iddle_7(program);
	}
	if (program->frame == (ANIMATION_FRAMES * 11))
	{
		ft_map(program);
		ft_iddle_8(program);
		program->frame = 0;
	}
}

int	ft_update(void *param)
{
	t_program	*program = (t_program *)param;

	program->frame++;
	ft_iddle_animation(program);
	if (program->iddle_1.sprite_position.y < (program->window.size.y - 100))
	{
		program->iddle_1.sprite_position.y += 2;
		ft_map(program);
		mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
			program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
	}
	if (program->iddle_1.sprite_position.y > (program->window.size.y - 100))
	{
		program->iddle_1.sprite_position.y--;
		ft_map(program);
		mlx_put_image_to_window(program->mlx, program->window.reference, program->iddle_1.sprite.reference,
			program->iddle_1.sprite_position.x, program->iddle_1.sprite_position.y);
	}
	return (0);
}
